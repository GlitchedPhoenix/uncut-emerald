RoomBeyondTime_MapScripts::
	.byte 0

NG_DustyBooks::
	lock
	msgbox NG_Text_DustyBooks
	release
	end

NG_Text_DustyBooks::
	.string "A bunch of dusty books far beyond your\n"
	.string "reading level.$"

NG_Text_ReadTheBook::
	.string "Legend tells of a mighty POKéMON in the\n"
	.string "far-off land of SINNOH named DIALGA. \p"
	.string "DIALGA held dominion over time itself,\n"
	.string "and was created as part of a trio that\l"
	.string "formed the fabric of reality itself.\p"
	.string "There is also rumor of a gem that\n"
	.string "augmented DIALGA's power named\l"
	.string "the ADAMANT CRYSTAL.$"

NG_Bed::
	lock
	msgbox NG_Text_ACozyBed, MSGBOX_DEFAULT
	multichoicedefault 22, 8, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, NG_BedImpolite
	case MULTI_B_PRESSED, NG_BedImpolite
	msgbox NG_Text_Impolite
	release
	end

NG_BedImpolite::
	msgbox NG_Text_NotYourBed
	release
	end

NG_MonMachine::
	lockall
	goto_if_set FLAG_SYS_NGPLUS_ENABLE, NG_EventScript_MachineRunning
	msgbox NG_Text_Password, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, NG_EventScript_Release
	setvar VAR_0x8004, EASY_CHAT_TYPE_NGPLUS_PASSWORD
	call Common_ShowEasyChatScreen
	goto_if_eq VAR_0x8004, 2, NG_EventScript_PlayerInputPassword
	msgbox NG_Text_PasswordDenied
	releaseall
	end

NG_EventScript_MachineRunning::
	msgbox NG_Text_MachineRunning
	releaseall
	end

NG_Text_Password::
	.string "It looks like there's a password prompt\n"
	.string "to access the terminal.\p"
	.string "Enter a password?$"

NG_EventScript_PlayerInputPassword::
	msgbox NG_Text_PasswordAccepted
	multichoicedefault 22, 8, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 0, NG_EventScript_MachineBoots
	case 1, NG_EventScript_Release
	case MULTI_B_PRESSED, NG_EventScript_Release
	end

NG_EventScript_MachineBoots::
	playse SE_CLICK
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
	waitmovement 0
	msgbox NG_Text_ClickedButton
	closemessage
	fadescreen FADE_TO_WHITE
	playse SE_SHINY
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay96
	waitmovement 0
	fadescreen FADE_FROM_WHITE
	msgbox NG_Text_FeelDifferent
	setflag FLAG_SYS_NGPLUS_ENABLE
	clearflag FLAG_NGP_EXPLAINED
	releaseall
	end

NG_EventScript_Books::
	lock
	msgbox NG_Text_GalacticBooks
	release
	end

NG_Text_GalacticBooks::
	.string "There's a stamp on several of these\n"
	.string "books that says: ‘Property of the\l"
	.string "Galactic Research Group'$"

NG_Text_ClickedButton::
	.string "You ran the machine's main program.$"

NG_Text_FeelDifferent::
	.string "You feel...different, somehow.$"

NG_Text_PasswordAccepted::
	.string "The terminal reads:\p"
	.string "{COLOR 06}PASSWORD ACCEPTED.\n"
	.string "WELCOME BACK, CYBELLE.\p"
	.string "{COLOR 02}Run the main program?$"

NG_Text_PasswordDenied::
	.string "Ther terminal reads:\n"
	.string "{COLOR 06}PASSWORD INCORRECT. ACCESS DENIED.{COLOR 02}$"

NG_Text_MachineRunning::
	.string "The machine seems to be running\n"
	.string "smoothly.$"

NG_EventScript_Release::
	releaseall
	end

Event_DisableNGPlus::
	clearflag FLAG_SYS_NGPLUS_ENABLE
	end

NG_PC::
	lock
	msgbox NG_Text_PC_Logs, MSGBOX_DEFAULT
	multichoicedefault 22, 8, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Common_EventScript_EndConvo
	case MULTI_B_PRESSED, Common_EventScript_EndConvo
	goto NG_PC_Entries
	end

NG_Text_PC_Logs::
	.string "There's a computer here with several\n"
	.string "audio files. Play one?$"

NG_PC_Entries::
	multichoicedefault 0, 0, MULTI_ENTRIES, 0, FALSE
	switch VAR_RESULT
	case 0, NG_PC_Entry1
	case 1, NG_PC_Entry2
	case 2, NG_PC_Entry3
	case 3, NG_PC_Entry4
	case 4, NG_PC_Entry5
	case 5, Common_EventScript_EndConvo
	case MULTI_B_PRESSED, Common_EventScript_EndConvo
	release
	end

