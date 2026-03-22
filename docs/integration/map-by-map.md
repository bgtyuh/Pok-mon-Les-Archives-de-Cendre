# Map by map

Chaque tableau ci-dessous sert de matrice de scripting par map jouable majeure. Les colonnes Â« aprÃ¨s badge Â», Â« aprÃ¨s Bordelande Â», Â« aprÃ¨s Convoi 17 Â» et Â« Ã©pilogue Â» permettent de prÃ©voir les swaps de PNJ, scripts d'entrÃ©e et blocs de texte sans devoir relire toute la trame.

## Cendrebourg

| Ã‰lÃ©ment | DÃ©tail d'implÃ©mentation |
|---|---|
| PNJ prÃ©sents | MÃ¨re, rival et parent du rival, voisine Ã¢gÃ©e, facteur, enfant, ancien mineur, garde du rail, professeure FrÃªne. |
| Scripts d'entrÃ©e | RÃ©veil (`SCN_CBG_WAKE`), visite maison rival (`SCN_CBG_RIVAL_HOME`), place (`SCN_CBG_SQUARE`), laboratoire + choix starter (`SCN_CBG_LAB_STARTER`), premier combat (`SCN_CBG_FIRST_BATTLE`), sortie (`SCN_CBG_EXIT`). |
| Scripts aprÃ¨s badge | Aucun changement structurel majeur ; FrÃªne peut ajouter une ligne sur Transit-sur-Rail si le joueur revisite. |
| Scripts aprÃ¨s Bordelande | FrÃªne ajoute des dialogues de doute sur les protocoles d'apaisement ; villageois peuvent commenter la bordure de maniÃ¨re plus explicite. |
| Scripts aprÃ¨s Convoi 17 | FrÃªne dÃ©bloque une version plus grave de ses dialogues, liÃ©e Ã  son lien personnel avec le convoi. |
| Scripts d'Ã©pilogue | Maison du joueur et labo chargent de courtes variantes de post-game ; FrÃªne, la mÃ¨re et le rival commentent `ROUTE_FINAL`. |

## Route BraisÃ©e

| Ã‰lÃ©ment | DÃ©tail d'implÃ©mentation |
|---|---|
| PNJ prÃ©sents | Rival, employÃ© en pause, lycÃ©enne archiviste, vieil homme au banc, agent de patrouille, PokÃ©mon sauvages en fuite. |
| Scripts d'entrÃ©e | EntrÃ©e de route (`SCN_RBR_ENTRY`), dresseurs mineurs, halte (`SCN_RBR_REST_STOP`), incident mineur (`SCN_RBR_INCIDENT`), panorama vers Transit. |
| Scripts aprÃ¨s badge | Aucun swap majeur ; l'agent de patrouille peut reconnaÃ®tre le joueur comme champion local. |
| Scripts aprÃ¨s Bordelande | Les dialogues sur les pylÃ´nes et les quotas gagnent une lecture plus politique. |
| Scripts aprÃ¨s Convoi 17 | Ajouter un commentaire contextuel sur la logistique et les rails comme supports du silence institutionnel. |
| Scripts d'Ã©pilogue | Route surtout contemplative ; quelques NPC peuvent commenter la stabilitÃ©, la dispute publique ou les rÃ©parations locales selon `ROUTE_FINAL`. |

## Transit-sur-Rail

