% This LilyPond file was generated by Rosegarden 1.5.1
\include "english.ly"
\version "2.10.0"
% point and click debugging is disabled
#(ly:set-option 'point-and-click #f)
\header {
    composer = "Romeo Valdés"
    copyright = "Copyright © 1972 Romeo Valdés"
    title = "Ha llegado Navidad"
    tagline = "Coro Juvenil San Juan Bosco"
}
#(set-global-staff-size 20)
#(set-default-paper-size "letter")
\paper {
	#(define line-width (* 7 in))
	print-first-page-number = ##t
	ragged-bottom = ##t
	first-page-number = 1
}
global = { 
    \time 2/4
    \skip 2*17  %% 1-18
}
globalTempo = {
    \tempo 4 = 74  \skip 2*17
}
\include "hallegadonavidad-guitarra.def"
\score {
%    \new StaffGroup
    <<
        % force offset of colliding notes in chords:
        \override Score.NoteColumn #'force-hshift = #1.0

	\include "hallegadonavidad-acordes.inc"
	\new StaffGroup <<
		\include "hallegadonavidad-soprano.inc"
		\include "hallegadonavidad-mezzo.inc"
		\include "hallegadonavidad-tenor.inc"
	>>
	\include "hallegadonavidad-violin.inc"
	%\include "hallegadonavidad-guitarra.inc"

    >> % notes

	\layout {
		\context { \RemoveEmptyStaffContext }
		\context { \ChordNames \consists Instrument_name_engraver }
	}
} % score
