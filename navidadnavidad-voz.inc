        \context Staff = "track 1" 
        \with {
                fontSize = #+2
                \override StaffSymbol #'staff-space = #(magstep +2)
        }
	<< 
            %\set Staff.instrumentName = "Voz"
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "voice 1" {
                \override Voice.TextScript #'padding = #2.0
                \override MultiMeasureRest #'expand-limit = 1

                \time 2/4
                \clef "treble"
                \key e \major
		\repeat volta 3 {
			%% Na- vi-...
	                r4 gis' 8 a'  |
	                b' 4 gis' 8 fis'  |
	                f' 4 cis'' 8 gis'  |
	                b' 8 a' a' gis'  | \break
	%% 5
			%% Na- vi-...
	                a' 4 fis' 8 gis'  |
	                a' 4 fis' 8 e'  |
	                dis' 4 b' 8 fis'  |
	                a' 8 gis' gis' fis'  | \break
	                gis' 4 gis' 8 a'  |
	%% 10
	                b' 4 gis' 8 fis'  |
	                f' 4 cis'' 8 gis'  |
	                b' 8 a' a' b'  |
	                c'' 2  | \break
	                r4 e' 8 fis'  |
	%% 15
	                gis' 4 b'  |
	                fis' 4 b'  |
	                e' 2  \bar ":|"
		}
            } % Voice
	    \include "navidadnavidad-letra.inc"
        >> % Staff
