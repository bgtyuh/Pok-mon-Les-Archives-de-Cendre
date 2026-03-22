# Script intégral — Version de travail

Ce dossier contient une **version écrite du jeu presque scène par scène**, destinée à servir de base de script pour la ROM hack.

## Objectif
Écrire non seulement les grands dialogues, mais aussi :
- les entrées de zone ;
- les dialogues de PNJ utilitaires ;
- les scènes d'arène ;
- les révélations ;
- les variantes de progression ;
- les épilogues selon la route choisie.

## Convention
- Les noms de fichiers suivent la chronologie du jeu.
- Les répliques courtes de PNJ sont prévues pour être injectées dans des maps ou bâtiments.
- Les variantes optionnelles sont notées `VARIANTE`.
- Les pensées du joueur sont décrites en italique.

## Règle de ton
- Les gens normaux parlent normalement.
- Le langage soutenu ou corporate doit rester l'exception, pas la norme.
- Les habitants des bordures parlent concret, vécu, direct.
- Le rival doit sonner jeune, vif, naturel.
- Les personnages du pouvoir peuvent garder un ton plus froid, contrôlé ou administratif.

## Couverture
- `acte_1/` : départ, premier badge, premiers soupçons.
- `acte_2/` : bordure, dissidents, fracture morale.
- `acte_3/` : enquête, villes-charnières, Convoi 17.
- `acte_4/` : observatoire, confrontation, choix final, Ligue et Conseil 4.
- `annexes/` : PNJ récurrents, centres, boutiques, quêtes, dialogues de foule, épilogues complets.

## Usage recommandé
1. Utiliser ces fichiers comme base d'intégration événementielle.
2. Découper ensuite les répliques en messages conformes au moteur de la ROM hack.
3. Reporter les variables de choix dans les variantes déjà indiquées.
