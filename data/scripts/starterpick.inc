Starter_EventScript_Page1::
	multichoicedefault 0, 0, MULTI_STARTER_PAGE1, 0, TRUE
	switch VAR_RESULT
	case 0, Starter_EventScript_Classic1
	case 1, Starter_EventScript_Classic2
	case 2, Starter_EventScript_Normal
	case 3, Starter_EventScript_Fire
	case 4, Starter_EventScript_Water
	case 5, Starter_EventScript_Page2
	end

Starter_EventScript_Page2::
	multichoicedefault 0, 0, MULTI_STARTER_PAGE2, 0, TRUE
	switch VAR_RESULT
	case 0, Starter_EventScript_Grass
	case 1, Starter_EventScript_Electric
	case 2, Starter_EventScript_Ice
	case 3, Starter_EventScript_Rock
	case 4, Starter_EventScript_Ground
	case 5, Starter_EventScript_Page3
	end

Starter_EventScript_Page3::
	multichoicedefault 0, 0, MULTI_STARTER_PAGE3, 0, TRUE
	switch VAR_RESULT
	case 0, Starter_EventScript_Poison
	case 1, Starter_EventScript_Flying
	case 2, Starter_EventScript_Bug
	case 3, Starter_EventScript_Fighting
	case 4, Starter_EventScript_Steel
	case 5, Starter_EventScript_Page4
	end

Starter_EventScript_Page4::
	multichoicedefault 0, 0, MULTI_STARTER_PAGE4, 0, TRUE
	switch VAR_RESULT
	case 0, Starter_EventScript_Psychic
	case 1, Starter_EventScript_Ghost
	case 2, Starter_EventScript_Dark
	case 3, Starter_EventScript_Dragon
	case 4, Starter_EventScript_Pain
	case 5, Starter_EventScript_Page1
	end
	
	

Starter_EventScript_Classic1::
	multichoicedefault 0, 0, MULTI_STARTER_CLASSIC1, 0, FALSE
	switch VAR_RESULT
	case 0, Starter_EventScript_Bulbasaur
	case 1, Starter_EventScript_Charmander
	case 2, Starter_EventScript_Squirtle
	case 3, Starter_EventScript_Chikorita
	case 4, Starter_EventScript_Cyndaquil
	case 5, Starter_EventScript_Totodile
	case 6, Starter_EventScript_Page1
	case MULTI_B_PRESSED, Starter_EventScript_Page1
	end

Starter_EventScript_Classic2::
	multichoicedefault 0, 0, MULTI_STARTER_CLASSIC2, 0, FALSE
	switch VAR_RESULT
	case 0, Starter_EventScript_Treecko
	case 1, Starter_EventScript_Torchic
	case 2, Starter_EventScript_Mudkip
	case 3, Starter_EventScript_Pikachu
	case 4, Starter_EventScript_Eevee
	case 5, Starter_EventScript_Page1
	case MULTI_B_PRESSED, Starter_EventScript_Page1
	end

Starter_EventScript_Normal::
	multichoicedefault 0, 0, MULTI_STARTER_NORMAL, 0, FALSE
	switch VAR_RESULT
	case 0, Starter_EventScript_Rattata
	case 1, Starter_EventScript_Sentret
	case 2, Starter_EventScript_Togepi
	case 3, Starter_EventScript_Zigzagoon
	case 4, Starter_EventScript_Whismur
	case 5, Starter_EventScript_Skitty
	case 6, Starter_EventScript_Page1
	case MULTI_B_PRESSED, Starter_EventScript_Page1
	end

Starter_EventScript_Fire::
	multichoicedefault 0, 0, MULTI_STARTER_FIRE, 0, FALSE
	switch VAR_RESULT
	case 0, Starter_EventScript_Vulpix
	case 1, Starter_EventScript_Growlithe
	case 2, Starter_EventScript_Ponyta
	case 3, Starter_EventScript_Slugma
	case 4, Starter_EventScript_Houndour
	case 5, Starter_EventScript_Numel
	case 6, Starter_EventScript_Page1
	case MULTI_B_PRESSED, Starter_EventScript_Page1
	end

