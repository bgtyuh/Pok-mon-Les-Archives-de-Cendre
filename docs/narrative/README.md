# Pokémon : Les Archives de Cendre — Bible narrative

Ce dossier sert de base d'écriture intégrale pour la ROM hack **Pokémon : Les Archives de Cendre**.

## Intention
Le projet raconte un monde qui a survécu en choisissant une forme d'oubli administré. Le joueur ne sauve pas le monde au sens classique : il apprend comment il tient debout, pour qui il tient debout, puis décide du prix acceptable pour l'avenir.

## Principes d'écriture
- **Mystère progressif** : chaque ville répond à une question et en ouvre deux autres.
- **Ambiguïté morale** : aucune faction n'a entièrement tort ni entièrement raison.
- **Pokémon comme partenaires moraux** : leurs états émotionnels racontent autant que les PNJ.
- **Subtilité avant exposition** : les documents, silences, routines et incohérences comptent autant que les grands discours.
- **Épilogue jouable** : chaque route finale doit modifier le monde, les dialogues et l'ambiance.

## Arborescence conseillée
- `01_vision/` : promesse du jeu, thèmes, ton, motifs visuels.
- `02_monde/` : région, histoire, institutions, lieux.
- `03_personnages/` : protagonistes, rivaux, mentors, figures de factions.
- `04_scenario/` : déroulé macro par acte et scènes critiques.
- `05_dialogues/` : dialogues rangés par ville, scène et état du monde.
- `06_quetes/` : quêtes annexes, événements optionnels, progression émotionnelle.
- `07_systemes/` : intégration narrative des mécaniques de gameplay.
- `08_routes_finales/` : structure des trois fins et de l'épilogue jouable.
- `09_script-integral/` : script dialogué quasi scène par scène pour l'intégration événementielle.
- `13_postgame/` : documentation détaillée du monde jouable après la fin, par route finale.

## Fichiers pivots
1. Lire `01_vision/pitch-affine.md` pour l'ADN du projet.
2. Lire `02_monde/region-cendral.md` et `02_monde/chronologie.md` pour l'histoire.
3. Lire `03_personnages/casting-principal.md` pour la voix des personnages.
4. Lire `04_scenario/structure-complete.md` pour la campagne principale.
5. Écrire ensuite les scènes dans `05_dialogues/` en suivant le découpage ci-dessous.
6. Utiliser `09_script-integral/` comme version de travail exhaustive pour intégrer le jeu scène par scène.

## Convention d'écriture des dialogues
Chaque fichier de dialogue doit idéalement contenir :
- le **contexte de déclenchement** ;
- la **liste des intervenants** ;
- le **but émotionnel** de la scène ;
- la **version canonique** du dialogue ;
- les **variantes** selon badges, choix, heure ou route finale ;
- les **barks courts** réutilisables pour PNJ de fond.

## Découpage recommandé des dialogues exhaustifs
Pour chaque zone jouable, prévoir à terme :
- dialogues d'arrivée ;
- dialogues avant/arène/après-arène ;
- dialogues de PNJ civils de jour et de nuit ;
- dialogues de bâtiments (centre, boutique, maison, gare, administration) ;
- dialogues liés aux quêtes annexes ;
- variations avant/après révélations du scénario ;
- variations d'épilogue selon la route finale.

## Résumé créatif en une phrase
**Un Pokémon où l'on n'affronte pas seulement des adversaires, mais le confort moral de ne pas regarder ce qui soutient la paix.**