NG_PC_Entry1::
	msgbox NG_Text_Playback
	textcolor 0
	msgbox NG_Text_Entry1
	goto NG_ReadAnother
	end

NG_PC_Entry2::
	msgbox NG_Text_Playback
	textcolor 0
	msgbox NG_Text_Entry2
	goto NG_ReadAnother
	end

NG_PC_Entry3::
	msgbox NG_Text_Playback
	textcolor 0
	msgbox NG_Text_Entry3
	goto NG_ReadAnother
	end

NG_PC_Entry4::
	msgbox NG_Text_Playback
	textcolor 0
	msgbox NG_Text_Entry4
	goto NG_ReadAnother
	end

NG_PC_Entry5::
	msgbox NG_Text_Playback
	textcolor 0
	msgbox NG_Text_Entry5
	setflag FLAG_SEEN_ENTRY_5
	goto NG_ReadAnother
	end

NG_ReadAnother::
	msgbox NG_Text_ReadAnother, MSGBOX_DEFAULT
	multichoicedefault 22, 8, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 1, Common_EventScript_EndConvo
	case MULTI_B_PRESSED, Common_EventScript_EndConvo
	goto NG_PC_Entries
	end

Common_EventScript_EndConvo::
	closemessage
	release
	end

NG_Text_ReadAnother::
	.string "Read another?$"

NG_Text_ACozyBed::
	.string "A well-made bed. It looks like it hasn't\n"
	.string "been used in a long time.\p"
	.string "Take a nap?$"

NG_Text_NotYourBed::
	.string "It's for the best. This bed doesn't\n"
	.string "belong to you.$"

NG_Text_Impolite::
	.string "It would be impolite to sleep in a\n"
	.string "stranger's bed.$"

NG_Text_Playback::
	.string "Beginning playback...\p"
	.string "................$"

NG_Text_Entry1::
	.string "{COLOR 04}July 19th, 20{COLOR 02} -BZZT- {COLOR 04}4:38 PM \p"
	.string "We made an interesting discovery today.\n"
	.string "Earlier today we got reports of \l"
	.string "bizarre activity where civilians had\l"
	.string "reported seeing multiples of\l"
	.string "themselves that were mimicking them.\p"
	.string "At first we assumed it to be a trick by\n"
	.string "a mischievous POKéMON, but as the crew\l"
	.string "and I approached, we felt a strange,\l"
	.string "indescribable sensation.\p"
	.string "It felt like the wind itself slowed,\n"
	.string "and our movement was impeded as if we\l"
	.string "were submerged in water.\p"
	.string "Eventually we came across a strange\n"
	.string "‘rip' that had a bizarre, blue\l"
	.string "light shining from the other side.\p"
	.string "I tried to reach my hand in, but the\n"
	.string "rip grabbed my arm and pulled.\p"
	.string "I blacked out almost immediately.\p"
	.string "I'm in a strange otherworldy place now.\n"
	.string "The sky is electric blue and\l"
	.string "starry, and everything around me is\l"
	.string "seemingly unaffected by gravity.\l"
	.string "The air I breathe tastes stagnant.\p"
	.string "I caught a glimpse of a large, cobalt\n"
	.string "creature in the distance, which I\l"
	.string "assume to be a POKéMON.\p"
	.string "I will investigate further.\p"
	.string "{COLOR 02}................\p"
	.string " - END OF LOG - $"

NG_Text_Entry2::
	.string "{COLOR 04}July 19th, 20{COLOR 02} -BZZT- {COLOR 04}5:12 PM \p"
	.string "I finally emerged from that blue hell\n"
	.string "hole. I chased that creature until my\l"
	.string "legs collapsed and I fell to my knees...\p"
	.string "But it kept getting farther away.\p"
	.string "Eventually the exhaustion caught up\n"
	.string "with me. I was out cold again.\p"
	.string "I don't quite know how long I was there,\n"
	.string "but by ARCEUS's grace I woke up outside\l"
	.string "again, with my team huddled around me.\l"
	.string "They told me I hadn't been out for more\l"
	.string "than a few minutes.\p"
	.string "That was impossible. It felt like hours,\n"
	.string "days, weeks I was in there!\p"
	.string "We had the local force establish a\n"
	.string "barricade near the area, and soon\l"
	.string "that anomalous effect ceased.\p"
	.string "The crew and I are headed back to the\n"
	.string "lab now, and hopefully nobody is foolish\l"
	.string "enough to do what I did, should this\l"
	.string "happen again.\p"
	.string "{COLOR 02}................\p"
	.string " - END OF LOG - $"

