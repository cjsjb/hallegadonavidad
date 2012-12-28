\context Staff = "mezzosoprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "mezzosoprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 2/4
		\clef "treble_8"
		\key c \major

		R2*4  |
%% 5
		r4 e' 8 f'  |
		g' 2  |
		R2*3  |
%% 10
		r4 e' 8 d'  |
		cs' 4 cs' 8 cs'  |
		e' 8 d' d' cs'  |
		d' 4 r  |
		r4 d' 8 c'  |
%% 15
		b 4 b 8 b  |
		d' 8 c' c' b  |
		c' 4 r  |
		r4 e' 8 d'  |
		cs' 4 cs' 8 cs'  |
%% 20
		e' 8 d' d' e'  |
		d' 2  |
		r4 g 8 g  |
		c' 4 e'  |
		b 4 d'  |
%% 25
		g 2  |
		R2  |
		r4 e' 8 d'  |
		cs' 4 cs' 8 cs'  |
		e' 8 d' d' cs'  |
%% 30
		d' 4 r  |
		r4 d' 8 c'  |
		b 4 b 8 b  |
		d' 8 c' c' b  |
		c' 4 r  |
%% 35
		r4 e' 8 d'  |
		cs' 4 cs' 8 cs'  |
		e' 8 d' d' e'  |
		d' 2  |
		r4 g 8 g  |
%% 40
		c' 4 e'  |
		b 4 d'  |
		g 2  |
		R2  |
		r4 e' 8. d' 16  |
%% 45
		cs' 4 cs' 8 cs'  |
		e' 8 d' d' cs'  |
		d' 4 r  |
		r4 d' 8. c' 16  |
		b 4 b 8 b  |
%% 50
		d' 8 c' c' b  |
		c' 4 r  |
		r4 e' 8. d' 16  |
		cs' 4 cs' 8 cs'  |
		e' 8 d' d' e'  |
%% 55
		d' 2  |
		r4 g 8 g  |
		c' 4 e'  |
		b 2  |
		d' 2  |
%% 60
		g 2  |
		R2*4  |
%% 65
		r4 f' 8 g'  |
		\key f \major
		a' 4 a'  |
		g' 4 e' 8 e'  |
		d' 4 d'  |
		c' 4 e' 8 f'  |
%% 70
		g' 4 g'  |
		f' 4 d' 8 d'  |
		c' 4 c'  |
		e' 4 f' 8 g'  |
		a' 4 a'  |
%% 75
		f' 4 f' 8 f'  |
		f' 4 f'  |
		f' 4 c' 8 e'  |
		f' 4 a'  |
		e' 2  |
%% 80
		g' 2  |
		c' 2 ~  |
		c' 2  |
		R2*2  |
%% 85
		\key c \major
		r4 e' 8 d'  |
		cs' 4 cs' 8 cs'  |
		e' 8 d' d' cs'  |
		d' 4 r  |
		r4 d' 8 c'  |
%% 90
		b 4 b 8 b  |
		d' 8 c' c' b  |
		c' 4 r  |
		r4 e' 8 d'  |
		cs' 4 cs' 8 cs'  |
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
		r4 f' 8 g'  |
		\key f \major
		a' 4 a'  |
		g' 4 e' 8 e'  |
		d' 4 d'  |
%% 110
		c' 4 e' 8 f'  |
		g' 4 g'  |
		f' 4 d' 8 d'  |
		c' 4 c'  |
		e' 4 f' 8 g'  |
%% 115
		a' 4 a'  |
		f' 4 f' 8 f'  |
		f' 4 f'  |
		f' 4 c' 8 e'  |
		f' 4 a'  |
%% 120
		e' 2  |
		g' 2  |
		c' 2 ~  |
		c' 2  |
		R2*2  |
		\key c \major
		r4 e' 8. d' 16  |
		cs' 4 cs' 8 cs'  |
		e' 8 d' d' cs'  |
		d' 4 r  |
%% 130
		r4 d' 8. c' 16  |
		b 4 b 8 b  |
		d' 8 c' c' b  |
		c' 4 r  |
		r4 e' 8. d' 16  |
%% 135
		cs' 4 cs' 8 cs'  |
		e' 8 d' d' e'  |
		d' 2  |
		r4 g 8 g  |
		c' 4 e'  |
%% 140
		b 2  |
		d' 2  |
		g 2  |
		R2*3  |
		\bar "|."
	}

	\lyricsto "mezzosoprano" \new Lyrics \lyricmode {
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
