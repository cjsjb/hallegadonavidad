        \context Staff = "track 3" << 
            \set Staff.instrumentName = "Cuerdas"
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "voice 3" {
                \override Voice.TextScript #'padding = #2.0                \override MultiMeasureRest #'expand-limit = 1

                \time 2/4
                \clef "treble"
                \key e \major
                R2  |
                < e' gis' b' > 2  |
                < cis'' gis' f' b' > 2  |
                < fis' a' cis'' > 2 ~  |
%% 5
                < fis' a' cis'' > 2  |
                < b' dis'' fis' a' > 2 ~  |
                < fis' a' b' dis'' > 2  |
                < e' gis' b' > 2 ~  |
                < e' gis' b' > 2 ~  |
%% 10
                < b' e' gis' > 2  |
                < cis'' b' f' gis' > 2  |
                < fis' a' cis'' > 2  |
                < a' c'' e' > 2  |
                R2  |
%% 15
                < e' gis' b' > 2  |
                < b' dis'' fis' a' > 2  |
                < e' gis' b' > 4 ~ < e' a' cis'' >  |
                %< b' gis' e' > 2  |
                %\bar "|."
            } % Voice
        >> % Staff
