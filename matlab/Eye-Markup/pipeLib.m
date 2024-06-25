function [ret,args] = pipeLib(ref)
% PIPELIB Returns pipes for different projects
%
%   PIPELIB returns the entire library.
%
%   [pipe, args] = PIPELIB(ref) returns the specific function pipeline 
%   with that label 'ref', and its associated runtime arguments.
% 
%   ret = PIPELIB('names') returns only the names of the pipes.
%
%   The pipe fields are as follows:
%
%       label: the access or key name
%       owner: the primary user of that pipe
%       projinfo: quick description of project/purpose
%       pipe: the functions making up the pipe
%       args: the arguments to run markEye on
%   Note: Pipes all currently use the same export function.  This may
%   change if we need to export different types of files.

% for specific requests 
if nargin == 1
    P = pipeLib;
    if strcmp(ref, 'names')
        ret = {P.label};
        return;
    end
    ret = P(strcmp(ref,{P.label}));
    if numel(ret)>1
        ret = ret(1);
    elseif isempty(ret)
        ret = P(strcmp('empty',{P.label}));
    end
    args = ret.args;
    ret = ret.pipe;
    return;
end

% the field labels
flds = {'label','owner', 'projinfo', 'pipe', 'args'};

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% the definitions:
% NB: currently this is a poor way to store pipelines, 
% but it has some flexibility
% TODO: string representations/def'n files/macro-type files, don't know
% how the structure will go down

    function DATA = initList
        settings = defaultparams;
        DATA = { ...
            'empty', 'jshen', 'do nothing', {}, {'exportfile', false}; ...
            ...
            'minimal', 'jshen', 'mark saccades and blinks only', ...
            {@importEyeData, @findOffScreen, @cleanTrace, ...
            @smoothTrace, @eliminateBlinks, @findSaccades}, {}; ...
            ...
            'plot_eyeS', 'jshen', 'plot an e-ceyeS file', ...
            {@importEyeSData}, {'show_trace', 'exportfile', false, ...
                'skipfile', false}; ...
            ...
            'more_eyeS', 'jshen', 'plot an e-ceyeS file and get some info', ...
            {@importEyeSData}, {'debug', 'exportfile',false}; ...
            ...
            'human_std',{'dberg','jshen'}, ...
            'refactored version of dave''s algorithm', ...
            {@importEyeData, @findOffScreen, @cleanTrace, ...
            @smoothTrace, @eliminateBlinks, @findSaccades, ...
            @cleanSaccades, @findSmFix, @polishFirstPass, ...
            @polishSecondPass}, {}; ...
            ...
            'plain_eyeS',{'jin','jshen'}, ...
            'refactored version of dave''s algorithm, vanilla eyeS file', ...
            {@importEyeData, @findOffScreen, @cleanTrace, ...
            @smoothTrace, @eliminateBlinks, @findSaccades, ...
            @cleanSaccades, @findSmFix, @polishFirstPass, ...
            @polishSecondPass}, {'stats', {'x' 'y' 'pd' 'status'}, ...
            'give_col_header', 0}; ...
            ...
            'gender_diff',{'dberg','jshen'}, ...
            ['lowered sac-thresholds for catching' ... 
            'face-processing saccades'], ...
            {@importEyeData, @findOffScreen, @cleanTrace, ...
            @smoothTrace, @eliminateBlinks, @findSaccades, ...
            @cleanSaccades, @findSmFix, @polishFirstPass, ...
            @polishSecondPass}, ...
            {'sac_minamp',0.7, 'sac_minvel', 15, ...
            'stats',...
            [getvalue('stats', settings) ...
                'bfix_dur' 'afix_dur' ...
                'time_to_prev_saccade' 'time_to_next_saccade']}; ...
            ...
            'ilab_ilink_partialscreen',{'pohetsn'}, ...
            ['refactored version of dave''s algorithm. used for the '...
            'eye traces collected from ilink in ilab'], ...
            {@importEyeSData, @findOffScreen, @cleanTrace, ...
            @smoothTrace, @eliminateBlinks, @findSaccades, ...
            @cleanSaccades, @findSmFix, @polishFirstPass, ...
            @polishSecondPass}, {'pup_range', [100 10000],...
            'screen_size', [1280 1024], 'plot_screenwin',[ 0 1920 0 1080],...
            'pup_maxstep', 1000, 'sac_minamp', 2, 'ppd', [39 39], 'alignstimulitime', 1}; ...
            ...
            'reynolds_ilink',{'pohetsn'}, ...
            ['refactored version of dave''s algorithm. used for the '...
            'eye traces collected from ilink in reynolds lab'], ...
            {@importEyeSData, @findOffScreen, @cleanTrace, ...
            @smoothTrace, @eliminateBlinks, @findSaccades, ...
            @cleanSaccades, @findSmFix, @polishFirstPass, ...
            @polishSecondPass}, {'pup_range', [100 10000],...
            'screen_size', [1280 1024], 'plot_screenwin',[ 0 1280 0 1024],...
            'pup_maxstep', 1000, 'sac_minamp', 2, 'alignstimulitime', 1}; ...
            ...
            'eyelinkII_munoz',{'pohetsn'}, ...
            ['parsing data for eyelink II in Munoz lab. patient + development study.'], ...
            {@importEyeSData, @findOffScreen, @cleanTrace, ...
            @smoothTrace, @eliminateBlinks, @findSaccades, ...
            @cleanSaccades, @findSmFix, @polishFirstPass, ...
            @polishSecondPass}, {'pup_range', [100 10000],...
            'screen_size', [640 480], 'sf', 250, 'ppd', [19 19], ...
            'maxsaclength', 800, 'pup_maxstep', 1000, 'sac_minamp', 2,...
            'alignstimulitime', 1}; ...
            ...
            'patient08_swj',{'pohetsn'}, ...
            ['parsing data to find square wave jerks'], ...
            {@importEyeSData, @findOffScreen, @cleanTrace, ...
            @smoothTrace, @eliminateBlinks, @findSaccades, ...
            @cleanSaccades, @findSmFix, @polishFirstPass, ...
            @polishSecondPass}, {'pup_range', [100 10000],...
            'screen_size', [640 480], 'sf', 250, 'ppd', [19 19], ...
            'maxsaclength', 800, 'pup_maxstep', 1000, 'sac_minamp', 0.5,...
            'alignstimulitime', 1, 'out_ext', 'eyeswj'}; ...
            ...
            };
    end

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% the guts of reading from a raw cell array into struct array
listO = initList;
Nfxns = size(listO,1);
Nflds = numel(flds);

% initialize the structure, based on the fields
fldInit = reshape([flds; cell(1,Nflds)],1,2*Nflds);
ret = struct(fldInit{:});
for ii = 1:Nfxns
    for jj = 1:Nflds
        ret(ii).(flds{jj}) = listO{ii,jj};
    end
end

end
