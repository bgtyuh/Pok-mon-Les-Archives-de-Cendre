# Map by map

Chaque tableau ci-dessous sert de matrice de scripting par map jouable majeure. Les colonnes « après badge », « après Bordelande », « après Convoi 17 » et « épilogue » permettent de prévoir les swaps de PNJ, scripts d'entrée et blocs de texte sans devoir relire toute la trame.

## Cendrebourg

| Élément | Détail d'implémentation |
|---|---|
| PNJ présents | Mère, rival et parent du rival, voisine âgée, facteur, enfant, ancien mineur, garde du rail, professeure Frêne. |
| Scripts d'entrée | Réveil (`SCN_CBG_WAKE`), visite maison rival (`SCN_CBG_RIVAL_HOME`), place (`SCN_CBG_SQUARE`), laboratoire + choix starter (`SCN_CBG_LAB_STARTER`), premier combat (`SCN_CBG_FIRST_BATTLE`), sortie (`SCN_CBG_EXIT`). |
| Scripts après badge | Aucun changement structurel majeur ; Frêne peut ajouter une ligne sur Transit-sur-Rail si le joueur revisite. |
| Scripts après Bordelande | Frêne ajoute des dialogues de doute sur les protocoles d'apaisement ; villageois peuvent commenter la bordure de manière plus explicite. |
| Scripts après Convoi 17 | Frêne débloque une version plus grave de ses dialogues, liée à son lien personnel avec le convoi. |
| Scripts d'épilogue | Maison du joueur et labo chargent de courtes variantes de post-game ; Frêne, la mère et le rival commentent `ROUTE_FINAL`. |

## Route Braisée

| Élément | Détail d'implémentation |
|---|---|
| PNJ présents | Rival, employé en pause, lycéenne archiviste, vieil homme au banc, agent de patrouille, Pokémon sauvages en fuite. |
| Scripts d'entrée | Entrée de route (`SCN_RBR_ENTRY`), dresseurs mineurs, halte (`SCN_RBR_REST_STOP`), incident mineur (`SCN_RBR_INCIDENT`), panorama vers Transit. |
| Scripts après badge | Aucun swap majeur ; l'agent de patrouille peut reconnaître le joueur comme champion local. |
| Scripts après Bordelande | Les dialogues sur les pylônes et les quotas gagnent une lecture plus politique. |
| Scripts après Convoi 17 | Ajouter un commentaire contextuel sur la logistique et les rails comme supports du silence institutionnel. |
| Scripts d'épilogue | Route surtout contemplative ; quelques NPC peuvent commenter la stabilité, la dispute publique ou les réparations locales selon `ROUTE_FINAL`. |

## Transit-sur-Rail

| Élément | Détail d'implémentation |
|---|---|
| PNJ présents | Rival, annonce publique, contrôleuse, voyageuse, enfant pressé, vendeuse, soigneur, Capitaine Orme, Armand Flux, agents des Flux. |
| Scripts d'entrée | Arrivée en gare (`SCN_TSR_ARRIVAL`), rencontre Orme (`SCN_TSR_ORME`), arène et badge (`SCN_TSR_BADGE_1`), incident sur voie secondaire (`SCN_TSR_TRACK_INCIDENT`), départ périphérie. |
| Scripts après badge | Orme et Armand passent à leurs dialogues post-victoire ; le mini-incident est disponible une seule fois. |
| Scripts après Bordelande | Orme peut réagir au malaise du joueur ; voyageurs et soigneur ajoutent des lignes sur les « écarts » ou les zones de bordure. |
| Scripts après Convoi 17 | Forte mise à jour : Orme devient témoin, les rails secondaires peuvent recevoir des interactions optionnelles liées à la quête mémoire du Convoi 17. |
| Scripts d'épilogue | Selon `ROUTE_FINAL`, Transit paraît soit plus lisse (Sceau), plus débattu (Flamme), soit réajusté avec plus de transparence publique (Alliance). |

## Route des Pylônes

