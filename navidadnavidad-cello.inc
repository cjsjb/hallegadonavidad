        \context Staff = "track 2" << 
            \set Staff.instrumentName = "Cello"
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "voice 2" {
                \override Voice.TextScript #'padding = #2.0                \override MultiMeasureRest #'expand-limit = 1

                \time 2/4
                \clef "bass"
                \key e \major
                R2  |
                e 2  |
                cis 2  |
                fis, 2 ~  |
%% 5
                fis, 2  |
                b, 2  |
                a, 2  |
                gis, 2  |
                e, 2  |
%% 10
                e 2  |
                cis 2  |
                fis, 2  |
                a, 2  |
                R2  |
%% 15
                e 2  |
                b, 2  |
                e 4 a,  |
                %e 2  |
                %\bar "|."
            } % Voice
        >> % Staff