| Ã‰lÃ©ment | DÃ©tail d'implÃ©mentation |
|---|---|
| PNJ prÃ©sents | Rival, annonce publique, contrÃ´leuse, voyageuse, enfant pressÃ©, vendeuse, soigneur, Capitaine Orme, Armand Flux, agents des Flux. |
| Scripts d'entrÃ©e | ArrivÃ©e en gare (`SCN_TSR_ARRIVAL`), rencontre Orme (`SCN_TSR_ORME`), arÃ¨ne et badge (`SCN_TSR_BADGE_1`), incident sur voie secondaire (`SCN_TSR_TRACK_INCIDENT`), dÃ©part pÃ©riphÃ©rie. |
| Scripts aprÃ¨s badge | Orme et Armand passent Ã  leurs dialogues post-victoire ; le mini-incident est disponible une seule fois. |
| Scripts aprÃ¨s Bordelande | Orme peut rÃ©agir au malaise du joueur ; voyageurs et soigneur ajoutent des lignes sur les Â« Ã©carts Â» ou les zones de bordure. |
| Scripts aprÃ¨s Convoi 17 | Forte mise Ã  jour : Orme devient tÃ©moin, les rails secondaires peuvent recevoir des interactions optionnelles liÃ©es Ã  la quÃªte mÃ©moire du Convoi 17. |
| Scripts d'Ã©pilogue | Selon `ROUTE_FINAL`, Transit paraÃ®t soit plus lisse (Sceau), plus dÃ©battu (Flamme), soit rÃ©ajustÃ© avec plus de transparence publique (Alliance). |

## Route des PylÃ´nes

| Ã‰lÃ©ment | DÃ©tail d'implÃ©mentation |
|---|---|
| PNJ prÃ©sents | Rival, rÃ©paratrice, livreur, Ã©leveuse, agent de contrÃ´le, dresseur dissident masquÃ©. |
| Scripts d'entrÃ©e | EntrÃ©e (`SCN_RPY_CHECKPOINT`), dialogues techniques, checkpoint, combat dissident. |
| Scripts aprÃ¨s badge | Aucun. |
| Scripts aprÃ¨s Bordelande | Le checkpoint peut devenir plus nerveux ou plus conciliant selon `REL_ADMIN` et `REL_DISS`. |
| Scripts aprÃ¨s Convoi 17 | Ajouter lignes sur les transferts prioritaires et la surveillance des flux logistiques. |
| Scripts d'Ã©pilogue | Version Sceau : prÃ©sence accrue des contrÃ´les. Version Flamme : checkpoint plus conflictuel. Version Alliance : affichage d'accords locaux et circulation plus dialoguÃ©e. |

## Bordelande

| Ã‰lÃ©ment | DÃ©tail d'implÃ©mentation |
|---|---|
| PNJ prÃ©sents | Habitante au brasero, rival, soigneur de bordure, Eda, mÃ©canicienne, enfant, ouvrier, Ilyan, ouvriÃ¨re du cÃ¢ble, Galeking de travail. |
| Scripts d'entrÃ©e | ArrivÃ©e (`SCN_BDL_ARRIVAL`), centre PokÃ©mon, rencontre Eda (`SCN_BDL_EDA`), rencontre Ilyan (`SCN_BDL_ILYAN`), incident PokÃ©mon de travail (`SCN_BDL_WORKMON`), soir Ã  Bordelande. |
| Scripts aprÃ¨s badge | Aucun badge local dans les scripts actuels ; conserver la map comme hub social et moral. |
| Scripts aprÃ¨s Bordelande | Une fois les scÃ¨nes locales finies, Eda et Ilyan basculent vers des dialogues de suivi et d'orientation. |
| Scripts aprÃ¨s Convoi 17 | Eda commente mieux le prix humain du silence ; Ilyan devient beaucoup plus direct sur l'ouverture des archives. |
| Scripts d'Ã©pilogue | Map Ã  forte variation : ravitaillement encadrÃ© en Sceau, conflit verbal ouvert en Flamme, coopÃ©ration franche mais non idyllique en Alliance. |

## Fosse Thermale

