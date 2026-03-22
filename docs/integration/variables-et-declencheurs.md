# Variables et déclencheurs

Ce document transforme les variables mentionnées dans `07_systemes/integration-gameplay.md` en règles d'implémentation concrètes pour le scénario, l'accès à l'Alliance et les variations de dialogues.

## Principes généraux
- Les variables narratives ne remplacent pas les flags de progression ; elles les colorent.
- La plupart des scènes consultent un **flag de progression** pour savoir si elles peuvent jouer, puis lisent une ou plusieurs **variables de posture** pour choisir leur variante.
- Les valeurs proposées ci-dessous supposent une échelle simple de `0` à `10` pour `REL_ADMIN`, `REL_DISS`, `LISTEN` et `REPAIR`, et de `0` à `5` pour `ZYGARDE`.
- Les montées / descentes doivent rester modérées ; une seule scène ne devrait pas verrouiller définitivement une route, sauf le choix final lui-même.

## Variables principales

### 1. `REL_ADMIN` — Confiance Administration

| Élément | Définition |
|---|---|
| Rôle | Mesure à quel point le joueur est perçu comme fiable, prudent ou compatible avec le maintien d'un cadre institutionnel. |
| Monte quand | Le joueur coopère avec des agents, écoute Orme ou Valce sans sabotage, passe les checkpoints sans provocation, accepte l'idée d'une stabilité à protéger. |
| Descend quand | Le joueur constate ou dénonce les abus d'apaisement, contredit frontalement l'Administration, privilégie les Dissidents ou expose trop vite les contradictions du système. |
| Seuils utiles | `>= 4` : Orme plus ouvert. `>= 6` : Valce parle au joueur comme à un interlocuteur sérieux. `>= 7` avec `REL_DISS <= 3` : route Sceau très naturellement disponible. |
| Scènes qui la consultent | `SCN_TSR_ORME`, `SCN_RPY_CHECKPOINT`, `SCN_FLX_VALCE`, `SCN_OBS_VALCE_ILYAN`, `SCN_FINAL_CHOICE`. |
| Scènes qui la modifient | `SCN_TSR_ORME`, `SCN_TSR_BADGE_1`, `SCN_TSR_TRACK_INCIDENT`, `SCN_RPY_CHECKPOINT`, `SCN_FTH_APAISEMENT`, `SCN_NOC_GUIDED_TOUR`, `SCN_NOC_NOX_CONFLICT`, `SCN_FLX_VALCE`, `SCN_C17_REVEAL`, `SCN_OBS_FRENE_UXIE`. |

### 2. `REL_DISS` — Confiance Dissidents

| Élément | Définition |
|---|---|
| Rôle | Mesure la proximité du joueur avec Ilyan, Eda et la critique active du récit officiel. |
| Monte quand | Le joueur aide les communautés de bordure, remet en cause les apaisements imposés, lit les archives censurées et soutient une vérité moins contrôlée. |
| Descend quand | Le joueur défend les protocoles, minimise la violence institutionnelle ou privilégie l'ordre sur l'écoute locale. |
| Seuils utiles | `>= 4` : Ilyan traite le joueur comme témoin crédible. `>= 6` : route Flamme fortement soutenue. `>= 5` avec `LISTEN` et `REPAIR` élevés : nourrit l'Alliance sans imposer la Flamme. |
| Scènes qui la consultent | `SCN_BDL_ILYAN`, `SCN_BDL_WORKMON`, `SCN_FTH_APAISEMENT`, `SCN_NOC_REGISTERS`, `SCN_OBS_VALCE_ILYAN`, `SCN_FINAL_CHOICE`. |
| Scènes qui la modifient | `SCN_TSR_TRACK_INCIDENT`, `SCN_BDL_ILYAN`, `SCN_BDL_WORKMON`, `SCN_FTH_APAISEMENT`, `SCN_NOC_REGISTERS`, `SCN_NOC_NOX_CONFLICT`, `SCN_FLX_ARCHIVES_NIGHT`, `SCN_C17_REVEAL`. |

### 3. `LISTEN` — Capacité d'écoute du joueur

