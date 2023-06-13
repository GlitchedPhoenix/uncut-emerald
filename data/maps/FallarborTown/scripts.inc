FallarborTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_OnTransition
	.byte 0

FallarborTown_OnTransition:
	setflag FLAG_VISITED_FALLARBOR_TOWN
	setvar VAR_CONTEST_HALL_STATE, 0
	clearflag FLAG_CONTEST_SKETCH_CREATED
	end

FallarborTown_EventScript_ExpertM::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_EventScript_ExpertMNormal
	msgbox FallarborTown_Text_ShadyCharactersCozmosHome, MSGBOX_DEFAULT
	release
	end

FallarborTown_EventScripts_TicketMan::
	lock
	faceplayer
	goto_if_set FLAG_EON_TICKET_DELIVERED, FallarborTown_EventScripts_TicketDelivered
	goto_if_set FLAG_EON_QUEST_STARTED, FallarborTown_EventScripts_StartedEonQuest
	msgbox FallarborTown_Text_IGotLost
	multichoicedefault 22, 8, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, FallarborTown_EventScripts_FindSomeoneElse
	case MULTI_B_PRESSED, FallarborTown_EventScripts_FindSomeoneElse
	msgbox FallarborTown_Text_YouWill
	giveitem ITEM_MYSTERY_GIFT
	setflag FLAG_EON_QUEST_STARTED
	msgbox FallarborTown_Text_DeliverToLilycove
	release
	end

FallarborTown_Text_IGotLost::
	.string "Oh man, the boss is not going to be\n"
	.string "happy about this...\p"
	.string "Huh? What's wrong?\p"
	.string "Uh...I was sort of delivering a package\n"
	.string "when I...got attacked by a wild POKèMON.\p"
	.string "......\p"
	.string "OK fine, I got lost. Do you know how\n"
	.string "how much of a pain it is to get from\l"
	.string "SLATEPORT to LILYCOVE?\p"
	.string "It's not fun! You need to ward past the\n"
	.string "fields just to get halfway there, not\l"
	.string "to mention the water in the way you\l"
	.string "need to SURF over.\p"
	.string "I don't even have SURF! And ARCEUS\n"
	.string "knows the boss won't supply us with it.\p"
	.string "...Whew...OK, I'm good.\p"
	.string "You look like you know your way around\n"
	.string "out here. You mind delivering it for me?$"

FallarborTown_Text_YouWill::
	.string "You will? Oh, thank goodness...\n"
	.string "It's addressed to some gal in LILYCOVE.$"

FallarborTown_Text_DeliverToLilycove::
	.string "You're a lifesaver, kid.\n"
	.string "Thanks a million.$"

FallarborTown_EventScripts_FindSomeoneElse::
	msgbox FallarborTown_Text_YouWontDoIt
	release
	end

FallarborTown_Text_YouWontDoIt::
	.string "You won't help me? Ugh, fine. Fair\n"
	.string "enough. I'll figure something out.$"

FallarborTown_EventScripts_StartedEonQuest::
	msgbox FallarborTown_Text_DontForget
	release
	end

FallarborTown_Text_DontForget::
	.string "Don't forget! The package is going\n"
	.string "to a gal in LILYCOVE.$"

FallarborTown_EventScripts_TicketDelivered::
	msgbox FallarborTown_Text_YouDeliveredIt
	release
	end

FallarborTown_Text_YouDeliveredIt::
	.string "You delivered it? Nice job, kid.\p"
	.string "A ticket? Listen kid, what's in those\n"
	.string "parcels is none of my concern.$"

FallarborTown_EventScript_ExpertMNormal::
	msgbox FallarborTown_Text_RegionKnownForMeteors, MSGBOX_DEFAULT
	release
	end

FallarborTown_EventScript_Girl::
	msgbox FallarborTown_Text_MyPreciousAzurill, MSGBOX_NPC
	end

FallarborTown_EventScript_Gentleman::
	msgbox FallarborTown_Text_HaveYouChallengedFlannery, MSGBOX_NPC
	end

FallarborTown_EventScript_Azurill::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
	msgbox FallarborTown_Text_Azurill, MSGBOX_DEFAULT
	waitmoncry
	release
	end

FallarborTown_EventScript_BattleTentSign::
	msgbox FallarborTown_Text_BattleTentSign, MSGBOX_SIGN
	end

FallarborTown_EventScript_TownSign::
	msgbox FallarborTown_Text_TownSign, MSGBOX_SIGN
	end

FallarborTown_EventScript_MoveTutorSign::
	msgbox FallarborTown_Text_MoveTutorSign, MSGBOX_SIGN
	end

FallarborTown_Text_ShadyCharactersCozmosHome:
	.string "Something's happening,\n"
	.string "and I don't like it!\p"
	.string "I've seen shady characters wandering\n"
	.string "in and out of PROF. COZMO's home…$"

FallarborTown_Text_RegionKnownForMeteors:
	.string "This region's been known for meteors\n"
	.string "since the olden days.\p"
	.string "They say METEOR FALLS was gouged out\n"
	.string "by a falling meteorite long ago.$"

FallarborTown_Text_MyPreciousAzurill:
	.string "See! Take a look!\n"
	.string "This is my precious AZURILL!\p"
	.string "It's slick and smooth and plushy, too!$"

FallarborTown_Text_Azurill:
	.string "AZURILL: Rooreelooo.$"

FallarborTown_Text_HaveYouChallengedFlannery:
	.string "Have you already challenged FLANNERY,\n"
	.string "the LEADER of LAVARIDGE GYM?\p"
	.string "The girl's grandfather was famous.\n"
	.string "He was one of the ELITE FOUR in the\l"
	.string "POKéMON LEAGUE at one point.\p"
	.string "It wouldn't surprise me to see FLANNERY\n"
	.string "become a great TRAINER in her own\l"
	.string "right.$"

FallarborTown_Text_BattleTentSign:
	.string "BATTLE TENT FALLARBOR SITE\n"
	.string "“May the Greatest Teams Gather!”$"

FallarborTown_Text_TownSign:
	.string "FALLARBOR TOWN\n"
	.string "“A farm community with small gardens.”$"

FallarborTown_Text_MoveTutorSign:
	.string "MOVE TUTOR'S HOUSE\n"
	.string "“New moves taught to POKéMON.”$"

