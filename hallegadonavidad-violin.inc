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
		c'' 4 bf' 8 a'  |
		f' 4 f'  |
%% 75
		a' 4 a'  |
		bf' 4 bf'  |
		bf' 2  |
		r8 f' g' a'  |
		c'' 2  |
%% 80
		bf' 4 g'  |
		f' 2  |
		R2*3  |
%% 85
		\key c \major
		R2*16  |
		c' 4. b 16 c'  |
		d' 4. c' 16 d'  |
		e' 16 g' ~ g' 4.  |
		f' 4 e' 8 d'  |
%% 105
		g' 2  |
		R2*20  |
		\key c \major
		R2*21  |
		\bar "|."
	}

>>
