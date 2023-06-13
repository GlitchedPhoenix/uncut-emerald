MagmaHideout_EnteiChamber_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MagmaHideout_EnteiChamber_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, MagmaHideout_EnteiChamber_OnResume
	.byte 0

MagmaHideout_EnteiChamber_OnTransition::
	call_if_set FLAG_CAUGHT_ENTEI, MagmaHideout_EventScript_HideEntei
	call_if_unset FLAG_ACTIVATE_ORDER_66, MagmaHideout_EventScript_HideEntei
	call_if_unset FLAG_CAUGHT_ENTEI, MagmaHideout_EventScript_TryShowEntei
	end

MagmaHideout_EventScript_HideEntei::
	setflag FLAG_HIDE_ENTEI
	end

MagmaHideout_EventScript_TryShowEntei::
	goto_if_set FLAG_DEFEATED_ENTEI, Common_EventScript_NopReturn
	clearflag FLAG_HIDE_ENTEI
	return

MagmaHideout_EnteiChamber_OnResume::
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Legend_EventScript_TryRemoveObject
	end

MagmaHideout_EventScript_Entei::
	lock
	playmoncry SPECIES_ENTEI, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setvar VAR_LAST_TALKED, 1
	seteventmon SPECIES_ENTEI, 50
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, MagmaHideout_EventScript_DefeatedEntei
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, MagmaHideout_EventScript_RanEntei
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, MagmaHideout_EventScript_RanEntei
	setflag FLAG_CAUGHT_ENTEI
	release
	end

MagmaHideout_EventScript_DefeatedEntei::
	setflag FLAG_DEFEATED_ENTEI
	setflag FLAG_HIDE_ENTEI
	setvar VAR_0x8004, SPECIES_ENTEI
	goto Common_EventScript_LegendaryRanAway
	end

MagmaHideout_EventScript_RanEntei::
	setflag FLAG_HIDE_ENTEI
	setvar VAR_0x8004, SPECIES_ENTEI
	goto Common_EventScript_LegendaryRanAway
	end
