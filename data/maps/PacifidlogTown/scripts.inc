PacifidlogTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, PacifidlogTown_OnResume
	.byte 0

PacifidlogTown_OnTransition:
	setflag FLAG_VISITED_PACIFIDLOG_TOWN
	end

PacifidlogTown_OnResume:
	setstepcallback STEP_CB_PACIFIDLOG_BRIDGE
	end

PacifidlogTown_EventScript_NinjaBoy::
	msgbox PacifidlogTown_Text_NeatHousesOnWater, MSGBOX_NPC
	end

PacifidlogTown_EventScript_Girl::
	msgbox PacifidlogTown_Text_FastRunningCurrent, MSGBOX_NPC
	end

PacifidlogTown_EventScript_Fisherman::
	msgbox PacifidlogTown_Text_SkyPillarTooScary, MSGBOX_NPC
	end

PacifidlogTown_EventScript_TownSign::
	msgbox PacifidlogTown_Text_TownSign, MSGBOX_SIGN
	end

PacifidlogTown_EventScript_GentlemanBeaten::
	msgbox PacifidlogTown_Text_GentlemanBeaten
	release
	end
	
PacifidlogTown_EventScript_Gentleman::
	lock
	faceplayer
	goto_if_set FLAG_BEAT_STRANGE_GENTLEMAN, PacifidlogTown_EventScript_GentlemanBeaten
	goto_if_set FLAG_GENTLEMAN_PASSWORD_GIVEN, PacifidlogTown_EventScript_GentlemanPassGiven
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, PacifidlogTown_EventScript_GentlemanMale
	goto_if_eq VAR_RESULT, FEMALE, PacifidlogTown_EventScript_GentlemanFemale
	end

PacifidlogTown_EventScript_GentlemanMale::
	msgbox PacifidlogTown_Text_GentlemanMale
	goto_if_set FLAG_SEEN_ENTRY_5, PacifidlogTown_EventScript_GentlemanCont
	closemessage
	applymovement 4, Common_Movement_FaceLeft
	waitmovement 0
	release
	end
	
PacifidlogTown_EventScript_GentlemanFemale::
	msgbox PacifidlogTown_Text_GentlemanFemale
	goto_if_set FLAG_SEEN_ENTRY_5, PacifidlogTown_EventScript_GentlemanCont
	closemessage
	applymovement 4, Common_Movement_FaceLeft
	waitmovement 0
	release
	end

PacifidlogTown_EventScript_GentlemanCont::
	msgbox PacifidlogTown_Text_Gentleman1
	multichoicedefault 16, 4, MULTI_GENTLEMAN_ANSWERS, 0, FALSE
	switch VAR_RESULT
	case 0, PacifidlogTown_EventScript_GentlemanPassword
	case 1, PacifidlogTown_EventScript_GentlemanTime
	case 2, PacifidlogTown_EventScript_GentlemanRose
	case 3, PacifidlogTown_EventScript_GentlemanNoQuestion
	case MULTI_B_PRESSED, PacifidlogTown_EventScript_GentlemanNoQuestion
	end

PacifidlogTown_EventScript_GentlemanInitiateBattle::
	msgbox PacifidlogTown_Text_GentlemanBattleYes
	trainerbattle_no_intro TRAINER_STRANGE_GENTLEMAN, PacifidlogTown_Text_GentlemanDefeat
	msgbox PacifidlogTown_Text_GentlemanPostBattle
	setflag FLAG_BEAT_STRANGE_GENTLEMAN
	release
	end

PacifidlogTown_EventScript_GentlemanTime::
	setflag FLAG_GENTLEMAN_PASSWORD_GIVEN
	msgbox PacifidlogTown_Text_GentlemanTime
	multichoicedefault 22, 8, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 0, PacifidlogTown_EventScript_GentlemanInitiateBattle
	case 1, PacifidlogTown_EventScript_GentlemanDeclineBattle
	case MULTI_B_PRESSED, PacifidlogTown_EventScript_GentlemanDeclineBattle
	end

PacifidlogTown_EventScript_GentlemanPassGiven::
	msgbox PacifidlogTown_Text_GentlemanBattleRematch
	multichoicedefault 22, 8, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 0, PacifidlogTown_EventScript_GentlemanInitiateBattle
	case 1, PacifidlogTown_EventScript_GentlemanDeclineBattle
	case MULTI_B_PRESSED, PacifidlogTown_EventScript_GentlemanDeclineBattle
	end

PacifidlogTown_EventScript_GentlemanDeclineBattle::
	msgbox PacifidlogTown_Text_GentlemanBattleNo
	closemessage
	applymovement 4, Common_Movement_FaceLeft
	waitmovement 0
	release
	end

