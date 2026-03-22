# Les Objets sans légende

## Déclencheur
- Disponible à **Verride** après `SCN_VRD_AGATHE_WORKSHOP`.
- La **conservatrice du musée** interpelle le joueur devant une réserve temporairement ouverte au public.
- La quête commence quand le joueur accepte d'aider à documenter des objets retrouvés sans provenance certaine après l'Année Grise.

## Prérequis
- Avoir terminé la scène d'atelier d'Agathe, afin de comprendre l'éthique locale de la restauration.
- Avoir au moins `LISTEN >= 3`, ou avoir consulté suffisamment d'archives pour que la conservatrice reconnaisse le joueur comme témoin sérieux.
- Posséder l'autorisation d'accès à la réserve, remise par la conservatrice après le premier dialogue.

## Étapes précises
1. **Examiner trois objets incomplets** : un bracelet brûlé, une plaque d'inventaire tordue et une boîte à musique partiellement fondue.
2. **Croiser les traces** : comparer les marques relevées dans la réserve avec des notes présentes à l'atelier d'Agathe et une vieille liste d'évacuation conservée à la mairie de Verride.
3. **Interroger deux témoins locaux** :
   - un restaurateur adjoint qui veut rassurer le public ;
   - une survivante âgée qui préfère une légende incomplète mais honnête.
4. **Rédiger les cartels** : pour chaque objet, choisir entre une formulation prudente, une hypothèse assumée ou un récit lissé pour le public.
5. **Valider l'accrochage** : revenir au musée quand la petite salle est rouverte et écouter les réactions des visiteurs.

## Maps concernées
- **Verride** : musée, atelier d'Agathe, mairie / salle d'archives civiles.

## PNJ impliqués
- **Conservatrice de Verride**, donneuse de quête.
- **Agathe Verre**, qui défend la restauration honnête des fissures.
- **Restaurateur adjoint**, partisan d'un discours plus rassurant.
- **Survivante âgée**, témoin des évacuations et source morale de la quête.
- **Visiteurs du musée**, qui réagissent aux cartels choisis.

## Objets ou preuves à trouver
- **Bracelet brûlé sans nom**.
- **Plaque d'inventaire tordue**.
- **Boîte à musique fondue**.
- **Liste d'évacuation incomplète**.
- **Carnet d'atelier d'Agathe** avec notes sur les réparations visibles.

## Choix proposés au joueur
- **Cartel honnête** : admettre les lacunes, les hypothèses et les zones de doute.
- **Cartel interprétatif** : proposer une histoire plausible mais clairement présentée comme reconstitution.
- **Cartel lissé** : produire un texte "propre" qui rassure le visiteur au détriment de la vérité.
- Le choix peut être homogène ou mixte selon l'objet, ce qui permet un résultat nuancé.

## Impact sur variables
- Documentation approfondie : `LISTEN +1`.
- Si la majorité des cartels reste honnête ou prudente : `REPAIR +1`, car le musée devient un lieu de réparation symbolique crédible.
- Si le joueur privilégie les textes lissés : `REL_ADMIN +1` et `REL_DISS -1` sur une ligne de dialogue, sans gain de `REPAIR`.
- Si au moins deux objets gardent leur incertitude visible : gain conditionnel de `ZYGARDE +1`, car la quête rejoint une logique d'équilibre sans effacement.

## Impact sur Carnet
- Débloque une entrée **Archive** : `JRN_VRD_OBJETS_SANS_LEGENDE`.
- Débloque une entrée **Témoin** : `JRN_VRD_SURVIVANTE_RESERVE`.
- Ajoute une **Contradiction** sur l'écart entre conservation muséale et récit public si le joueur compare les témoignages avant de rédiger les cartels.

## Impact sur dialogues locaux
- Les **visiteurs du musée** commentent directement les cartels sélectionnés ; certains remercient le musée d'avouer ses trous, d'autres trouvent cela inconfortable.
- **Agathe** approuve un cartel qui montre la fissure comme partie de l'histoire ; elle se montre plus froide si le joueur choisit surtout le lissage.
- La **conservatrice** gagne en assurance si le joueur soutient une ligne honnête ; sinon, elle reste satisfaite publiquement mais laisse percer un doute privé.
- En post-réouverture, la petite salle du musée change vraiment de ton selon les textes visibles.

## Conséquence en post-game
- La salle d'exposition reste modifiée avec les cartels choisis par le joueur.
- En **route Alliance**, la salle devient un espace de médiation où les visiteurs peuvent laisser des annotations publiques.
- En **route Sceau**, les cartels honnêtes peuvent être accompagnés d'un cadre administratif plus prudent, mais ils ne disparaissent pas si la quête a été menée jusqu'au bout.
- En **route Flamme**, des habitants utilisent la salle comme point de départ de discussions plus dures sur les objets encore invisibilisés.
