# Index des dialogues

Ce dossier contient la structure de référence pour écrire **tous** les dialogues du jeu. Les fichiers présents servent de noyau canonique ; chaque sous-dossier peut être étendu avec des fichiers supplémentaires par bâtiment, temporalité ou état du monde.

## Méthode de complétion exhaustive
Pour chaque zone, prévoir les catégories suivantes :
- `00_arrivee.md`
- `01_pnj_jour.md`
- `02_pnj_nuit.md`
- `03_batiments.md`
- `04_arene.md`
- `05_quete_annexe.md`
- `06_evenement_scenario.md`
- `07_post_revelation.md`
- `08_epilogue_sceau.md`
- `09_epilogue_flamme.md`
- `10_epilogue_alliance.md`

## Couverture initiale livrée
### Cendrebourg
- `intro-et-depart.md` : réveil, labo, sortie du village.
- À écrire ensuite : voisins de jour/nuit, maison du rival, vergers, retours scénarisés.

### Transit-sur-Rail
- `gare-et-arene.md` : arrivée, première arène, incident neutralisé.
- À écrire ensuite : commerces de quai, dortoirs, poste de sécurité, tunnels de maintenance.

### Fluxia
- `administration-et-archives.md` : arrivée, entretien avec Valce, archives publiques.
- À écrire ensuite : jardins filtrants, mémorial, métro suspendu, quartier administratif profond.

### Bordelande
- `arrivee-et-dissidents.md` : entrée, Eda, Ilyan, incident de fatigue.
- À écrire ensuite : dispensaire, ateliers, baraquements, assemblées locales, checkpoints.

### Observatoire des Cendres
- `revelations.md` : archives audio, confrontation finale, Uxie, Heatran, Zygarde.
- À écrire ensuite : terminaux secondaires, journaux de terrain, salles effondrées, variantes par route.

### Ligue et épilogues
- `fins.md` : choix final, conséquences, voix du monde après la décision.
- À écrire ensuite : dialogues de champions selon la fin, PNJ revenants, rematchs, zones rouvertes.

## Conseil de ton
Les meilleurs dialogues du projet doivent souvent faire deux choses à la fois :
1. fonctionner immédiatement comme une conversation claire et vivante ;
2. laisser passer le thème en dessous, sans donner l'impression qu'un PNJ récite une dissertation.

## Registre de langue
- **PNJ ordinaires** : parler simple, direct, parfois familier, comme des gens normaux.
- **Bordelande** : encore plus concret, franc, parfois sec, mais jamais artificiellement "poétique".
- **Rival** : spontané, nerveux, drôle quand il/elle masque son stress.
- **Frêne** : un peu plus posée, cultivée, mais humaine et chaleureuse.
- **Administration / langage corporate** : seulement pour Valce, les agents, les annonces, les documents officiels et certains personnages qui ont intégré la langue du système.
- **Règle générale** : si une phrase semble trop écrite, trop brillante ou trop "au-dessus" d'un humain normal, il faut la simplifier.

## Lien avec le script intégral
Quand une scène doit être intégrée entièrement dans la ROM hack, utiliser en priorité les fichiers de `../09_script-integral/`, qui regroupent les versions longues, les scènes de transition et de nombreux dialogues de PNJ déjà rédigés.
