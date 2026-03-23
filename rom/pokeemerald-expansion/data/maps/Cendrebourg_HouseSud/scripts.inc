Cendrebourg_HouseSud_MapScripts::
	.byte 0

Cendrebourg_HouseSud_NPC_Mineur::
	goto_if_set FLAG_SCN_CBG_FIRST_BATTLE_DONE, Cendrebourg_HouseSud_NPC_Mineur_AfterBattle
	goto_if_set FLAG_SCN_CBG_LAB_STARTER_DONE, Cendrebourg_HouseSud_NPC_Mineur_AfterStarter
	msgbox Cendrebourg_HouseSud_Text_Mineur_BeforeStarter, MSGBOX_NPC
	end

Cendrebourg_HouseSud_NPC_Mineur_AfterStarter::
	msgbox Cendrebourg_HouseSud_Text_Mineur_AfterStarter, MSGBOX_NPC
	end

Cendrebourg_HouseSud_NPC_Mineur_AfterBattle::
	msgbox Cendrebourg_HouseSud_Text_Mineur_AfterBattle, MSGBOX_NPC
	end

Cendrebourg_HouseSud_NPC_Voisine::
	goto_if_set FLAG_SCN_CBG_FIRST_BATTLE_DONE, Cendrebourg_HouseSud_NPC_Voisine_AfterBattle
	goto_if_set FLAG_SCN_CBG_LAB_STARTER_DONE, Cendrebourg_HouseSud_NPC_Voisine_AfterStarter
	msgbox Cendrebourg_HouseSud_Text_Voisine_BeforeStarter, MSGBOX_NPC
	end

Cendrebourg_HouseSud_NPC_Voisine_AfterStarter::
	msgbox Cendrebourg_HouseSud_Text_Voisine_AfterStarter, MSGBOX_NPC
	end

Cendrebourg_HouseSud_NPC_Voisine_AfterBattle::
	msgbox Cendrebourg_HouseSud_Text_Voisine_AfterBattle, MSGBOX_NPC
	end

Cendrebourg_HouseSud_Text_Mineur_BeforeStarter:
	.string "J'ai passe ma vie sur les rails.\n"
	.string "Garde ton souffle pour la route.$"

Cendrebourg_HouseSud_Text_Mineur_AfterStarter:
	.string "Un partenaire, c'est un pacte.\n"
	.string "Ecoute-le autant que tu le diriges.$"

Cendrebourg_HouseSud_Text_Mineur_AfterBattle:
	.string "Ton premier duel t'a pose.\n"
	.string "Continue comme ca, calmement.$"

Cendrebourg_HouseSud_Text_Voisine_BeforeStarter:
	.string "Je prepare des sacs de voyage.\n"
	.string "Si tu pars, prends de l'eau.$"

Cendrebourg_HouseSud_Text_Voisine_AfterStarter:
	.string "Ton partenaire a l'air curieux.\n"
	.string "C'est bon signe pour commencer.$"

Cendrebourg_HouseSud_Text_Voisine_AfterBattle:
	.string "On a entendu le duel d'ici.\n"
	.string "Le village est deja derriere toi.$"
