% //////////////////////////////////////////////////////////////////// %
%           Surprise Linear Model - Copyright (C) 2004-2007            %
% by the University of Southern California (USC) and the iLab at USC.  %
% See http://iLab.usc.edu for information about this project.          %
% //////////////////////////////////////////////////////////////////// %
% This file is part of the iLab Neuromorphic Vision Toolkit            %
%                                                                      %
% The Surprise Linear Model is free software; you can                  %
% redistribute it and/or modify it under the terms of the GNU General  %
% Public License as published by the Free Software Foundation; either  %
% version 2 of the License, or (at your option) any later version.     %
%                                                                      %
% The Surprise Linear Model is distributed in the hope                 %
% that it will be useful, but WITHOUT ANY WARRANTY; without even the   %
% implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR      %
% PURPOSE.  See the GNU General Public License for more details.       %
%                                                                      %
% You should have received a copy of the GNU General Public License    %
% along with the iBaysian Surprise Matlab Toolkit; if not, write       %
% to the Free Software Foundation, Inc., 59 Temple Place, Suite 330,   %
% Boston, MA 02111-1307 USA.                                           %
% //////////////////////////////////////////////////////////////////// %
%
% Primary maintainer for this file: T. Nathan Mundhenk <mundhenk@usc.edu>
% $Revision: 55 $ 
% $Id$
% $HeadURL: https://surprise-mltk.svn.sourceforge.net/svnroot/surprise-mltk/source/surprise_toolkit/example_graph.m $

function stats = linear_model_diff_space(datax, datay, frame)

% EXAMPLE: stats = compute_combined_stats(AVG,NEWFRAME)
% or STD_STATS = compute_combined_stats(STATS_H2SV2(:,4),FRAME_H2SV2)

dprint('diff space');

stats = zeros(size(datax,1),1);

for i=1:size(datax,1)
    if frame(i,:) == 0
        stats(i,:) = 0;
        lastx      = datax(i,:);
        lasty      = datay(i,:);
    else
        stats(i,:) = sqrt((lastx - datax(i,:))^2 + (lasty - datay(i,:))^2);      
        lastx      = datax(i,:);
        lasty      = datay(i,:);   
    end
end



