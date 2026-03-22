# Checklist d'intégration

Cette checklist sert à convertir une scène écrite en événement de ROM hack sans ambiguïté. Elle peut être suivie scène par scène, puis validée par map et enfin par acte.

## 1. Cadrage de la scène
- [ ] Assigner un **ID unique** au format `SCN_ZONE_NOM`.
- [ ] Identifier la **map exacte**, la coordonnée ou la zone de déclenchement, et le type de trigger : entrée map, interaction objet, interaction PNJ, pas sur case, fin de combat, cutscene forcée.
- [ ] Définir le **pré-requis minimal** : badge, flag précédent, heure, présence du rival, option de quête, route finale, condition de revisite.
- [ ] Définir si la scène est **bloquante**, **optionnelle**, **rejouable**, ou **one-shot**.

## 2. Casting et état des PNJ
- [ ] Lister tous les **PNJ présents** dans la scène, y compris les Pokémon scriptés et les NPC d'ambiance indispensables.
- [ ] Pour chaque PNJ, préciser : sprite, orientation initiale, position, mouvement autorisé, disparition/apparition avant et après scène.
- [ ] Définir le **set de dialogues avant scène**, **pendant scène**, **après scène**, et **post-revisite**.
- [ ] Vérifier si le **rival**, **Frêne**, **Orme**, **Eda**, **Ilyan**, **Valce** ou **Agathe** ont besoin d'un état spécifique dérivé de `RIVAL_AXIS`, `REL_ADMIN`, `REL_DISS`, `LISTEN` ou `REPAIR`.

## 3. Déclencheurs et verrous
- [ ] Définir le **flag d'entrée** qui autorise le lancement.
- [ ] Définir le **flag de complétion** qui empêche une répétition involontaire.
- [ ] Définir les **verrous de circulation** pendant la scène : blocage de porte, freeze des inputs, collision temporaire, warp désactivé, follower imposé.
- [ ] Définir les **conditions d'abandon / reprise** si le joueur quitte la map ou perd un combat au milieu d'une séquence.
- [ ] Si la scène a plusieurs variantes, lister l'ordre de priorité : progression > route finale > variable de relation > simple variante cosmétique.

## 4. Contenu narratif à convertir
- [ ] Découper la scène en **beats** clairs : entrée, mise en place, ligne de tension, interaction, résolution, sortie.
- [ ] Identifier toutes les **répliques obligatoires** et toutes les **répliques substituables** selon variables.
- [ ] Marquer les **temps de pause**, déplacements caméra, SFX, fondus, emotes, animations Pokémon et changements de musique.
- [ ] Définir les **interactions annexes** : panneaux, plaques, objets lisibles, objets ramassables, dialogues secondaires qui renforcent la scène.
- [ ] Si un combat est intégré, définir : type de combat, dresseur, équipe, issue obligatoire, scripts en cas de victoire ou de défaite.

## 5. Variables et Carnet d'Archive
- [ ] Lister toutes les **variables consultées** par la scène (`REL_ADMIN`, `REL_DISS`, `LISTEN`, `REPAIR`, `ZYGARDE`, flags de badges, etc.).
- [ ] Lister toutes les **variables modifiées** et leur amplitude exacte (`+1`, `-1`, flag booléen, compteur). 
- [ ] Vérifier qu'aucune variable critique n'est modifiée deux fois par le même chemin de scène.
- [ ] Définir les **entrées du Carnet** débloquées : titre, catégorie, condition, texte résumé affiché au joueur.
- [ ] Définir si la scène doit ajouter une **annotation alternative** selon la route finale ou selon une résolution pacifique / agressive.

## 6. Intégration map-level
- [ ] Mettre à jour le tableau de la map concernée dans `map-by-map.md` si la scène modifie des présences ou des scripts de revisite.
- [ ] Définir les **NPC swaps** après badge, après Bordelande, après Convoi 17 et en épilogue si la map est concernée.
- [ ] Vérifier les **warps**, transitions et points de retour pour éviter les soft-locks après cutscene.
- [ ] Vérifier que les versions alternatives de la map ne réintroduisent pas d'anciens triggers déjà consommés.

## 7. Route finale et variantes sociales
- [ ] Définir si la scène existe en **tronc commun** ou seulement pour `ROUTE_FINAL = 1/2/3`.
- [ ] Si la scène précède le choix final, définir quelles lignes changent selon les **routes déjà pressenties** par les variables.
- [ ] Si la scène appartient à l'épilogue, prévoir un **set de dialogues complet par route finale**.
- [ ] Vérifier l'impact de la scène sur le **rival** et sur les **PNJ récurrents**, afin d'éviter des contradictions de ton lors des revisites.

## 8. QA narrative et technique
- [ ] Tester le chemin **minimal** de progression qui déclenche la scène.
- [ ] Tester au moins un chemin à **forte confiance Administration**, un à **forte confiance Dissidents** et un chemin **Alliance potentielle**.
- [ ] Tester la revisite immédiate de la map après la scène.
- [ ] Tester la revisite tardive après Bordelande, après Convoi 17 et en épilogue si applicable.
- [ ] Vérifier le comportement après **sauvegarde / chargement**, **défaite**, **fuite de map** et **inventaire plein** si la scène donne un objet.
- [ ] Vérifier que le Carnet affiche bien la ou les nouvelles entrées et que les flags correspondent.

## 9. Définition de terminé
Une scène est considérée comme intégrée seulement si :
- [ ] son ID existe dans `scene-flags.md` ;
- [ ] sa map et ses versions de revisite sont décrites dans `map-by-map.md` ;
- [ ] ses modifications de variables sont décrites dans `variables-et-declencheurs.md` ;
- [ ] son script en jeu a été testé sur au moins les trois profils narratifs principaux : Administration, Dissidents, Alliance ;
- [ ] aucun PNJ ou trigger ne reste dans un état contradictoire après résolution.

## Modèle ultra-court par scène

```text
ID:
Map:
Trigger:
Pré-requis:
PNJ impliqués:
Beat 1 / Beat 2 / Beat 3:
Combat éventuel:
Variables consultées:
Variables modifiées:
Entrées Carnet:
Flags posés:
NPC swaps après scène:
Variantes Sceau / Flamme / Alliance:
Tests à exécuter:
```