| Ã‰lÃ©ment | DÃ©tail d'implÃ©mentation |
|---|---|
| PNJ prÃ©sents | Guide local, scientifique en inspection, dissidente en planque, rival, agents des Flux, Eda, Ilyan. |
| Scripts d'entrÃ©e | EntrÃ©e de zone, mini-donjon, scÃ¨ne clÃ© d'apaisement imposÃ© (`SCN_FTH_APAISEMENT`), fin de sÃ©quence. |
| Scripts aprÃ¨s badge | Sans objet. |
| Scripts aprÃ¨s Bordelande | C'est prÃ©cisÃ©ment la scÃ¨ne de suite de Bordelande ; dÃ©clencher ici l'escalade morale de l'acte II. |
| Scripts aprÃ¨s Convoi 17 | Peut recevoir des interactions rÃ©trospectives sur Uxie et l'usage de l'apaisement. |
| Scripts d'Ã©pilogue | Optionnel : zone plus verrouillÃ©e en Sceau, transformÃ©e en preuve militante en Flamme, ou en site d'explication publique contrÃ´lÃ©e en Alliance. |

## Verride

| Ã‰lÃ©ment | DÃ©tail d'implÃ©mentation |
|---|---|
| PNJ prÃ©sents | Agathe Verre, conservatrice, visiteur, rival, public d'arÃ¨ne. |
| Scripts d'entrÃ©e | ArrivÃ©e, atelier d'Agathe (`SCN_VRD_AGATHE_WORKSHOP`), arÃ¨ne (`SCN_VRD_BADGE_2`), musÃ©e restaurÃ©, scÃ¨ne rival (`SCN_VRD_RIVAL`). |
| Scripts aprÃ¨s badge | Agathe et les NPC du musÃ©e passent Ã  leurs variantes post-badge. |
| Scripts aprÃ¨s Bordelande | Verride sert de contrepoint : montrer la rÃ©paration assumÃ©e plutÃ´t que l'apaisement. |
| Scripts aprÃ¨s Convoi 17 | DÃ©bloquer si souhaitÃ© une quÃªte annexe renforcÃ©e sur les objets sans lÃ©gende. |
| Scripts d'Ã©pilogue | Les cartels du musÃ©e, les commentaires sur les fissures et les objets exposÃ©s peuvent varier selon la politique mÃ©moire choisie. |

## Noctisilo

| Ã‰lÃ©ment | DÃ©tail d'implÃ©mentation |
|---|---|
| PNJ prÃ©sents | Doyen Nox, assistante vÃ©tÃ©rinaire, chercheur junior, rival, personnel des serres. |
| Scripts d'entrÃ©e | EntrÃ©e serres (`SCN_NOC_GUIDED_TOUR`), visite guidÃ©e, salle des registres (`SCN_NOC_REGISTERS`), conflit avec Nox (`SCN_NOC_NOX_CONFLICT`). |
| Scripts aprÃ¨s badge | Sans objet direct. |
| Scripts aprÃ¨s Bordelande | La simple prÃ©sence du joueur Ã  Noctisilo doit dÃ©jÃ  prÃ©supposer qu'il a vu la bordure et sait comparer les discours. |
| Scripts aprÃ¨s Convoi 17 | Les dialogues peuvent pointer que les classifications ont aussi servi Ã  gÃ©rer des survivants et des PokÃ©mon clefs. |
| Scripts d'Ã©pilogue | Sceau : conservation technocratique. Flamme : remise en cause dure des affectations. Alliance : statuts hybrides et rÃ©forme lente. |

## Fluxia

| Ã‰lÃ©ment | DÃ©tail d'implÃ©mentation |
|---|---|
| PNJ prÃ©sents | Rival, guide officielle, Lysandre Valce, archiviste de jour, Ã©tudiante, archiviste de nuit, visiteurs du mÃ©morial. |
| Scripts d'entrÃ©e | Place centrale, mÃ©morial (`SCN_FLX_MEMORIAL`), entretien Valce (`SCN_FLX_VALCE`), archives publiques, archives nocturnes (`SCN_FLX_ARCHIVES_NIGHT`). |
| Scripts aprÃ¨s badge | Sans objet direct dans les scripts actuels. |
| Scripts aprÃ¨s Bordelande | Fluxia doit contraster avec Bordelande : beautÃ©, ordre et couloirs sans portes. |
| Scripts aprÃ¨s Convoi 17 | TrÃ¨s forte Ã©volution : archives et mÃ©morial changent de sens, Valce parle comme gardien d'un cadre menacÃ© plutÃ´t que simple administrateur sÃ»r de lui. |
| Scripts d'Ã©pilogue | Trois Ã©tats complets dÃ©jÃ  Ã©crits : calme administrÃ© (Sceau), dÃ©bats dÃ©bordants (Flamme), rÃ©ouverture graduelle des noms et dossiers (Alliance). |