Starter_EventScript_Water::
	multichoicedefault 0, 0, MULTI_STARTER_WATER, 0, FALSE
	switch VAR_RESULT
	case 0, Starter_EventScript_Poliwag
	case 1, Starter_EventScript_Psyduck
	case 2, Starter_EventScript_Slowpoke
	case 3, Starter_EventScript_Shellder
	case 4, Starter_EventScript_Marill
	case 5, Starter_EventScript_Clamperl
	case 6, Starter_EventScript_Page1
	case MULTI_B_PRESSED, Starter_EventScript_Page1
	end

Starter_EventScript_Grass::
	multichoicedefault 0, 0, MULTI_STARTER_GRASS, 0, FALSE
	switch VAR_RESULT
	case 0, Starter_EventScript_Oddish
	case 1, Starter_EventScript_Bellsprout
	case 2, Starter_EventScript_Exeggcute
	case 3, Starter_EventScript_Hoppip
	case 4, Starter_EventScript_Shroomish
	case 5, Starter_EventScript_Cacnea
	case 6, Starter_EventScript_Page2
	case MULTI_B_PRESSED, Starter_EventScript_Page2
	end

Starter_EventScript_Electric::
	multichoicedefault 0, 0, MULTI_STARTER_ELECTRIC, 0, FALSE
	switch VAR_RESULT
	case 0, Starter_EventScript_Voltorb
	case 1, Starter_EventScript_Magnemite
	case 2, Starter_EventScript_Mareep
	case 3, Starter_EventScript_Elekid
	case 4, Starter_EventScript_Chinchou
	case 5, Starter_EventScript_Elektrike
	case 6, Starter_EventScript_Page2
	case MULTI_B_PRESSED, Starter_EventScript_Page2
	end

Starter_EventScript_Ice::
	multichoicedefault 0, 0, MULTI_STARTER_ICE, 0, FALSE
	switch VAR_RESULT
	case 0, Starter_EventScript_Seel
	case 1, Starter_EventScript_Lapras
	case 2, Starter_EventScript_Swinub
	case 3, Starter_EventScript_Delibird
	case 4, Starter_EventScript_Snorunt
	case 5, Starter_EventScript_Spheal
	case 6, Starter_EventScript_Page2
	case MULTI_B_PRESSED, Starter_EventScript_Page2
	end

Starter_EventScript_Rock::
	multichoicedefault 0, 0, MULTI_STARTER_ROCK, 0, FALSE
	switch VAR_RESULT
	case 0, Starter_EventScript_Geodude
	case 1, Starter_EventScript_Omanyte
	case 2, Starter_EventScript_Kabuto
	case 3, Starter_EventScript_Larvitar
	case 4, Starter_EventScript_Anorith
	case 5, Starter_EventScript_Lileep
	case 6, Starter_EventScript_Page2
	case MULTI_B_PRESSED, Starter_EventScript_Page2
	end

Starter_EventScript_Ground::
	multichoicedefault 0, 0, MULTI_STARTER_GROUND, 0, FALSE
	switch VAR_RESULT
	case 0, Starter_EventScript_Onix
	case 1, Starter_EventScript_Sandshrew
	case 2, Starter_EventScript_Rhyhorn
	case 3, Starter_EventScript_Cubone
	case 4, Starter_EventScript_Phanpy
	case 5, Starter_EventScript_Trapinch
	case 6, Starter_EventScript_Page2
	case MULTI_B_PRESSED, Starter_EventScript_Page2
	end

Starter_EventScript_Poison::
	multichoicedefault 0, 0, MULTI_STARTER_POISON, 0, FALSE
	switch VAR_RESULT
	case 0, Starter_EventScript_NidoranM
	case 1, Starter_EventScript_NidoranF
	case 2, Starter_EventScript_Ekans
	case 3, Starter_EventScript_Zubat
	case 4, Starter_EventScript_Gulpin
	case 5, Starter_EventScript_Seviper
	case 6, Starter_EventScript_Page3
	case MULTI_B_PRESSED, Starter_EventScript_Page3
	end

