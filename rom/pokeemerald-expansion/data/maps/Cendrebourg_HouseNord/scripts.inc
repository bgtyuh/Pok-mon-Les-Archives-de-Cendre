Cendrebourg_HouseNord_MapScripts::
	.byte 0

Cendrebourg_HouseNord_NPC_Voisine::
	goto_if_set FLAG_SCN_CBG_FIRST_BATTLE_DONE, Cendrebourg_HouseNord_NPC_Voisine_AfterBattle
	goto_if_set FLAG_SCN_CBG_LAB_STARTER_DONE, Cendrebourg_HouseNord_NPC_Voisine_AfterStarter
	msgbox Cendrebourg_HouseNord_Text_Voisine_BeforeStarter, MSGBOX_NPC
	end

Cendrebourg_HouseNord_NPC_Voisine_AfterStarter::
	msgbox Cendrebourg_HouseNord_Text_Voisine_AfterStarter, MSGBOX_NPC
	end

Cendrebourg_HouseNord_NPC_Voisine_AfterBattle::
	msgbox Cendrebourg_HouseNord_Text_Voisine_AfterBattle, MSGBOX_NPC
	end

Cendrebourg_HouseNord_NPC_Enfant::
	goto_if_set FLAG_SCN_CBG_FIRST_BATTLE_DONE, Cendrebourg_HouseNord_NPC_Enfant_AfterBattle
	goto_if_set FLAG_SCN_CBG_LAB_STARTER_DONE, Cendrebourg_HouseNord_NPC_Enfant_AfterStarter
	msgbox Cendrebourg_HouseNord_Text_Enfant_BeforeStarter, MSGBOX_NPC
	end

Cendrebourg_HouseNord_NPC_Enfant_AfterStarter::
	msgbox Cendrebourg_HouseNord_Text_Enfant_AfterStarter, MSGBOX_NPC
	end

Cendrebourg_HouseNord_NPC_Enfant_AfterBattle::
	msgbox Cendrebourg_HouseNord_Text_Enfant_AfterBattle, MSGBOX_NPC
	end

Cendrebourg_HouseNord_Text_Voisine_BeforeStarter:
	.string "Tu pars aujourd'hui ?\n"
	.string "Passe me voir avant la grande route.$"

Cendrebourg_HouseNord_Text_Voisine_AfterStarter:
	.string "Bon choix pour ton premier partenaire.\n"
	.string "N'oublie pas de le menager.$"

Cendrebourg_HouseNord_Text_Voisine_AfterBattle:
	.string "Le duel etait propre.\n"
	.string "Tu peux etre fier de ce debut.$"

Cendrebourg_HouseNord_Text_Enfant_BeforeStarter:
	.string "Le labo fait un peu peur,\n"
	.string "mais c'est la que tout commence.$"

Cendrebourg_HouseNord_Text_Enfant_AfterStarter:
	.string "Tu peux me montrer ton Pokemon ?\n"
	.string "Je veux lui donner un surnom.$"

Cendrebourg_HouseNord_Text_Enfant_AfterBattle:
	.string "Tu as gagne contre ton rival ?\n"
	.string "Incroyable, et des le premier jour !$"