| Élément | Détail d'implémentation |
|---|---|
| PNJ présents | Rival, réparatrice, livreur, éleveuse, agent de contrôle, dresseur dissident masqué. |
| Scripts d'entrée | Entrée (`SCN_RPY_CHECKPOINT`), dialogues techniques, checkpoint, combat dissident. |
| Scripts après badge | Aucun. |
| Scripts après Bordelande | Le checkpoint peut devenir plus nerveux ou plus conciliant selon `REL_ADMIN` et `REL_DISS`. |
| Scripts après Convoi 17 | Ajouter lignes sur les transferts prioritaires et la surveillance des flux logistiques. |
| Scripts d'épilogue | Version Sceau : présence accrue des contrôles. Version Flamme : checkpoint plus conflictuel. Version Alliance : affichage d'accords locaux et circulation plus dialoguée. |

## Bordelande

| Élément | Détail d'implémentation |
|---|---|
| PNJ présents | Habitante au brasero, rival, soigneur de bordure, Eda, mécanicienne, enfant, ouvrier, Ilyan, ouvrière du câble, Galeking de travail. |
| Scripts d'entrée | Arrivée (`SCN_BDL_ARRIVAL`), centre Pokémon, rencontre Eda (`SCN_BDL_EDA`), rencontre Ilyan (`SCN_BDL_ILYAN`), incident Pokémon de travail (`SCN_BDL_WORKMON`), soir à Bordelande. |
| Scripts après badge | Aucun badge local dans les scripts actuels ; conserver la map comme hub social et moral. |
| Scripts après Bordelande | Une fois les scènes locales finies, Eda et Ilyan basculent vers des dialogues de suivi et d'orientation. |
| Scripts après Convoi 17 | Eda commente mieux le prix humain du silence ; Ilyan devient beaucoup plus direct sur l'ouverture des archives. |
| Scripts d'épilogue | Map à forte variation : ravitaillement encadré en Sceau, conflit verbal ouvert en Flamme, coopération franche mais non idyllique en Alliance. |

## Fosse Thermale

| Élément | Détail d'implémentation |
|---|---|
| PNJ présents | Guide local, scientifique en inspection, dissidente en planque, rival, agents des Flux, Eda, Ilyan. |
| Scripts d'entrée | Entrée de zone, mini-donjon, scène clé d'apaisement imposé (`SCN_FTH_APAISEMENT`), fin de séquence. |
| Scripts après badge | Sans objet. |
| Scripts après Bordelande | C'est précisément la scène de suite de Bordelande ; déclencher ici l'escalade morale de l'acte II. |
| Scripts après Convoi 17 | Peut recevoir des interactions rétrospectives sur Uxie et l'usage de l'apaisement. |
| Scripts d'épilogue | Optionnel : zone plus verrouillée en Sceau, transformée en preuve militante en Flamme, ou en site d'explication publique contrôlée en Alliance. |

## Verride

| Élément | Détail d'implémentation |
|---|---|
| PNJ présents | Agathe Verre, conservatrice, visiteur, rival, public d'arène. |
| Scripts d'entrée | Arrivée, atelier d'Agathe (`SCN_VRD_AGATHE_WORKSHOP`), arène (`SCN_VRD_BADGE_2`), musée restauré, scène rival (`SCN_VRD_RIVAL`). |
| Scripts après badge | Agathe et les NPC du musée passent à leurs variantes post-badge. |
| Scripts après Bordelande | Verride sert de contrepoint : montrer la réparation assumée plutôt que l'apaisement. |
| Scripts après Convoi 17 | Débloquer si souhaité une quête annexe renforcée sur les objets sans légende. |
| Scripts d'épilogue | Les cartels du musée, les commentaires sur les fissures et les objets exposés peuvent varier selon la politique mémoire choisie. |

## Noctisilo

| Élément | Détail d'implémentation |
|---|---|
| PNJ présents | Doyen Nox, assistante vétérinaire, chercheur junior, rival, personnel des serres. |
| Scripts d'entrée | Entrée serres (`SCN_NOC_GUIDED_TOUR`), visite guidée, salle des registres (`SCN_NOC_REGISTERS`), conflit avec Nox (`SCN_NOC_NOX_CONFLICT`). |
| Scripts après badge | Sans objet direct. |
| Scripts après Bordelande | La simple présence du joueur à Noctisilo doit déjà présupposer qu'il a vu la bordure et sait comparer les discours. |
| Scripts après Convoi 17 | Les dialogues peuvent pointer que les classifications ont aussi servi à gérer des survivants et des Pokémon clefs. |
| Scripts d'épilogue | Sceau : conservation technocratique. Flamme : remise en cause dure des affectations. Alliance : statuts hybrides et réforme lente. |