| Élément | Définition |
|---|---|
| Rôle | Représente la manière dont le joueur documente, observe et laisse de la place aux témoignages plutôt qu'aux réponses immédiates. C'est la variable la plus liée au Carnet d'Archive. |
| Monte quand | Le joueur interagit avec les scènes d'observation, lit les plaques, consulte les archives, parle aux témoins jusqu'au bout, accomplit des objectifs de documentation. |
| Descend quand | Rarement ; seulement si une scène prévoit explicitement une réponse brutale qui court-circuite l'écoute. À défaut, elle stagne. |
| Seuils utiles | `>= 4` : plus de variantes de dialogue calmes. `>= 6` : condition centrale pour l'Alliance. `>= 8` : améliore les répliques de Frêne, Agathe et les archivistes. |
| Scènes qui la consultent | Presque toutes les scènes de révélation : `SCN_CBG_SQUARE`, `SCN_RBR_REST_STOP`, `SCN_TSR_ORME`, `SCN_BDL_EDA`, `SCN_VRD_AGATHE_WORKSHOP`, `SCN_FLX_MEMORIAL`, `SCN_FLX_ARCHIVES_NIGHT`, `SCN_OBS_VALCE_ILYAN`, `SCN_FINAL_CHOICE`. |
| Scènes qui la modifient | `SCN_CBG_SQUARE`, `SCN_CBG_LAB_STARTER`, `SCN_RBR_REST_STOP`, `SCN_RBR_INCIDENT`, `SCN_TSR_ORME`, `SCN_TSR_TRACK_INCIDENT`, `SCN_BDL_ARRIVAL`, `SCN_BDL_EDA`, `SCN_FTH_APAISEMENT`, `SCN_VRD_AGATHE_WORKSHOP`, `SCN_NOC_GUIDED_TOUR`, `SCN_NOC_REGISTERS`, `SCN_FLX_MEMORIAL`, `SCN_FLX_VALCE`, `SCN_FLX_ARCHIVES_NIGHT`, `SCN_C17_SITE`, `SCN_C17_REVEAL`, `SCN_OBS_TERMINALS`, `SCN_OBS_FRENE_UXIE`, `SCN_OBS_HEATRAN`. |

### 4. `REPAIR` — Indice de réparation locale

