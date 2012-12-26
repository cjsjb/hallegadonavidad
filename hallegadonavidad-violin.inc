\context Staff = "violin" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Violín"
	\set Staff.shortInstrumentName = "V."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "violin" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 2/4
		\clef "treble"
		\key c \major

		r4 e' 8 f'  |
		g' 4. e'' 8  |
		d'' 4. e'' 8  |
		c'' 4 g'  |
%% 5
		g' 2  |
		g' 4. e'' 8  |
		d'' 4. e'' 8  |
		c'' 4 g'  |
		g' 2  |
%% 10
		R2*50  |
%% 60
		c' 4. b 16 c'  |
		d' 4. c' 16 d'  |
		e' 16 g' ~ g' 4.  |
		f' 4 e' 8 d'  |
		g' 2  |
%% 65
		R2  |
		\key f \major
		f' 2  |
		e' 2  |
		d' 2  |
		c' 8 c' f' a'  |
%% 70
		bf' 2  |
		c'' 2  |
		d'' 2  |
		c'' 2  |
		R2*11  |
%% 85
		\key c \major
		R2*16  |
		c' 4. b 16 c'  |
		d' 4. c' 16 d'  |
		e' 16 g' ~ g' 4.  |
		f' 4 e' 8 d'  |
%% 105
		g' 2  |
		R2  |
		\key f \major
		R2*19  |
		\key c \major
		R2*19  |
%% 145
		r2  |
		\bar "|."
	}

>>
