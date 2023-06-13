AquaHideout_RaikouChamber_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AquaHideout_RaikouChamber_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, AquaHideout_RaikouChamber_OnResume
	.byte 0

AquaHideout_RaikouChamber_OnTransition::
	call_if_set FLAG_CAUGHT_RAIKOU, AquaHideout_EventScript_HideRaikou
	call_if_unset FLAG_ACTIVATE_ORDER_66, AquaHideout_EventScript_HideRaikou
	call_if_unset FLAG_CAUGHT_RAIKOU, AquaHideout_EventScript_TryShowRaikou
	end

AquaHideout_EventScript_HideRaikou::
	setflag FLAG_HIDE_RAIKOU
	end

AquaHideout_EventScript_TryShowRaikou::
	goto_if_set FLAG_DEFEATED_RAIKOU, Common_EventScript_NopReturn
	clearflag FLAG_HIDE_RAIKOU
	return

AquaHideout_RaikouChamber_OnResume::
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Legend_EventScript_TryRemoveObject
	end

AquaHideout_EventScript_Raikou::
	lock
	playmoncry SPECIES_RAIKOU, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setvar VAR_LAST_TALKED, 1
	seteventmon SPECIES_RAIKOU, 50
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, AquaHideout_EventScript_DefeatedRaikou
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, AquaHideout_EventScript_RanRaikou
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, AquaHideout_EventScript_RanRaikou
	setflag FLAG_CAUGHT_RAIKOU
	release
	end

AquaHideout_EventScript_DefeatedRaikou::
	setflag FLAG_DEFEATED_RAIKOU
	setflag FLAG_HIDE_RAIKOU
	setvar VAR_0x8004, SPECIES_RAIKOU
	goto Common_EventScript_LegendaryRanAway
	end

AquaHideout_EventScript_RanRaikou::
	setflag FLAG_HIDE_RAIKOU
	setvar VAR_0x8004, SPECIES_RAIKOU
	goto Common_EventScript_LegendaryRanAway
	end
