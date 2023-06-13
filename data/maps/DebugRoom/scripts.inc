DebugRoom_MapScripts::
	.byte 0

TriggerOrder::
	lock
	setflag FLAG_ACTIVATE_ORDER_66
	setvar VAR_MT_PYRE_STATE, 3
	msgbox Debug_Done
	release
	end

TriggerOrder2::
	lock
	givemon SPECIES_KYOGRE, 100
	giveitem ITEM_HM03, 1
	giveitem ITEM_HM08
	giveitem ITEM_MAX_REPEL, 1
	giveitem ITEM_MASTER_BALL, 1
	setflag FLAG_BADGE01_GET
	setflag FLAG_BADGE02_GET
	setflag FLAG_BADGE03_GET
	setflag FLAG_BADGE04_GET
	setflag FLAG_BADGE05_GET
	setflag FLAG_BADGE06_GET
	setflag FLAG_BADGE07_GET
	setflag FLAG_BADGE08_GET
	release
	end


Debug_Done::
	.string "Done.$"
