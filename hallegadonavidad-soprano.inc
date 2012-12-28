\context Staff = "soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "soprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 2/4
		\clef "treble"
		\key c \major

		R2*4  |
%% 5
		r4 e' 8 f'  |
		g' 2  |
		R2*2  |
		r4 e' 8 f'  |
%% 10
		g' 4 r  |
		r4 a' 8 e'  |
		g' 8 f' f' e'  |
		f' 4 d' 8 e'  |
		f' 4 r  |
%% 15
		r4 g' 8 d'  |
		f' 8 e' e' d'  |
		e' 4 e' 8 f'  |
		g' 4 r  |
		r4 a' 8 e'  |
%% 20
		g' 8 f' f' g'  |
		af' 2  |
		r4 c' 8 d'  |
		e' 4 g'  |
		d' 4 g'  |
%% 25
		c' 2  |
		r4 e' 8 f'  |
		g' 4 r  |
		r4 a' 8 e'  |
		g' 8 f' f' e'  |
%% 30
		f' 4 d' 8 e'  |
		f' 4 r  |
		r4 g' 8 d'  |
		f' 8 e' e' d'  |
		e' 4 e' 8 f'  |
%% 35
		g' 4 r  |
		r4 a' 8 e'  |
		g' 8 f' f' g'  |
		af' 2  |
		r4 c' 8 d'  |
%% 40
		e' 4 g'  |
		d' 4 g'  |
		c' 2  |
		r4 g' 8. f' 16  |
		e' 4 r  |
%% 45
		r4 a' 8 e'  |
		g' 8 f' f' e'  |
		f' 4 f' 8. e' 16  |
		d' 4 r  |
		r4 g' 8 d'  |
%% 50
		f' 8 e' e' d'  |
		e' 4 g' 8. f' 16  |
		e' 4 r  |
		r4 a' 8 e'  |
		g' 8 f' f' g'  |
%% 55
		af' 2  |
		r4 c' 8 d'  |
		e' 4 g'  |
		d' 2  |
		g' 2  |
%% 60
		c' 2  |
		R2*4  |
%% 65
		r4 a' 8 bf'  |
		\key f \major
		c'' 4 c''  |
		c'' 4 bf' 8 a'  |
		g' 4 f'  |
		f' 4 g' 8 a'  |
%% 70
		bf' 4 bf'  |
		bf' 4 a' 8 g'  |
		f' 4 g'  |
		g' 4 a' 8 bf'  |
		c'' 4 c''  |
%% 75
		c'' 4 bf' 8 a'  |
		c'' 4 bf'  |
		bf' 4 f' 8 g'  |
		a' 4 c''  |
		g' 2  |
%% 80
		c'' 2  |
		f' 2 ~  |
		f' 2  |
		R2  |
		r4 e' 8 f'  |
%% 85
		\key c \major
		g' 4 r  |
		r4 a' 8 e'  |
		g' 8 f' f' e'  |
		f' 4 d' 8 e'  |
		f' 4 r  |
%% 90
		r4 g' 8 d'  |
		f' 8 e' e' d'  |
		e' 4 e' 8 f'  |
		g' 4 r  |
		r4 a' 8 e'  |
%% 95
		g' 8 f' f' g'  |
		af' 2  |
		r4 c' 8 d'  |
		e' 4 g'  |
		d' 2  |
%% 100
		g' 2  |
		c' 2  |
		R2*4  |
		r4 a' 8 bf'  |
		\key f \major
		c'' 4 c''  |
		c'' 4 bf' 8 a'  |
		g' 4 f'  |
%% 110
		f' 4 g' 8 a'  |
		bf' 4 bf'  |
		bf' 4 a' 8 g'  |
		f' 4 g'  |
		g' 4 a' 8 bf'  |
%% 115
		c'' 4 c''  |
		c'' 4 bf' 8 a'  |
		c'' 4 bf'  |
		bf' 4 f' 8 g'  |
		a' 4 c''  |
