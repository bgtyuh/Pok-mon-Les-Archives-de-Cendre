# Structure du Carnet d'Archive

## Rôle du système
Le Carnet d'Archive formalise la manière dont le joueur observe, recoupe et soigne la région. Il ne doit pas ressembler à un simple Pokédex décoré : chaque entrée relie un fait, une voix et une conséquence sociale.

## Catégories d'entrées
### 1. Lieux
Entrées centrées sur les espaces traversés, leur usage réel, leur atmosphère et ce qu'ils cachent. Elles servent à ancrer les scènes dans la géographie morale de Cendral.

### 2. Pokémon
Entrées sur des espèces ou individus observés dans un contexte précis : travail, entraide, stress, adaptation ou refus. Elles montrent comment les Pokémon portent la mémoire du monde autant que les humains.

### 3. Témoins
Entrées construites à partir de paroles, de gestes ou de silences de personnes qui ont vu, subi ou accompagné un événement. Elles servent à humaniser les archives et à éviter qu'une vérité ne devienne pure abstraction.

### 4. Archives
Entrées documentaires : registres, affiches, plans, bandes audio, formulaires, fragments de dossiers. Elles permettent de confronter la version officielle à des traces matérielles.

### 5. Contradictions
Entrées de synthèse où le Carnet juxtapose deux vérités incompatibles en apparence. Elles ne donnent pas immédiatement raison à un camp : elles apprennent au joueur à relever les écarts et à demander qui paie le prix du récit dominant.

### 6. Mémoriaux
Entrées liées aux lieux de deuil, gestes commémoratifs, plantations, objets conservés ou noms rétablis. Elles ne sont pas toutes monumentales : un banc gravé, une serre entretenue ou un atelier gardé intact peuvent servir de mémorial.

### 7. Fragments de Zygarde
Entrées rares liées à une réponse du vivant quand le joueur répare un équilibre local sans l'effacer. Elles ne récompensent pas la complétion pure, mais la cohérence entre observation, contradiction relevée et aide concrète apportée.

## Format recommandé d'une entrée
Chaque entrée doit idéalement contenir :
- **ID** : identifiant de suivi pour l'implémentation.
- **Titre affiché** : formulation lisible par le joueur.
- **Type** : automatique, optionnelle, contradiction, mémorial, fragment ou scène sensible.
- **Déclencheur** : scène, objet, interaction ou combinaison d'actions.
- **Résumé affiché** : texte court visible dans l'UI du Carnet.
- **Usage narratif** : ce que l'entrée débloque, nuance ou relie.

## Répartition par zone
Chaque grande zone reçoit un noyau fixe d'entrées afin que le Carnet raconte une enquête complète et non un amas de trouvailles disparates.

| Zone | Entrées automatiques | Entrées optionnelles | Contradiction majeure | Entrée liée à une scène sensible |
|---|---|---|---|---|
| Cendrebourg | 4 | 2 | 1 | 1 |
| Transit-sur-Rail | 4 | 2 | 1 | 1 |
| Bordelande | 4 | 2 | 1 | 1 |
| Verride | 4 | 2 | 1 | 1 |
| Noctisilo | 4 | 2 | 1 | 1 |
| Fluxia | 4 | 2 | 1 | 1 |
| Observatoire | 4 | 2 | 1 | 1 |

## Logique de distribution des catégories
Pour chaque zone, on recommande la structure suivante :
- **1 entrée de lieu automatique** pour le cadre vécu.
- **1 entrée Pokémon automatique** pour le partenaire ou l'espèce emblématique.
- **1 entrée témoin automatique** pour la voix humaine dominante.
- **1 entrée d'archive automatique** pour la trace matérielle locale.
- **2 entrées optionnelles** réparties selon la zone entre lieu, Pokémon, témoin ou archive.
- **1 contradiction majeure** rédigée dans le Carnet comme un recoupement actif.
- **1 entrée sensible** liée à une scène où la violence, le deuil, l'apaisement forcé ou l'exploitation du vivant doivent être traités sans sensationnalisme.

## Statut des catégories transversales
### Mémoriaux
Les mémoriaux s'accrochent surtout aux scènes sensibles et à certaines aides communautaires. Ils servent à montrer que documenter une zone ne suffit pas : il faut aussi reconnaître ce qui mérite d'être gardé publiquement.

### Fragments de Zygarde
Les fragments de Zygarde ne sont jamais déclenchés par une seule découverte. Ils apparaissent quand une zone réunit trois conditions :
1. un lieu correctement documenté ;
2. une contradiction clairement relevée ;
3. une réparation concrète ou un apaisement non imposé.

## Index de fichiers
- `entrees-lieux.md` : ancrage des espaces et deux premières entrées optionnelles selon les zones.
- `entrees-pokemon.md` : lecture écologique et morale des espèces associées à chaque zone.
- `entrees-temoins.md` : paroles, souvenirs et silences des habitants.
- `entrees-archives.md` : documents matériels et preuves administratives ou clandestines.
- `entrees-contradictions.md` : recoupements majeurs, scènes sensibles, points de bascule.
- `conditions-alliance.md` : traduction du Carnet en conditions d'accès à la Route de l'Alliance.