PacifidlogTown_EventScript_GentlemanRose::
	msgbox PacifidlogTown_Text_GentlemanWildRose
	closemessage
	applymovement 4, Common_Movement_FaceLeft
	waitmovement 0
	release
	end

PacifidlogTown_EventScript_GentlemanPassword::
	msgbox PacifidlogTown_Text_GentlemanWhatsPassword
	closemessage
	applymovement 4, Common_Movement_FaceLeft
	waitmovement 0
	release
	end

PacifidlogTown_EventScript_GentlemanNoQuestion::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, PacifidlogTown_EventScript_GentlemanNoQuestionMale
	goto_if_eq VAR_RESULT, FEMALE, PacifidlogTown_EventScript_GentlemanNoQuestionFemale
	end

PacifidlogTown_EventScript_GentlemanNoQuestionMale::
	msgbox PacifidlogTown_Text_GentlemanNoMale
	closemessage
	applymovement 4, Common_Movement_FaceLeft
	waitmovement 0
	release
	end

PacifidlogTown_EventScript_GentlemanNoQuestionFemale::
	msgbox PacifidlogTown_Text_GentlemanNoFemale
	closemessage
	applymovement 4, Common_Movement_FaceLeft
	waitmovement 0
	release
	end

PacifidlogTown_Text_GentlemanDefeat::
	.string "My, my. \n"
	.string "What a truly remarkable trainer you are!$"
	
PacifidlogTown_Text_GentlemanMale::
	.string "Oh, hello there, lad.$"
	
PacifidlogTown_Text_GentlemanFemale::
	.string "Oh, hello there, lass.$"
	
PacifidlogTown_Text_Gentleman1::
	.string "Hm? What a peculiar look on your\n"
	.string "face. Is there something I can help\l"
	.string "you with?$"

PacifidlogTown_Text_GentlemanWildRose::
	.string "...What? Err...I suppose that's a\n"
	.string "fine way to live your life.\p"
	.string "You keep on going the way you like!$"

PacifidlogTown_Text_GentlemanNoMale::
	.string "Ah, I must have been mistaken then.\p"
	.string "Take care, lad!$"

PacifidlogTown_Text_GentlemanNoFemale::
	.string "Ah, I must have been mistaken then.\p"
	.string "Take care, lass!$"

PacifidlogTown_Text_GentlemanWhatsPassword::
	.string "A...password? Sorry, I'm afraid\n"
	.string "I've got not a clue what you're\l"
	.string "asking about.$"

PacifidlogTown_Text_GentlemanTime::
	.string "...Ah, the time you say?\p"
	.string "Well, you can always get a rough\n"
	.string "guess by seeing where the sun is\l"
	.string "placed in the sky.\p"
	.string "Right now, it seems like a good time\n"
	.string "for a good POKéMON battle!\l"
	.string "What do you say?$"

PacifidlogTown_Text_GentlemanBattleYes::
	.string "Excellent! Let's get to it, then!$"

PacifidlogTown_Text_GentlemanBattleNo::
	.string "Ah, well. That's a shame.$"

PacifidlogTown_Text_GentlemanBattleRematch::
	.string "Ready for our battle?$"

PacifidlogTown_Text_GentlemanPostBattle::
	.string "Good show, good show!\p"
	.string "You clearly have a knack for this,\n"
	.string "and compassion for your partners\l"
	.string "besides.\p"
	.string "Well, if I were to reckon...\p"
	.string "I'd say we're standing about four\n"
	.string "hours from a{COLOR 08} WINGULL's rest.\p"
	.string "{COLOR 02}Take care of yourself, kid!$"

PacifidlogTown_Text_GentlemanBeaten::
	.string "Ah, it's you again, kiddo!\n"
	.string "Did you find what you were after?\p"
	.string "Remember, it's currently four hours\n"
	.string "from a{COLOR 08} WINGULL's rest.$"

PacifidlogTown_Text_FastRunningCurrent:
	.string "The sea between PACIFIDLOG and\n"
	.string "SLATEPORT has a fast-running tide.\p"
	.string "If you decide to SURF, you could end\n"
	.string "up swept away somewhere else.$"

PacifidlogTown_Text_NeatHousesOnWater:
	.string "See, isn't it neat?\n"
	.string "These houses are on water!\p"
	.string "I was born here!$"

PacifidlogTown_Text_SkyPillarTooScary:
	.string "The SKY PILLAR?\p"
	.string "…Oh, you must mean that tall, tall\n"
	.string "tower a little further out.\p"
	.string "If you asked me, I wouldn't climb it.\n"
	.string "It's too scary to get up that high.\p"
	.string "Life at sea level in PACIFIDLOG,\n"
	.string "that suits me fine.$"

PacifidlogTown_Text_TownSign:
	.string "PACIFIDLOG TOWN\p"
	.string "“Where the morning sun smiles upon\n"
	.string "the waters.”$"

