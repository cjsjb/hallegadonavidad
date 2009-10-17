% This LilyPond file was generated by Rosegarden 1.5.1
\version "2.10.0"
% point and click debugging is disabled
#(ly:set-option 'point-and-click #f)
\header {
    composer = "Romeo Valdés"
    copyright = "Copyright (c) 1972 Romeo Valdés"
    title = "Navidad, Navidad"
    tagline = ""
}
#(set-global-staff-size 20)
#(set-default-paper-size "letter")
global = { 
    \time 2/4
    \skip 2*17  %% 1-18
}
globalTempo = {
    \tempo 4 = 70  \skip 2*17
}
\score {
%    \new StaffGroup
    <<
        % force offset of colliding notes in chords:
        \override Score.NoteColumn #'force-hshift = #1.0
	\override Score.MetronomeMark #'padding = #8.0

	\include "navidadnavidad-acordes.inc"
	\include "navidadnavidad-voz.inc"
%	\include "navidadnavidad-cuerdas.inc"
%	\include "navidadnavidad-cello.inc"

    >> % notes

    \layout {
%        #(layout-set-staff-size 26)
    }
} % score
