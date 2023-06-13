ShoalCave_LowTideIceRoom_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ShoalCave_LowTideIceRoom_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, ShoalCave_LowTideIceRoom_OnResume
	.byte 0

ShoalCave_LowTideIceRoom_OnTransition::
	call_if_set FLAG_CAUGHT_ARTICUNO, ShoalCave_EventScript_HideArticuno
	call_if_unset FLAG_ACTIVATE_ORDER_66, ShoalCave_EventScript_HideArticuno
	call_if_unset FLAG_CAUGHT_ARTICUNO, ShoalCave_EventScript_TryShowArticuno
	end

Debug_ResetFlag::
	lock
	clearflag FLAG_DEFEATED_ARTICUNO
	release
	end

ShoalCave_EventScript_TryShowArticuno::
	goto_if_set FLAG_DEFEATED_ARTICUNO, Common_EventScript_NopReturn
	clearflag FLAG_HIDE_ARTICUNO
	return

ShoalCave_EventScript_HideArticuno::
	setflag FLAG_HIDE_ARTICUNO
	end

ShoalCave_EventScript_Articuno::
	lock
	playmoncry SPECIES_ARTICUNO, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setvar VAR_LAST_TALKED, 3
	seteventmon SPECIES_ARTICUNO, 50
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, ShoalCave_EventScript_DefeatedArticuno
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, ShoalCave_EventScript_RanArticuno
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, ShoalCave_EventScript_RanArticuno
	setflag FLAG_CAUGHT_ARTICUNO
	release
	end

ShoalCave_EventScript_DefeatedArticuno::
	setflag FLAG_DEFEATED_ARTICUNO
	setflag FLAG_HIDE_ARTICUNO
	setvar VAR_0x8004, SPECIES_ARTICUNO
	goto Common_EventScript_LegendaryFlewAway
	end

ShoalCave_EventScript_RanArticuno::
	setflag FLAG_HIDE_ARTICUNO
	setvar VAR_0x8004, SPECIES_ARTICUNO
	goto Common_EventScript_LegendaryFlewAway
	end

ShoalCave_LowTideIceRoom_OnResume::
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, ShoalCave_EventScript_TryRemoveArticuno
	end

ShoalCave_EventScript_TryRemoveArticuno::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject 3
	return