## Fluxia

| Élément | Détail d'implémentation |
|---|---|
| PNJ présents | Rival, guide officielle, Lysandre Valce, archiviste de jour, étudiante, archiviste de nuit, visiteurs du mémorial. |
| Scripts d'entrée | Place centrale, mémorial (`SCN_FLX_MEMORIAL`), entretien Valce (`SCN_FLX_VALCE`), archives publiques, archives nocturnes (`SCN_FLX_ARCHIVES_NIGHT`). |
| Scripts après badge | Sans objet direct dans les scripts actuels. |
| Scripts après Bordelande | Fluxia doit contraster avec Bordelande : beauté, ordre et couloirs sans portes. |
| Scripts après Convoi 17 | Très forte évolution : archives et mémorial changent de sens, Valce parle comme gardien d'un cadre menacé plutôt que simple administrateur sûr de lui. |
| Scripts d'épilogue | Trois états complets déjà écrits : calme administré (Sceau), débats débordants (Flamme), réouverture graduelle des noms et dossiers (Alliance). |

## Convoi 17

| Élément | Détail d'implémentation |
|---|---|
| PNJ présents | Capitaine Orme, rival, professeure Frêne, débris lisibles, plaques tordues, éventuellement équipes mémoire. |
| Scripts d'entrée | Départ d'enquête, site de déraillement (`SCN_C17_SITE`), archive croisée (`SCN_C17_REVEAL`), révélation personnelle de Frêne. |
| Scripts après badge | Sans objet. |
| Scripts après Bordelande | Sans objet, zone plus tardive. |
| Scripts après Convoi 17 | Une fois cette map complétée, elle sert surtout de lieu de relecture ou d'étape de quête secondaire. |
| Scripts d'épilogue | Possibilité d'ajouter un mémorial, un site plus fermé ou une mission de maintenance selon `ROUTE_FINAL`, mais ce n'est pas encore détaillé dans les docs sources. |

## Observatoire des Cendres

| Élément | Détail d'implémentation |
|---|---|
| PNJ présents | Rival, professeure Frêne, Lysandre Valce, Ilyan, archives audio, présence de Heatran, manifestation éventuelle de Zygarde. |
| Scripts d'entrée | Entrée, terminaux de crise (`SCN_OBS_TERMINALS`), révélation Uxie (`SCN_OBS_FRENE_UXIE`), confrontation Valce/Ilyan (`SCN_OBS_VALCE_ILYAN`), révélation Heatran (`SCN_OBS_HEATRAN`), apparition Zygarde (`SCN_OBS_ZYGARDE`), choix final (`SCN_FINAL_CHOICE`). |
| Scripts après badge | Sans objet. |
| Scripts après Bordelande | Sans objet, mais toutes les scènes de bordure doivent être relues ici dans les répliques. |
| Scripts après Convoi 17 | Condition principale : l'accès et les révélations reposent sur la vérité du Convoi 17. |
| Scripts d'épilogue | Pas de libre déambulation explicitée pour l'instant ; peut rester comme map de fin verrouillée après le choix. |

## Ligue de Cendral

| Élément | Détail d'implémentation |
|---|---|
| PNJ présents | Réceptionniste, Isolde, Corvin, Mirelle, Teren, personnel de ligue. |
| Scripts d'entrée | Hall (`SCN_LIGUE_COUNCIL`), quatre combats du Conseil, lignes post-combat. |
| Scripts après badge | Nécessite le total de badges requis. |
| Scripts après Bordelande | Sans objet. |
| Scripts après Convoi 17 | Sans objet direct, sauf lignes contextuelles sur les conséquences de la victoire. |
| Scripts d'épilogue | La ligue peut charger des commentaires de champion adaptés à `ROUTE_FINAL`. |
