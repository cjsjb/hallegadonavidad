\context Staff = "tenor" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Tenor"
	\set Staff.shortInstrumentName = "T."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "tenor" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 2/4
		\clef "treble_8"
		\key c \major

		R2*4  |
%% 5
		r4 e' 8 f'  |
		g' 2  |
		R2*4  |
		r4 cs' 8 cs'  |
		e' 8 d' d' cs'  |
		d' 4 r  |
		R2  |
%% 15
		r4 b 8 b  |
		d' 8 c' c' b  |
		c' 4 r  |
		R2  |
		r4 cs' 8 cs'  |
%% 20
		e' 8 d' d' e'  |
		d' 2  |
		r4 g 8 g  |
		c' 4 e'  |
		b 4 d'  |
%% 25
		g 2  |
		R2*2  |
		r4 cs' 8 cs'  |
		e' 8 d' d' cs'  |
%% 30
		d' 4 r  |
		R2  |
		r4 b 8 b  |
		d' 8 c' c' b  |
		c' 4 r  |
%% 35
		R2  |
		r4 cs' 8 cs'  |
		e' 8 d' d' e'  |
		d' 2  |
		r4 g 8 g  |
%% 40
		c' 4 e'  |
		b 4 d'  |
		g 2  |
		R2*22  |
%% 65
		r4 c' 8 e'  |
		\key f \major
		f' 4 f'  |
		e' 4 c' 8 c'  |
		a 4 a  |
		a 4 c' 8 c'  |
%% 70
		d' 4 d'  |
		d' 4 bf 8 bf  |
		g 4 g  |
		bf 4 c' 8 e'  |
		f' 4 f'  |
%% 75
		ef' 4 ef' 8 ef'  |
		d' 4 d'  |
		df' 4 bf 8 bf  |
		c' 4 f'  |
		bf 2  |
%% 80
		e' 2  |
		a 2 ~  |
		a 2  |
		R2*2  |
%% 85
		\key c \major
		R2  |
		r4 cs' 8 cs'  |
		e' 8 d' d' cs'  |
		d' 4 r  |
		R2  |
%% 90
		r4 b 8 b  |
		d' 8 c' c' b  |
		c' 4 r  |
		R2  |
		r4 cs' 8 cs'  |
%% 95
		e' 8 d' d' e'  |
		d' 2  |
		r4 g 8 g  |
		c' 4 e'  |
		b 2  |
%% 100
		d' 2  |
		g 2  |
		R2*4  |
		r4 c' 8 e'  |
		\key f \major
		f' 4 f'  |
		e' 4 c' 8 c'  |
		a 4 a  |
%% 110
		a 4 c' 8 c'  |
		d' 4 d'  |
		d' 4 bf 8 bf  |
		g 4 g  |
		bf 4 c' 8 e'  |
%% 115
		f' 4 f'  |
		ef' 4 ef' 8 ef'  |
		d' 4 d'  |
		df' 4 bf 8 bf  |
		c' 4 f'  |
%% 120
		bf 2  |
		e' 2  |
		a 2 ~  |
		a 2  |
		R2*2  |
		\key c \major
		R2*20
		\bar "|."
	}

	\lyricsto "tenor" \new Lyrics \lyricmode {
		% intro
		¡Na -- vi -- dad!

		% estrofa 1
		% ¡Na -- vi -- dad!, ¡Na -- vi -- dad!,
		U -- "na es" -- tre -- lla bri -- lla -- rá
		% ¡Na -- vi -- dad!, ¡Na -- vi -- dad!,
		al na -- cer el ni -- ño Dios,
		% ¡Na -- vi -- dad!, ¡Na -- vi -- dad!,
		Es -- ta fe -- cha tan fe -- liz,
		es -- ta -- re -- mos con el rey.

		% estrofa 2
		% ¡Na -- vi -- dad!, ¡Na -- vi -- dad!,
		Na -- ci -- mien -- to de Je -- sús,
		% ¡Na -- vi -- dad!, ¡Na -- vi -- dad!,
		blan -- "ca es" -- te -- la de quie -- tud,
		% ¡Na -- vi -- dad!, ¡Na -- vi -- dad!,
		un e -- ter -- no res -- plan -- dor,
		de fe -- li -- ci -- dad "y a" -- mor.

%		% estrofa 3
%		% ¡Na -- vi -- dad!, ¡Na -- vi -- dad!,
%		u -- na voz "de e" -- ter -- ni -- dad,
%		% ¡Na -- vi -- dad!, ¡Na -- vi -- dad!,
%		u -- na voz de sal -- va -- ción,
%		% ¡Na -- vi -- dad!, ¡Na -- vi -- dad!,
%		"la es" -- pe -- ran -- "za en" "la o" -- ra -- ción
%		"y el" mi -- la -- gro del a -- mor.

		% parte b
		Na -- vi -- dad, la paz de "la hu" -- ma -- ni -- dad,
		de los pue -- blos la re -- con -- ci -- lia -- ción.
		Na -- vi -- dad, un mun -- do de fe "y a" -- mor,
		ha lle -- ga -- do Na -- vi -- dad.

		% estrofa 1
		% ¡Na -- vi -- dad!, ¡Na -- vi -- dad!,
		U -- "na es" -- tre -- lla bri -- lla -- rá
		% ¡Na -- vi -- dad!, ¡Na -- vi -- dad!,
		al na -- cer el ni -- ño Dios,
		% ¡Na -- vi -- dad!, ¡Na -- vi -- dad!,
		Es -- ta fe -- cha tan fe -- liz,
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