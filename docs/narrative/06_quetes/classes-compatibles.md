# Classés compatibles

## Déclencheur
- Disponible à **Noctisilo** après `SCN_NOC_REGISTERS`.
- L'**assistante vétérinaire** du centre de classification arrête le joueur dans un couloir de service pour demander de l'aide sur des dossiers de Pokémon assignés à des fonctions de régulation.
- La quête s'ouvre quand le joueur accepte d'examiner des cas où la mention "compatible" masque en réalité une contrainte institutionnelle.

## Prérequis
- Avoir visité la salle des registres.
- Avoir accès aux serres et au secteur vétérinaire de Noctisilo.
- Avoir parlé au moins une fois au doyen Nox, afin que la situation soit comprise comme un problème systémique et non un incident isolé.

## Étapes précises
1. **Recevoir trois dossiers litigieux** : un Magnéton de maintenance, un Leveinard de soin nocturne et un Caninos affecté à la surveillance thermique.
2. **Observer les Pokémon sur poste** : repérer leurs réactions réelles dans les serres, le laboratoire et les couloirs de régulation.
3. **Réunir des preuves** : comparer les registres officiels aux notes de fatigue de l'assistante vétérinaire.
4. **Consulter les parties prenantes** :
   - parler au chercheur junior, qui défend la logique d'efficacité ;
   - parler à l'assistante, qui veut des statuts plus vivables ;
   - éventuellement confronter Nox avec les écarts observés.
5. **Choisir une résolution par dossier** :
   - maintenir l'assignation ;
   - libérer totalement le Pokémon de la fonction ;
   - négocier un **statut hybride** avec rotation, soin et consentement observé.
6. **Mettre à jour les registres** : signer ou falsifier les nouveaux statuts avec l'aide de l'assistante.
7. **Vérifier l'effet sur le terrain** : revisiter les serres et couloirs pour constater comment les équipes et Pokémon vivent le changement.

## Maps concernées
- **Noctisilo** : salle des registres, serres, laboratoire, couloirs de régulation, secteur vétérinaire.

## PNJ impliqués
- **Assistante vétérinaire**, donneuse de quête et pivot moral.
- **Doyen Nox**, représentant de la logique technocratique.
- **Chercheur junior**, défenseur des classements par compatibilité.
- **Personnel des serres**, témoin des conditions de travail réelles.
- Trois **Pokémon concernés** mis en scène comme individus observables et non simples ressources.

## Objets ou preuves à trouver
- **Dossiers de compatibilité** de trois Pokémon.
- **Notes de fatigue vétérinaire**.
- **Formulaire de rotation des tâches**.
- **Clé d'accès au couloir de régulation**.
- **Relevé thermique** montrant que certains pics étaient dus à un équipement défectueux plutôt qu'au refus d'un Pokémon.

## Choix proposés au joueur
- **Maintenir le système** : peu de perturbation institutionnelle, mais validation implicite du tri.
- **Saboter / libérer sans accord** : geste radical, fort pour les Dissidents, mais instable à court terme.
- **Négocier des statuts hybrides** : option la plus longue, alignée avec l'idée de réparation lente et concrète.
- Pour chaque dossier, le joueur peut aussi décider d'inscrire ou non les observations réelles dans le registre officiel.

## Impact sur variables
- Observer puis documenter les écarts : `LISTEN +1`.
- Si le joueur valide majoritairement les **statuts hybrides** : `REPAIR +1` et `ZYGARDE +1`.
- Si le joueur libère les Pokémon contre l'avis de Nox : `REL_DISS +1`, `REL_ADMIN -1`.
- Si le joueur confirme les assignations sans correction : `REL_ADMIN +1`, avec baisse possible de `REPAIR -1`.

## Impact sur Carnet
- Débloque une entrée **Pokémon** : `JRN_NOC_POKEMON_CLASSES`.
- Débloque une entrée **Archive** : `JRN_NOC_REGISTRES_COMPATIBILITE`.
- Débloque une **Contradiction** si le joueur consigne l'écart entre compatibilité administrative et bien-être observé.
- Peut créer une entrée **Fragment de Zygarde** si au moins deux dossiers obtiennent un statut hybride.

## Impact sur dialogues locaux
- Les **serres** changent visiblement : certains Pokémon ne sont plus à leur poste fixe, le personnel commente les nouvelles rotations.
- L'**assistante vétérinaire** devient plus ouverte et moins fataliste si le joueur l'aide à inscrire les corrections dans les registres.
- **Nox** adapte ses répliques : mépris froid en cas de sabotage, respect prudent en cas de compromis solide.
- Les chercheurs et employés débattent désormais de la notion de compatibilité ; le monde social de Noctisilo bouge réellement après la quête.

## Conséquence en post-game
- À Noctisilo, les postes de régulation et les équipes de soin reflètent le choix du joueur : maintien inchangé, vide conflictuel ou organisation hybride visible.
- En **route Alliance**, la réforme hybride devient un cas cité comme modèle imparfait mais reproductible.
- En **route Sceau**, les statuts hybrides peuvent survivre sous une forme très encadrée si le joueur les a officialisés correctement.
- En **route Flamme**, la quête nourrit des dialogues sur la fin du classement des corps, avec des employés qui osent enfin contester les affectations.
