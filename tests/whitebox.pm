# This Perl file contains driver routines for running white box tests in
# appropriately compiled executables

# $Id: whitebox.pm 8016 2007-03-01 00:23:18Z rjpeters $

package whitebox;

require Exporter;

@ISA = qw(Exporter);

use strict;
use Cwd;

use testsuite;

%whitebox::options =
    (
     "--help"          =>  { varref => \$testsuite::SHOW_HELP,
			     optval => 1,
			     help => "print this help listing" },
     "--debug"         =>  { varref => \$testsuite::OPT_DEBUG,
			     optval => 1,
			     help => "print debugging information about the test suite perl framework itself" },
     "--verbosity"     =>  { varref => \$testsuite::VERBOSITY,
			     help => "specify a different verbosity level:\n* -1 = no output, result of test run is given by exit status;\n* 0 = just print a single summary line indicating how many tests succeeded;\n* 1 = just print one line per test indicating success or failure;\n* 2 = print the command-line options used for each test, and list each reference file that is tested;\n* 3 = as before, but print detailed analysis of any failed reference tests;\n* 4 = as before, but show the stdout+stderr from every command, even if the test doesn't fail" },
     "--quit-on-fail"  =>  { varref => \$testsuite::OPT_QUIT_ON_FAIL,
			     help => "quit immediately if any test fails" },
     "--noprofiling"   =>  { varref => \$testsuite::DO_PROFILING,
			     optval => 0,
			     help => "skip parsing of gmon.out profile files that may be generated by the executables being tested" },
     "--save-gmons"    =>  { varref => \$testsuite::SAVE_GMONS,
			     optval => 1,
			     help => "don't remove any gmon.out files that may be generated by the executable being tested" },
     );

# usage: run_one_test_wrapper(testbin, id, name)
sub run_one_test_wrapper {

    my $testbin = $_[0];
    my $id = $_[1];
    my $name = $_[2];

    vputs(">=", 0, "test ${name} ... ");

    my $stderr_results = testsuite::tempfile_name();

    my $output = `$testbin --run $id 2> $stderr_results`;

    my $code = $?;

    my @results = split /\n/, $output;

    if (scalar @results > 0 && $results[0] == 1) {
        vputs(">=", 0, "ok\n");
	return @testsuite::TEST_RESULT_OK;
    } else {
        vputs(">=", 0, "FAILED!\n");
	vputs(">=", 0, $output);
        my @stderr_lines = testsuite::lines_of($stderr_results);
        if (scalar @stderr_lines > 0) {
            vputs(">=", 0, "\tstderr from \"$testbin --run $id\":\n\t\t");
	    vputs(">=", 0, join("\t\t", @stderr_lines));
        }
	push @testsuite::FAILURES, $name;
	return @testsuite::TEST_RESULT_FAIL;
    }
}

# usage: make_test_scripts(progname)
sub make_test_scripts {

    my $progname = $_[0];

    # By convention, when passed the --query option, the white-box
    # test executables return a list that contains a sequence of {id
    # test-name} pairs
    my $raw_list = `$progname --perlquery 2> /dev/null`;

    if ($? != 0) {
	die "error while running $progname --perlquery\n";
    }

    my @test_scripts = ();

    # Here we parse the id/test-name pairs, extracting the id for
    # later use to drive the particular test, and reformatting the
    # name into something readable by replacing the "_xx_"'s with
    # "--".
    foreach my $item (split(/\n/, $raw_list)) {
	my ($id, $name) = split(/\t/, $item);
	$name =~ s/_xx_/--/g;
	$name =~ s/_/-/g;

	push(@test_scripts,
	     sub { whitebox::run_one_test_wrapper($progname, $id, $name) } );
    }

    return @test_scripts;
}

# usage: run(progname)
sub run {
    my $progname = $_[0];

    testsuite::parse_options(\%whitebox::options, @ARGV);

    if (! -f $progname) {

	# ok, the literal program name didn't exist, but check instead
	# for the same thing ending in .exe, which would be necessary
	# on windows/cygwin systems:
	if (-f "${progname}.exe") {
	    $progname = "${progname}.exe";
	}
	else {
	    vputs(">=", 0, "FAILED! no such file: '${progname}'\n");
	    exit(1);
	}
    }
    if (! -x $progname) {
        vputs(">=", 0, "FAILED! $progname is not an executable program\n");
        exit(1);
    }
    my @test_scripts = whitebox::make_test_scripts($progname);
    my $code = testsuite::run_tests($progname, './', @test_scripts);
    exit($code);
}

1;