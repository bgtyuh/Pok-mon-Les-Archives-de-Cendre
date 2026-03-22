# Les Jardins de suie

## Déclencheur
- Disponible après `SCN_CBG_EXIT`, lors d'un retour à **Cendrebourg** après l'obtention du badge de Transit-sur-Rail.
- En journée, une nouvelle interaction apparaît près des plates-bandes noircies derrière le laboratoire de Frêne.
- La quête démarre quand le joueur accepte d'aider **Maëlis**, l'horticultrice municipale, à sauver des cultures mémorielles qui ne poussent que dans une terre chargée en cendres anciennes.

## Prérequis
- Avoir parlé au moins une fois à Frêne après le badge de Transit-sur-Rail.
- Avoir consulté l'affiche locale sur les plantations commémoratives, ce qui ajoute une première note au Carnet.
- Disposer d'un arrosoir / kit de terrain remis gratuitement par Maëlis au début de la quête.

## Étapes précises
1. **Constater l'état des jardins** : inspecter trois parcelles de la zone arrière de Cendrebourg pour identifier les plantes qui survivent encore dans la suie.
2. **Recueillir un avis scientifique** : montrer à Frêne un échantillon de terre afin qu'elle confirme que la contamination n'est pas mortelle, mais qu'elle exige un entretien précis plutôt qu'un nettoyage total.
3. **Trouver des apports adaptés** : récupérer du compost minéral à la halte de la **Route Braisée** et des cendres tamisées auprès d'un ancien mineur de Cendrebourg.
4. **Choisir une méthode de restauration** :
   - soit nettoyer fortement les plates-bandes pour obtenir une repousse plus "propre" mais moins fidèle au lieu ;
   - soit stabiliser la suie et préserver les variétés locales, au prix d'un aspect plus rugueux.
5. **Replanter les parcelles** : arroser puis replacer trois espèces de baies / fleurs mémorielles dans le bon ordre indiqué par Maëlis.
6. **Présenter le jardin rouvert** : parler aux habitants venus voir le résultat et valider la version finale du jardin.

## Maps concernées
- **Cendrebourg** : jardin arrière, place, laboratoire de Frêne.
- **Route Braisée** : halte où récupérer le compost minéral.

## PNJ impliqués
- **Maëlis**, horticultrice municipale et porteuse de la quête.
- **Professeure Frêne**, qui confirme la lecture scientifique et mémorielle du sol.
- **Ancien mineur de Cendrebourg**, qui fournit les cendres tamisées et raconte l'usage ancien des jardins.
- **Voisine âgée**, qui commente la dimension commémorative du lieu une fois rouvert.

## Objets ou preuves à trouver
- **Échantillon de terre cendrée**.
- **Compost minéral de halte**.
- **Cendres tamisées de l'ancien terril**.
- **Plan de plantation mémorielle** annoté par Maëlis.

## Choix proposés au joueur
- **Nettoyer à fond** : solution plus acceptable pour l'Administration, mais qui gomme une partie de la mémoire du lieu.
- **Stabiliser sans effacer** : solution plus fidèle au thème du deuil assumé, soutenue par Maëlis et Frêne.
- Lors de la présentation finale, le joueur peut aussi choisir si la plaque du jardin parle d'"embellissement" ou de **jardin mémoriel**.

## Impact sur variables
- Validation de l'enquête locale : `LISTEN +1`.
- Aide concrète au quartier : `REPAIR +1`.
- Si le joueur choisit la plaque "jardin mémoriel" et la stabilisation sans effacer : `ZYGARDE +1`.
- Si le joueur impose un nettoyage intégral et un texte euphémisant : `REL_ADMIN +1`, sans gain de `ZYGARDE`.

## Impact sur Carnet
- Débloque une entrée **Mémorial** : `JRN_CBG_JARDINS_SUIE`.
- Débloque une entrée **Archive** : `JRN_CBG_PLAN_PLANTATION`.
- Si le joueur préserve la suie visible, ajoute une **Contradiction** sur la différence entre terrain "assaini" et terrain "habité".

## Impact sur dialogues locaux
- **Maëlis** passe d'un ton inquiet à un ton fier et plus combatif.
- La **voisine âgée** remercie le joueur d'avoir laissé un lieu où "on se souvient sans faire semblant" si la version mémorielle est choisie.
- En cas de nettoyage intégral, certains habitants trouvent le jardin beau mais "trop propre", ce qui crée une légère gêne dans les répliques de Cendrebourg.
- Frêne commente ensuite que le joueur a compris, ou non, la différence entre réparer et blanchir.

## Conséquence en post-game
- Le jardin reste visiblement transformé : nouvelles fleurs, plaque lisible, habitants présents autour des plates-bandes.
- En **route Alliance**, le lieu devient un petit espace de recueillement où Maëlis organise des ateliers avec des enfants.
- En **route Sceau**, le jardin est conservé mais présenté comme projet municipal exemplaire, avec une formulation plus institutionnelle.
- En **route Flamme**, la plaque peut être couverte de messages ajoutés par les habitants, montrant que le lieu a relancé la parole locale.
