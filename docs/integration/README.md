# Docs integration

Ce dossier contient le pont entre l'ecriture narrative et l'implementation ROM.

## A quoi ca sert

- Traduire une scene ecrite en scripts jouables.
- Garder une trace claire des flags, variables, triggers et dependances.
- Eviter les incoherences entre maps, dialogues, quetes et progression.

## Fichiers principaux

- `checklist-integration.md` : definition de "pret a integrer" scene par scene.
- `map-by-map.md` : etat des maps, swaps PNJ, triggers, revisites.
- `scene-flags.md` : inventaire des scenes et flags associes.
- `variables-et-declencheurs.md` : variables, compteurs, conditions, impacts.
- `scene-index.md` : tableau de suivi scene -> implementation.
- `test-matrix.md` : cas de test narratifs/techniques a executer.

## Regle simple

Si un element touche le moteur du jeu (script, flag, map, trigger, test), il va ici.
Si un element touche le fond narratif (histoire, ton, dialogues), il reste dans `../narrative/`.