%% 120
		g' 2  |
		c'' 2  |
		f' 2 ~  |
		f' 2  |
		R2  |
%% 125
		r4 g' 8. f' 16  |
		\key c \major
		e' 4 r  |
		r4 a' 8 e'  |
		g' 8 f' f' e'  |
		f' 4 f' 8. e' 16  |
%% 130
		d' 4 r  |
		r4 g' 8 d'  |
		f' 8 e' e' d'  |
		e' 4 g' 8. f' 16  |
		e' 4 r  |
%% 135
		r4 a' 8 e'  |
		g' 8 f' f' g'  |
		af' 2  |
		r4 c' 8 d'  |
		e' 4 g'  |
%% 140
		d' 2  |
		g' 2  |
		c' 2  |
		R2*3  |
		\bar "|."
	}

	\lyricsto "soprano" \new Lyrics \lyricmode {
		% intro
		¡Na -- vi -- dad!

		% estrofa 1
		¡Na -- vi -- dad!, % Na -- vi -- dad,
		u -- "na es" -- tre -- lla bri -- lla -- rá,
		¡Na -- vi -- dad!, % Na -- vi -- dad,
		al na -- cer el ni -- ño Dios,
		¡Na -- vi -- dad!, % Na -- vi -- dad,
		es -- ta fe -- cha tan fe -- liz,
		es -- ta -- re -- mos con el rey.

		% estrofa 2
		¡Na -- vi -- dad!, % Na -- vi -- dad,
		na -- ci -- mien -- to de Je -- sús,
		¡Na -- vi -- dad!, % Na -- vi -- dad,
		blan -- "ca es" -- te -- la de quie -- tud,
		¡Na -- vi -- dad!, % Na -- vi -- dad,
		un e -- ter -- no res -- plan -- dor,
		de fe -- li -- ci -- dad "y a" -- mor.

		% estrofa 3
		¡Na -- vi -- dad!, % Na -- vi -- dad,
		u -- na voz "de e" -- ter -- ni -- dad,
		¡Na -- vi -- dad!, % Na -- vi -- dad,
		u -- na voz de sal -- va -- ción,
		¡Na -- vi -- dad!, % Na -- vi -- dad,
		"la es" -- pe -- ran -- "za en" "la o" -- ra -- ción
		"y el" mi -- la -- gro del a -- mor.

		% parte b
		Na -- vi -- dad, la paz de "la hu" -- ma -- ni -- dad,
		de los pue -- blos la re -- con -- ci -- lia -- ción.
		Na -- vi -- dad, un mun -- do de fe "y a" -- mor,
		ha lle -- ga -- do Na -- vi -- dad.

		% estrofa 1
		¡Na -- vi -- dad!, % Na -- vi -- dad,
		u -- "na es" -- tre -- lla bri -- lla -- rá,
		¡Na -- vi -- dad!, % Na -- vi -- dad,
		al na -- cer el ni -- ño Dios,
		¡Na -- vi -- dad!, % Na -- vi -- dad,
		es -- ta fe -- cha tan fe -- liz,
		es -- ta -- re -- mos con el rey.

		% parte b
		Na -- vi -- dad, la paz de "la hu" -- ma -- ni -- dad,
		de los pue -- blos la re -- con -- ci -- lia -- ción.
		Na -- vi -- dad, un mun -- do de fe "y a" -- mor,
		ha lle -- ga -- do Na -- vi -- dad.

		% estrofa 2
		¡Na -- vi -- dad!, % Na -- vi -- dad,
		na -- ci -- mien -- to de Je -- sús,
		¡Na -- vi -- dad!, % Na -- vi -- dad,
		blan -- "ca es" -- te -- la de quie -- tud,
		¡Na -- vi -- dad!, % Na -- vi -- dad,
		un e -- ter -- no res -- plan -- dor,
		de fe -- li -- ci -- dad "y a" -- mor.
	}

>>
