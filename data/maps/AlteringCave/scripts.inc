AlteringCave_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AlteringCave_EventScript_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, AlteringCave_EventScript_OnResume
	.byte 0

AlteringCave_EventScript_OnTransition::
	setflag FLAG_LANDMARK_ALTERING_CAVE
	call_if_set FLAG_CAUGHT_JIRACHI, AlteringCave_EventScript_HideJirachi
	call_if_unset FLAG_ACTIVATE_ORDER_66, AlteringCave_EventScript_HideJirachi
	call_if_unset FLAG_CAUGHT_JIRACHI, AlteringCave_EventScript_TryShowJirachi
	end

AlteringCave_EventScript_HideJirachi::
	setflag FLAG_HIDE_JIRACHI
	end

AlteringCave_EventScript_TryShowJirachi::
	goto_if_set FLAG_DEFEATED_JIRACHI, Common_EventScript_NopReturn
	clearflag FLAG_HIDE_JIRACHI
	return

AlteringCave_EventScript_OnResume::
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Legend_EventScript_TryRemoveObject
	end

AlteringCave_EventScript_Jirachi::
	lock
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setvar VAR_LAST_TALKED, 1
	seteventmon SPECIES_JIRACHI, 50
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, AlteringCave_EventScript_DefeatedJirachi
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, AlteringCave_EventScript_RanJirachi
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, AlteringCave_EventScript_RanJirachi
	setflag FLAG_CAUGHT_JIRACHI
	release
	end

AlteringCave_EventScript_DefeatedJirachi::
	setflag FLAG_DEFEATED_JIRACHI
	setflag FLAG_HIDE_JIRACHI
	setvar VAR_0x8004, SPECIES_JIRACHI
	goto Common_EventScript_LegendaryFlewAway
	end

AlteringCave_EventScript_RanJirachi::
	setflag FLAG_HIDE_JIRACHI
	setvar VAR_0x8004, SPECIES_JIRACHI
	goto Common_EventScript_LegendaryFlewAway
	end

