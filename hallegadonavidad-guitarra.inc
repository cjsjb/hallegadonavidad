\new StaffGroup = "guitarra" <<
	\new Staff {
		\set Staff.instrumentName = "Guitarra"
		\set Staff.shortInstrumentName = "G."
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble_8"

		\key d \major
		\hallegadoguitarraintropart
		\hallegadoguitarraestrofa
	}
	\new TabStaff {
		\hallegadoguitarraintro
		\hallegadoguitarraestrofa
		\break
	}
>>