Starter_EventScript_Flying::
	multichoicedefault 0, 0, MULTI_STARTER_FLYING, 0, FALSE
	switch VAR_RESULT
	case 0, Starter_EventScript_Pidgey
	case 1, Starter_EventScript_Spearow
	case 2, Starter_EventScript_Doduo
	case 3, Starter_EventScript_Hoothoot
	case 4, Starter_EventScript_Tailow
	case 5, Starter_EventScript_Swablu
	case 6, Starter_EventScript_Page3
	case MULTI_B_PRESSED, Starter_EventScript_Page3
	end

Starter_EventScript_Bug::
	multichoicedefault 0, 0, MULTI_STARTER_BUG, 0, FALSE
	switch VAR_RESULT
	case 0, Starter_EventScript_Caterpie
	case 1, Starter_EventScript_Weedle
	case 2, Starter_EventScript_Scyther
	case 3, Starter_EventScript_Ledyba
	case 4, Starter_EventScript_Spinarak
	case 5, Starter_EventScript_Nincada
	case 6, Starter_EventScript_Page3
	case MULTI_B_PRESSED, Starter_EventScript_Page3
	end

Starter_EventScript_Fighting::
	multichoicedefault 0, 0, MULTI_STARTER_FIGHTING, 0, FALSE
	switch VAR_RESULT
	case 0, Starter_EventScript_Machop
	case 1, Starter_EventScript_Mankey
	case 2, Starter_EventScript_Tyrogue
	case 3, Starter_EventScript_Heracross
	case 4, Starter_EventScript_Makuhita
	case 5, Starter_EventScript_Meditite
	case 6, Starter_EventScript_Page3
	case MULTI_B_PRESSED, Starter_EventScript_Page3
	end

Starter_EventScript_Steel::
	multichoicedefault 0, 0, MULTI_STARTER_STEEL, 0, FALSE
	switch VAR_RESULT
	case 0, Starter_EventScript_Skarmory
	case 1, Starter_EventScript_Mawile
	case 2, Starter_EventScript_Aron
	case 3, Starter_EventScript_Beldum
	case 4, Starter_EventScript_Page3
	case MULTI_B_PRESSED, Starter_EventScript_Page3
	end

Starter_EventScript_Psychic::
	multichoicedefault 0, 0, MULTI_STARTER_PSYCHIC, 0, FALSE
	switch VAR_RESULT
	case 0, Starter_EventScript_Abra
	case 1, Starter_EventScript_Drowzee
	case 2, Starter_EventScript_Natu
	case 3, Starter_EventScript_Wynaut
	case 4, Starter_EventScript_Spoink
	case 5, Starter_EventScript_Ralts
	case 6, Starter_EventScript_Page4
	case MULTI_B_PRESSED, Starter_EventScript_Page4
	end

Starter_EventScript_Ghost::
	multichoicedefault 0, 0, MULTI_STARTER_GHOST, 0, FALSE
	switch VAR_RESULT
	case 0, Starter_EventScript_Gastly
	case 1, Starter_EventScript_Misdreavus
	case 2, Starter_EventScript_Duskull
	case 3, Starter_EventScript_Shuppet
	case 4, Starter_EventScript_Sableye
	case 5, Starter_EventScript_Page4
	case MULTI_B_PRESSED, Starter_EventScript_Page4
	end

Starter_EventScript_Dark::
	multichoicedefault 0, 0, MULTI_STARTER_DARK, 0, FALSE
	switch VAR_RESULT
	case 0, Starter_EventScript_Murkrow
	case 1, Starter_EventScript_Sneasel
	case 2, Starter_EventScript_Poochyena
	case 3, Starter_EventScript_Absol
	case 4, Starter_EventScript_Page4
	case MULTI_B_PRESSED, Starter_EventScript_Page4
	end

Starter_EventScript_Dragon::
	multichoicedefault 0, 0, MULTI_STARTER_DRAGON, 0, FALSE
	switch VAR_RESULT
	case 0, Starter_EventScript_Dratini
	case 1, Starter_EventScript_Bagon
	case 2, Starter_EventScript_Page4
	case MULTI_B_PRESSED, Starter_EventScript_Page4
	end

