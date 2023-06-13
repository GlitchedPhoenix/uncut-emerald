AbandonedShip_SuicuneChamber_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AbandonedShip_SuicuneChamber_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, AbandonedShip_SuicuneChamber_OnResume
	.byte 0

AbandonedShip_SuicuneChamber_OnTransition::
	call_if_set FLAG_CAUGHT_SUICUNE, AbandonedShip_EventScript_HideSuicune
	call_if_unset FLAG_ACTIVATE_ORDER_66, AbandonedShip_EventScript_HideSuicune
	call_if_unset FLAG_CAUGHT_SUICUNE, AbandonedShip_EventScript_TryShowSuicune
	end

AbandonedShip_EventScript_HideSuicune::
	setflag FLAG_HIDE_SUICUNE
	end

AbandonedShip_EventScript_TryShowSuicune::
	goto_if_set FLAG_DEFEATED_SUICUNE, Common_EventScript_NopReturn
	clearflag FLAG_HIDE_SUICUNE
	return

AbandonedShip_SuicuneChamber_OnResume::
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Legend_EventScript_TryRemoveObject
	end

AbandonedShip_EventScript_Suicune::
	lock
	playmoncry SPECIES_SUICUNE, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setvar VAR_LAST_TALKED, 1
	seteventmon SPECIES_SUICUNE, 50
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, AbandonedShip_EventScript_DefeatedSuicune
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, AbandonedShip_EventScript_RanSuicune
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, AbandonedShip_EventScript_RanSuicune
	setflag FLAG_CAUGHT_SUICUNE
	release
	end

AbandonedShip_EventScript_DefeatedSuicune::
	setflag FLAG_DEFEATED_SUICUNE
	setflag FLAG_HIDE_SUICUNE
	setvar VAR_0x8004, SPECIES_SUICUNE
	goto Common_EventScript_LegendaryRanAway
	end

AbandonedShip_EventScript_RanSuicune::
	setflag FLAG_HIDE_SUICUNE
	setvar VAR_0x8004, SPECIES_SUICUNE
	goto Common_EventScript_LegendaryRanAway
	end
