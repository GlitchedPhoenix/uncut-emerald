DebugMenu_Main::
	multichoicedefault 0, 0, MULTI_DEBUG_MENU, 0, 0
	switch VAR_RESULT
	case 0, Debug_HMKit
	case 1, Debug_Warp
	case 2, Debug_GiveRepel
	release
	end

Debug_HMKit::
	lock
	call Debug_GetBadges
	closemessage
	call Debug_GiveSurfer
	closemessage
	release
	end

Debug_Warp::
	lock
	multichoicedefault 0, 0, MULTI_DEBUG_WARP, 0, 0
	switch VAR_RESULT
	case 0, Warp_LittleRoot
	case 1, Warp_NavelRock
	case 2, Warp_OneIsland
	release
	end

Warp_LittleRoot::
	warp MAP_LITTLEROOT_TOWN, 0, 5, 4
	waitstate
	release
	end

Warp_NavelRock::
	warp MAP_NAVEL_ROCK_EXTERIOR, 0, 9, 10
	waitstate
	release
	end

Warp_OneIsland::
	warp MAP_ONE_ISLAND, 0, 14, 10
	waitstate
	release
	end

Debug_GiveSurfer::
	additem ITEM_HM01_CUT, 1
	additem ITEM_HM02_FLY, 1
	additem ITEM_HM03_SURF, 1
	additem ITEM_HM04_STRENGTH, 1
	additem ITEM_HM06_ROCK_SMASH, 1
	additem ITEM_HM07_WATERFALL, 1
	additem ITEM_HM08_DIVE, 1
	givemon SPECIES_LINOONE, 50, ITEM_NONE
	givemon SPECIES_TENTACRUEL, 50, ITEM_NONE
	givemon SPECIES_SWELLOW, 50, ITEM_NONE
	msgbox Debug_Text_GetMon, MSGBOX_DEFAULT
	return
	
Debug_GiveRepel::
	additem ITEM_MAX_REPEL, 50
	msgbox Debug_Text_Repel, MSGBOX_DEFAULT
	release
	end
	
Debug_GetBadges::
	setflag FLAG_BADGE01_GET
	setflag FLAG_BADGE02_GET
	setflag FLAG_BADGE03_GET
	setflag FLAG_BADGE04_GET
	setflag FLAG_BADGE05_GET
	setflag FLAG_BADGE06_GET
	setflag FLAG_BADGE07_GET
	setflag FLAG_BADGE08_GET
	msgbox Debug_Text_BadgeGet, MSGBOX_DEFAULT
	return

Debug_Text_Repel::
	.string "You recieved 50 Max Repels.$"

Debug_Text_GetMon::
	.string "You recieved a full HM kit.$"

Debug_Text_BadgeGet::
	.string "You can now use all HMs.$"