Starter_EventScript_Pain::
	multichoicedefault 0, 0, MULTI_STARTER_PAIN, 0, FALSE
	switch VAR_RESULT
	case 0, Starter_EventScript_Magikarp
	case 1, Starter_EventScript_Ditto
	case 2, Starter_EventScript_Smeargle
	case 3, Starter_EventScript_Unown
	case 4, Starter_EventScript_Page4
	case MULTI_B_PRESSED, Starter_EventScript_Page4
	end

Starter_EventScript_Bulbasaur::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Classic1
	givemon SPECIES_BULBASAUR, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Charmander::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Classic1
	givemon SPECIES_CHARMANDER, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Squirtle::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Classic1
	givemon SPECIES_SQUIRTLE, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Chikorita::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Classic1
	givemon SPECIES_CHIKORITA, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Cyndaquil::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Classic1
	givemon SPECIES_CYNDAQUIL, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Totodile::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Classic1
	givemon SPECIES_TOTODILE, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Treecko::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Classic2
	givemon SPECIES_TREECKO, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Torchic::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Classic2
	givemon SPECIES_TORCHIC, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Mudkip::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Classic2
	givemon SPECIES_MUDKIP, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Pikachu::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Classic2
	givemon SPECIES_PIKACHU, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Eevee::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Classic2
	givemon SPECIES_EEVEE, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Rattata::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Normal
	givemon SPECIES_RATTATA, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Sentret::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Normal
	givemon SPECIES_SENTRET, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Zigzagoon::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Normal
	givemon SPECIES_ZIGZAGOON, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Togepi::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Normal
	givemon SPECIES_TOGEPI, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Whismur::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Normal
	givemon SPECIES_WHISMUR, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Skitty::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Normal
	givemon SPECIES_SKITTY, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Vulpix::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Fire
	givemon SPECIES_VULPIX, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Growlithe::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Fire
	givemon SPECIES_GROWLITHE, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Ponyta::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Fire
	givemon SPECIES_PONYTA, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Slugma::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Fire
	givemon SPECIES_SLUGMA, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Houndour::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Fire
	givemon SPECIES_HOUNDOUR, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Numel::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Fire
	givemon SPECIES_NUMEL, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Poliwag::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Water
	givemon SPECIES_POLIWAG, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Psyduck::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Water
	givemon SPECIES_PSYDUCK, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Slowpoke::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Water
	givemon SPECIES_SLOWPOKE, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Shellder::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Water
	givemon SPECIES_SHELLDER, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Marill::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Water
	givemon SPECIES_MARILL, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Clamperl::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Water
	givemon SPECIES_CLAMPERL, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Oddish::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Grass
	givemon SPECIES_ODDISH, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Bellsprout::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Grass
	givemon SPECIES_BELLSPROUT, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Exeggcute::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Grass
	givemon SPECIES_EXEGGCUTE, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Hoppip::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Grass
	givemon SPECIES_HOPPIP, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Cacnea::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Grass
	givemon SPECIES_CACNEA, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Shroomish::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Grass
	givemon SPECIES_SHROOMISH, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Voltorb::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Electric
	givemon SPECIES_VOLTORB, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Elekid::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Electric
	givemon SPECIES_ELEKID, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Magnemite::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Electric
	givemon SPECIES_MAGNEMITE, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Mareep::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Electric
	givemon SPECIES_MAREEP, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Chinchou::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Electric
	givemon SPECIES_CHINCHOU, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Elektrike::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Electric
	givemon SPECIES_ELECTRIKE, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Seel::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Ice
	givemon SPECIES_SEEL, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Lapras::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Ice
	givemon SPECIES_LAPRAS, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Swinub::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Ice
	givemon SPECIES_SWINUB, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Delibird::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Ice
	givemon SPECIES_DELIBIRD, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Snorunt::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Ice
	givemon SPECIES_SNORUNT, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Spheal::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Ice
	givemon SPECIES_SPHEAL, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Geodude::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Rock
	givemon SPECIES_GEODUDE, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Anorith::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Rock
	givemon SPECIES_ANORITH, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Lileep::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Rock
	givemon SPECIES_LILEEP, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Omanyte::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Rock
	givemon SPECIES_OMANYTE, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Kabuto::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Rock
	givemon SPECIES_KABUTO, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Larvitar::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Rock
	givemon SPECIES_LARVITAR, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Onix::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Ground
	givemon SPECIES_ONIX, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Sandshrew::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Ground
	givemon SPECIES_SANDSHREW, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Rhyhorn::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Ground
	givemon SPECIES_RHYHORN, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Cubone::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Ground
	givemon SPECIES_CUBONE, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Phanpy::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Ground
	givemon SPECIES_PHANPY, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Trapinch::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Ground
	givemon SPECIES_TRAPINCH, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_NidoranF::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Poison
	givemon SPECIES_NIDORAN_F, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_NidoranM::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Poison
	givemon SPECIES_NIDORAN_M, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Ekans::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Poison
	givemon SPECIES_EKANS, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Gulpin::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Poison
	givemon SPECIES_GULPIN, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Zubat::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Poison
	givemon SPECIES_ZUBAT, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Seviper::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Poison
	givemon SPECIES_SEVIPER, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Pidgey::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Flying
	givemon SPECIES_PIDGEY, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Spearow::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Flying
	givemon SPECIES_SPEAROW, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Tailow::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Flying
	givemon SPECIES_TAILLOW, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Hoothoot::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Flying
	givemon SPECIES_HOOTHOOT, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Doduo::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Flying
	givemon SPECIES_DODUO, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Swablu::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Flying
	givemon SPECIES_SWABLU, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Caterpie::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Bug
	givemon SPECIES_CATERPIE, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Weedle::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Bug
	givemon SPECIES_WEEDLE, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Ledyba::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Bug
	givemon SPECIES_LEDYBA, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Nincada::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Bug
	givemon SPECIES_NINCADA, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Spinarak::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Bug
	givemon SPECIES_SPINARAK, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Scyther::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Bug
	givemon SPECIES_SCYTHER, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Skarmory::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Steel
	givemon SPECIES_SKARMORY, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Mawile::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Steel
	givemon SPECIES_MAWILE, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Aron::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Steel
	givemon SPECIES_ARON, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Beldum::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Steel
	givemon SPECIES_BELDUM, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Machop::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Fighting
	givemon SPECIES_MACHOP, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Meditite::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Fighting
	givemon SPECIES_MEDITITE, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Mankey::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Fighting
	givemon SPECIES_MANKEY, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Tyrogue::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Fighting
	givemon SPECIES_TYROGUE, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Makuhita::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Fighting
	givemon SPECIES_MAKUHITA, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Heracross::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Fighting
	givemon SPECIES_HERACROSS, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Abra::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Psychic
	givemon SPECIES_ABRA, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Drowzee::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Psychic
	givemon SPECIES_DROWZEE, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Spoink::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Psychic
	givemon SPECIES_SPOINK, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Wynaut::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Psychic
	givemon SPECIES_WYNAUT, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Natu::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Psychic
	givemon SPECIES_NATU, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Ralts::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Psychic
	givemon SPECIES_RALTS, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Gastly::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Ghost
	givemon SPECIES_GASTLY, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Duskull::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Ghost
	givemon SPECIES_DUSKULL, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Shuppet::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Ghost
	givemon SPECIES_SHUPPET, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Sableye::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Ghost
	givemon SPECIES_SABLEYE, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Misdreavus::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Ghost
	givemon SPECIES_MISDREAVUS, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Poochyena::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Dark
	givemon SPECIES_POOCHYENA, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Absol::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Dark
	givemon SPECIES_ABSOL, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Murkrow::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Dark
	givemon SPECIES_MURKROW, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Sneasel::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Dark
	givemon SPECIES_SNEASEL, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Dratini::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Dragon
	givemon SPECIES_DRATINI, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Bagon::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Dragon
	givemon SPECIES_BAGON, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Magikarp::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Pain
	givemon SPECIES_MAGIKARP, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Ditto::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Pain
	givemon SPECIES_DITTO, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Smeargle::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Pain
	givemon SPECIES_SMEARGLE, 5
	goto Route101_EventScript_ContinueBirch
	end

Starter_EventScript_Unown::
	multichoicedefault 0, 0, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Starter_EventScript_Pain
	givemon SPECIES_UNOWN, 5
	goto Route101_EventScript_ContinueBirch
	end
