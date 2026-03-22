# AGENTS.md - rom/pokeemerald-expansion/data/scripts

## Scope

Ce fichier s'applique a `rom/pokeemerald-expansion/data/scripts/`.

## Quand toucher ce dossier

Utiliser `data/scripts/` pour:
- logique globale transversale;
- scripts partageables entre maps;
- initialisation systemique (new game, reset, etc.).

Pour une scene locale de map, preferer `data/maps/<Map>/scripts.inc`.

## Regles de securite

- Eviter de centraliser trop de logique narrative ici si elle peut rester locale a la map.
- Toute modification d'init/reset global peut casser la progression partout.
- Si un script global modifie des flags narratifs, documenter immediatement l'impact.

## Point critique connu

`EventScript_ResetAllMapFlags` (appele au New Game) peut impacter des etats de progression.
Avant d'ajouter/supprimer des `setflag` dans ce flux:
- verifier les scenes custom de Cendrebourg;
- verifier les etats `*_DONE` et vars de progression;
- tester nouvelle partie + save/load.

## Definition of done pour modif globale

1. Build OK.
2. Nouvelle partie OK.
3. Pas de reset involontaire de flags narratifs custom.
4. `docs/integration/` mis a jour (flags/vars/test matrix).