## Convoi 17

| Ã‰lÃ©ment | DÃ©tail d'implÃ©mentation |
|---|---|
| PNJ prÃ©sents | Capitaine Orme, rival, professeure FrÃªne, dÃ©bris lisibles, plaques tordues, Ã©ventuellement Ã©quipes mÃ©moire. |
| Scripts d'entrÃ©e | DÃ©part d'enquÃªte, site de dÃ©raillement (`SCN_C17_SITE`), archive croisÃ©e (`SCN_C17_REVEAL`), rÃ©vÃ©lation personnelle de FrÃªne. |
| Scripts aprÃ¨s badge | Sans objet. |
| Scripts aprÃ¨s Bordelande | Sans objet, zone plus tardive. |
| Scripts aprÃ¨s Convoi 17 | Une fois cette map complÃ©tÃ©e, elle sert surtout de lieu de relecture ou d'Ã©tape de quÃªte secondaire. |
| Scripts d'Ã©pilogue | PossibilitÃ© d'ajouter un mÃ©morial, un site plus fermÃ© ou une mission de maintenance selon `ROUTE_FINAL`, mais ce n'est pas encore dÃ©taillÃ© dans les docs sources. |

## Observatoire des Cendres

| Ã‰lÃ©ment | DÃ©tail d'implÃ©mentation |
|---|---|
| PNJ prÃ©sents | Rival, professeure FrÃªne, Lysandre Valce, Ilyan, archives audio, prÃ©sence de Heatran, manifestation Ã©ventuelle de Zygarde. |
| Scripts d'entrÃ©e | EntrÃ©e, terminaux de crise (`SCN_OBS_TERMINALS`), rÃ©vÃ©lation Uxie (`SCN_OBS_FRENE_UXIE`), confrontation Valce/Ilyan (`SCN_OBS_VALCE_ILYAN`), rÃ©vÃ©lation Heatran (`SCN_OBS_HEATRAN`), apparition Zygarde (`SCN_OBS_ZYGARDE`), choix final (`SCN_FINAL_CHOICE`). |
| Scripts aprÃ¨s badge | Sans objet. |
| Scripts aprÃ¨s Bordelande | Sans objet, mais toutes les scÃ¨nes de bordure doivent Ãªtre relues ici dans les rÃ©pliques. |
| Scripts aprÃ¨s Convoi 17 | Condition principale : l'accÃ¨s et les rÃ©vÃ©lations reposent sur la vÃ©ritÃ© du Convoi 17. |
| Scripts d'Ã©pilogue | Pas de libre dÃ©ambulation explicitÃ©e pour l'instant ; peut rester comme map de fin verrouillÃ©e aprÃ¨s le choix. |

## Ligue de Cendral

| Ã‰lÃ©ment | DÃ©tail d'implÃ©mentation |
|---|---|
| PNJ prÃ©sents | RÃ©ceptionniste, Isolde, Corvin, Mirelle, Teren, personnel de ligue. |
| Scripts d'entrÃ©e | Hall (`SCN_LIGUE_COUNCIL`), quatre combats du Conseil, lignes post-combat. |
| Scripts aprÃ¨s badge | NÃ©cessite le total de badges requis. |
| Scripts aprÃ¨s Bordelande | Sans objet. |
| Scripts aprÃ¨s Convoi 17 | Sans objet direct, sauf lignes contextuelles sur les consÃ©quences de la victoire. |
| Scripts d'Ã©pilogue | La ligue peut charger des commentaires de champion adaptÃ©s Ã  `ROUTE_FINAL`. |