| Élément | Définition |
|---|---|
| Rôle | Mesure la capacité du joueur à produire du soin concret, situé et non purement idéologique. |
| Monte quand | Le joueur résout les problèmes sans punir les Pokémon épuisés, aide des lieux abîmés, valorise la restauration honnête et complète des communautés locales. |
| Descend quand | Le joueur agit de façon seulement punitive, ignore les besoins de terrain ou choisit des sorties qui aggravent les tensions locales. |
| Seuils utiles | `>= 3` : Eda fait davantage confiance. `>= 5` : l'Alliance devient crédible socialement. `>= 6` : Zygarde peut répondre si les autres conditions suivent. |
| Scènes qui la consultent | `SCN_BDL_EDA`, `SCN_BDL_WORKMON`, `SCN_VRD_AGATHE_WORKSHOP`, `SCN_VRD_BADGE_2`, `SCN_FLX_MEMORIAL`, `SCN_C17_REVEAL`, `SCN_OBS_ZYGARDE`, `SCN_FINAL_CHOICE`. |
| Scènes qui la modifient | `SCN_BDL_EDA`, `SCN_BDL_WORKMON`, `SCN_VRD_AGATHE_WORKSHOP`, `SCN_VRD_BADGE_2`, `SCN_NOC_REGISTERS` (éventuelle baisse si le joueur accepte la logique d'assignation), `SCN_FLX_MEMORIAL`, `SCN_C17_REVEAL`. |

### 5. `ZYGARDE` — Fragments de Zygarde obtenus

| Élément | Définition |
|---|---|
| Rôle | Sert de verrou narratif et écologique pour la route Alliance. Les fragments traduisent la capacité du joueur à réparer des liens plutôt qu'à seulement choisir un camp. |
| Monte quand | Le joueur complète des scènes / quêtes associées à la réparation du vivant, par exemple une version douce de `SCN_BDL_WORKMON`, des quêtes annexes comme `Ligne de secours 17`, `Classés compatibles` ou `Les Noms du Mémorial`. |
| Descend quand | Ne descend pas en général ; c'est un compteur cumulatif. |
| Seuils utiles | `>= 3` : premiers signes écologiques. `>= 4` : Frêne peut évoquer une réponse du vivant. `>= 5` : `SCN_OBS_ZYGARDE` et route Alliance pleinement déverrouillées, sous réserve des autres variables. |
| Scènes qui la consultent | `SCN_OBS_ZYGARDE`, `SCN_FINAL_CHOICE`, certains scripts de quêtes annexes et d'apparitions sauvages spéciales. |
| Scènes qui la modifient | Principalement les quêtes optionnelles et la validation de scènes de réparation importantes comme `SCN_BDL_WORKMON` ; l'apparition elle-même dans `SCN_OBS_ZYGARDE` peut fixer `ZYGARDE_FORME_AVAILABLE = 1`. |

## Flags de progression complémentaires

Ces flags ne remplacent pas les variables, mais sont nécessaires pour que le ROM hack reste déterministe :

| Flag | Usage |
|---|---|
| `BADGE_TRANSIT`, `BADGE_VERRIDE`, `BADGES` | Ouvrir arènes, ligue, blocs de dialogues post-badge. |
| `STAGE_ACTE_1` à `STAGE_ACTE_4` | Éviter les collisions entre scènes d'entrée et versions revisitées des maps. |
| `SCN_*` | Empêcher la rejouabilité involontaire d'une cinématique majeure. |
| `ROUTE_ALLIANCE_UNLOCK` | Permettre l'affichage de l'option Alliance dans le menu de choix final. |
| `ROUTE_FINAL` | Charger les bons PNJ, shops, textes et épilogues. |
| `HAS_JOURNAL` et `JOURNAL_*` | Gérer le Carnet d'Archive côté UI et côté triggers narratifs. |
| `RIVAL_AXIS` | Stocker l'inclinaison du rival : Administration, Dissidents ou équilibre difficile. |

## Seuils recommandés pour débloquer l'Alliance

L'Alliance doit demander une cohérence d'ensemble, pas un simple grind de points.

### Conditions minimales
- `LISTEN >= 6`
- `REPAIR >= 5`
- `ZYGARDE >= 5`
- `REL_ADMIN >= 3`
- `REL_DISS >= 3`
- `abs(REL_ADMIN - REL_DISS) <= 3`
- scènes vues : `SCN_FTH_APAISEMENT`, `SCN_NOC_REGISTERS`, `SCN_FLX_ARCHIVES_NIGHT`, `SCN_C17_REVEAL`, `SCN_OBS_HEATRAN`

### Interprétation
- `LISTEN` garantit que le joueur a vraiment documenté le monde.
- `REPAIR` garantit qu'il a aidé des lieux et des êtres concrets.
- `ZYGARDE` garantit la reconnaissance du vivant comme partenaire narratif.
- Des valeurs ni trop basses ni trop polarisées de `REL_ADMIN` et `REL_DISS` garantissent que le joueur comprend les torts partagés, condition explicitement formulée dans la matrice des fins.

### Pseudo-déclencheur recommandé

```text
if SCN_OBS_HEATRAN
  and LISTEN >= 6
  and REPAIR >= 5
  and ZYGARDE >= 5
  and REL_ADMIN >= 3
  and REL_DISS >= 3
  and abs(REL_ADMIN - REL_DISS) <= 3
  and SCN_FTH_APAISEMENT
  and SCN_NOC_REGISTERS
  and SCN_FLX_ARCHIVES_NIGHT
  and SCN_C17_REVEAL
then
  ROUTE_ALLIANCE_UNLOCK = 1
  enable SCN_OBS_ZYGARDE
else
  ROUTE_ALLIANCE_UNLOCK = 0
```

## Carte des scènes qui consultent / modifient les variables

| Scène | Consulte | Modifie |
|---|---|---|
| `SCN_TSR_ORME` | `LISTEN` | `REL_ADMIN`, `LISTEN` |
| `SCN_TSR_TRACK_INCIDENT` | `REL_ADMIN` pour variantes d'Orme | `REL_ADMIN`, `REL_DISS`, `LISTEN` |
| `SCN_BDL_EDA` | `LISTEN` | `REPAIR`, `LISTEN` |
| `SCN_BDL_ILYAN` | `REL_DISS` | `REL_DISS`, `RIVAL_AXIS` |
| `SCN_BDL_WORKMON` | `REPAIR`, `REL_DISS` | `REPAIR` ou `REL_DISS` selon résolution |
| `SCN_FTH_APAISEMENT` | `REL_ADMIN`, `REL_DISS` pour réactions | `REL_ADMIN`, `REL_DISS`, `LISTEN` |
| `SCN_VRD_AGATHE_WORKSHOP` | `LISTEN` | `LISTEN`, `REPAIR` |
| `SCN_NOC_REGISTERS` | `LISTEN`, `REL_ADMIN` | `REL_DISS`, `LISTEN`, baisse possible de `REPAIR` |
| `SCN_FLX_VALCE` | `REL_ADMIN`, `LISTEN` | `REL_ADMIN`, `LISTEN` |
| `SCN_FLX_ARCHIVES_NIGHT` | `LISTEN` | `REL_DISS`, `LISTEN` |
| `SCN_C17_REVEAL` | `LISTEN`, `REPAIR` | `REL_ADMIN`, `REL_DISS`, `LISTEN`, `REPAIR` |
| `SCN_OBS_VALCE_ILYAN` | `REL_ADMIN`, `REL_DISS`, `LISTEN` | généralement aucune, sauf mémorisation de posture |
| `SCN_OBS_ZYGARDE` | `LISTEN`, `REPAIR`, `ZYGARDE`, équilibre `REL_ADMIN/REL_DISS` | `ROUTE_ALLIANCE_UNLOCK`, `ZYGARDE_FORME_AVAILABLE` |
| `SCN_FINAL_CHOICE` | toutes les variables principales | `ROUTE_FINAL` |

## Recommandations de scripting
- Préférer une **fonction de service** qui applique les gains/pertes narratifs (`add_listen(1)`, `add_repair(1)`) plutôt que de modifier chaque variable en dur dans chaque script.
- Encapsuler les **seuils de route** dans un script commun au lieu de les recopier dans plusieurs maps.
- Journaliser les changements de variables dans le Carnet ou dans un debug overlay de développement, afin de vérifier que l'Alliance n'est ni trop facile ni impossible.
- Utiliser `REL_ADMIN` et `REL_DISS` surtout pour des **variantes de ton** ; les vrais verrous d'accès doivent rester portés par les flags de scène et les seuils listés ci-dessus.