NG_Text_Entry3::
	.string "{COLOR 04}July 22nd, 20{COLOR 02} -BZZT- {COLOR 04}7:57 PM \p"
	.string "I didn't realize when we returned to\n"
	.string "the lab a few days ago that there\l"
	.string "was some shiny blue gemstone that\l"
	.string "wound up in my pocket.\p"
	.string "It seems to emit a smaller form of\n"
	.string "that bizarre, time-altering field we\l"
	.string "originally found near that rip.\p"
	.string "I decided not to report this to the\n"
	.string "group. If the team got their hands\l"
	.string "on this, they would mess with it, and\l"
	.string "if something goes wrong and someone\l"
	.string "else ends up where I was, I don't know\l"
	.string "if they'll be lucky enough to leave\l"
	.string "like I did.\p"
	.string "Thus, I burrowed out a small room in\n"
	.string "a cave close to the lab.\p"
	.string "I'll put it here for study and safe-\n"
	.string "keeping.\p"
	.string "{COLOR 02}................\p"
	.string " - END OF LOG - $"

NG_Text_Entry4::
	.string "{COLOR 04}September 7th, 20{COLOR 02} -BZZT- {COLOR 04}9:08 AM \p"
	.string "I've been experimenting on this crystal\n"
	.string "in here for a while.\p"
	.string "I recently discovered that there might\n"
	.string "a name I can put to this thing.\p"
	.string "The ADAMANT CRYSTAL.\p"
	.string "An acquaintence of mine from home\n"
	.string "lent me a book about SINNOH lore.\l"
	.string "Allegedly it's tied to an old folk\l"
	.string "story about a POKéMON named DIALGA.\p"
	.string "DIALGA was a deity that ruled over time\n"
	.string "that was worshipped back when the\l"
	.string "region was named HISUI.\p"
	.string "There was a gem in the possession\n"
	.string "of a tribe called the DIAMOND CLAN\l"
	.string "that would allow DIALGA to use its\l"
	.string "full strength within our reality.\p"
	.string "I believe that this crystal is that\n"
	.string "ancient gem in the legend.\p"
	.string "If that's so, then it stands to reason\n"
	.string "that the POKéMON I witnessed back in\l"
	.string "the blue space might have been DIALGA.\p"
	.string "There's been some more anomalies in here\n"
	.string "that seem to occur while I'm in this\l"
	.string "room.\p"
	.string "Occasionally, while I'm near the\n"
	.string "ADAMANT CRYSTAL, time will have\l"
	.string "rewound to before I had entered.\p"
	.string "It's strange, but doesn't happen\n"
	.string "frequently.\p"
	.string "I'm currently prototyping a machine\n"
	.string "that can harness and control that\l"
	.string "strange power, in case we ever need\l"
	.string "a power like that.\p"
	.string "{COLOR 02}................\p"
	.string " - END OF LOG - $"

NG_Text_Entry5::
	.string "{COLOR 04}March 29th, 20{COLOR 02} -BZZT- {COLOR 04}10:40 AM \p"
	.string "The machine is complete. I resolved\n"
	.string "to use only a shard of the ADAMANT\l"
	.string "CRYSTAL for the machine, as the whole\l"
	.string "crystal almost shorted it.\l"
	.string "Presently, the machine allows one to\l"
	.string "retain one's possessions and memories\l"
	.string "if a temporal anomaly were to occur.\p"
	.string "As much as I would like to further\n"
	.string "safe this little project of mine, I\l"
	.string "won't have the opportunity much longer.\p"
	.string "The group is closing. Lack of funding,\n"
	.string "and because of that we can't pay the\l"
	.string "bills. We already sold the land to\l"
	.string "an eccentric fellow in a tropical shirt.\p"
	.string "He wants to turn it into a hotspot\n"
	.string "for the trainers. Some big stage for\l"
	.string "POKéMON battles.\p"
	.string "Thus, this lab will close too. I'll\n"
	.string "leave it intact in case there is\l"
	.string "need of its ability someday.\p"
	.string "However, I will not leave it unguarded.\p"
	.string "The device will not be put in the hands\n"
	.string "of someone who will misuse it.\l"
	.string "One of my colleagues is moving to\l"
	.string "PACIFIDLOG TOWN.\p"
	.string "Ask him if he has the time.\p"
	.string "As for me...\p"
	.string "Me and my son will be moving back\n"
	.string "to SINNOH.\p"
	.string "Hopefully back home he can make\n"
	.string "some real friends for a change.\p"
	.string "I'm absolutely delighted by his\n"
	.string "interest in my work, but...\l"
	.string "His interest borders on obsessive.\p"
	.string "Bah, this isn't information that\n"
	.string "needs to be logged here.\p"
	.string "This will be my last log I leave\n"
	.string "here in Hoenn. The CRYSTAL will not\l"
	.string "stay here. I will leave only the\l"
	.string "machine behind.\p"
	.string "For you who is listening to these,\n"
	.string "please keep this a secret, lest\l"
	.string "this information fall into the wrong\l"
	.string "hands. Farewell.\p"
	.string "{COLOR 02}................\p"
	.string " - END OF LOG - $"
