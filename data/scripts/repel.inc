EventScript_RepelWoreOff::
	lockall
	bufferitemname 1, VAR_REPEL_LAST_USED
	checkitem VAR_REPEL_LAST_USED
	goto_if_eq VAR_RESULT, FALSE, EventScript_RepelWoreOff_NoMoreRepels
	msgbox Text_RepelWoreOff_UseAnother, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_RepelWoreOff_ChooseNo
	copyvar VAR_0x8004, VAR_REPEL_LAST_USED
	callnative ItemId_GetHoldEffectParam_Script
	copyvar VAR_REPEL_STEP_COUNT, VAR_RESULT
	removeitem VAR_REPEL_LAST_USED
	playse SE_REPEL
	msgbox gText_PlayerUsedRepel, MSGBOX_SIGN
	goto EventScript_RepelWoreOff_End
EventScript_RepelWoreOff_ChooseNo:
	closemessage
	goto EventScript_RepelWoreOff_End
EventScript_RepelWoreOff_NoMoreRepels:
	msgbox Text_RepelWoreOff, MSGBOX_SIGN
EventScript_RepelWoreOff_End:
	releaseall
	end

Text_RepelWoreOff::
	.string "{STR_VAR_2}'s effect wore off…$"

Text_RepelWoreOff_UseAnother::
	.string "{STR_VAR_2}'s effect wore off…\n"
	.string "Use another?$"
