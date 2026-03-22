# Les Noms du Mémorial

## Déclencheur
- Disponible à **Fluxia** après `SCN_FLX_MEMORIAL` et avant ou juste après `SCN_FLX_ARCHIVES_NIGHT`.
- Une **bénévole du mémorial** explique au joueur que le monument principal n'affiche que des chiffres et des catégories, jamais les noms des morts ni des disparus.
- La quête commence quand le joueur accepte d'aider à vérifier des identités avant une mise à jour publique du mémorial.

## Prérequis
- Avoir accès au mémorial de Fluxia et aux archives publiques.
- Avoir consulté au moins un document lié aux pertes de l'Année Grise.
- Idéalement, avoir `LISTEN >= 4`, afin que la bénévole confie au joueur des dossiers incomplets sensibles.

## Étapes précises
1. **Recevoir trois dossiers anonymisés** : chaque dossier ne contient qu'un numéro, un lieu d'origine et une mention administrative partielle.
2. **Chercher les noms manquants** : croiser les archives publiques de Fluxia avec des témoignages d'une fleuriste, d'un archiviste de nuit et d'une survivante venue se recueillir.
3. **Retrouver des preuves de correspondance** : comparer signatures, initiales gravées et un ruban de deuil conservé dans un tiroir du mémorial.
4. **Décider du degré de publication** :
   - afficher le nom complet ;
   - afficher le prénom seul avec accord de la famille ;
   - conserver l'anonymat si la preuve reste trop faible.
5. **Choisir la forme du mémorial** : garder la dalle chiffrée intacte avec un addendum discret, ou ajouter un panneau latéral où les noms reviennent à hauteur humaine.
6. **Assister à la mise à jour publique** : voir comment visiteurs, proches et personnel réagissent à l'apparition des noms.

## Maps concernées
- **Fluxia** : mémorial, archives publiques, aile administrative attenante.
- **Archives nocturnes de Fluxia** : consultation optionnelle pour consolider une identité difficile.

## PNJ impliqués
- **Bénévole du mémorial**, donneuse de quête.
- **Archiviste de jour**, prudent et formaliste.
- **Archiviste de nuit**, plus audacieux dans l'accès aux traces oubliées.
- **Fleuriste du mémorial**, gardienne des gestes de deuil concrets.
- **Survivante venue se recueillir**, témoin central pour un des noms retrouvés.
- **Professeure Frêne**, présente dans la scène secrète si la quête est pleinement accomplie.

## Objets ou preuves à trouver
- **Dossiers anonymisés du mémorial**.
- **Registre de condoléances incomplet**.
- **Ruban de deuil brodé d'initiales**.
- **Fragment d'inscription gravée** récupéré derrière une plaque.
- **Autorisation familiale partielle** pour l'un des noms.

## Choix proposés au joueur
- **Nommer pleinement** quand les preuves sont suffisantes.
- **Nommer partiellement** pour respecter l'incertitude ou la volonté d'une famille.
- **Maintenir l'anonymat** si le doute demeure.
- **Modifier le monument** avec un panneau latéral visible, ou conserver un ajout discret pour ne pas brusquer l'ordre cérémoniel de Fluxia.

## Impact sur variables
- Travail de recoupement : `LISTEN +1`.
- Réintégration publique des morts dans la mémoire commune : `REPAIR +1`.
- Si le joueur ajoute un panneau latéral visible et justifie les noms avec preuves solides : `ZYGARDE +1`.
- Si le joueur reste sur une solution très discrète : `REL_ADMIN +1`.
- Si le joueur pousse plusieurs noms malgré des preuves fragiles : `REL_DISS +1`, mais certains dialogues soulignent le risque d'erreur.

## Impact sur Carnet
- Débloque une entrée **Mémorial** : `JRN_FLX_NOMS_MEMORIAL`.
- Débloque une entrée **Témoin** : `JRN_FLX_SURVIVANTE_MEMORIAL`.
- Débloque une **Contradiction** entre comptabilité des pertes et mémoire des personnes nommées.
- La réussite complète prépare la scène secrète avec Frêne et nourrit les conditions émotionnelles de la Route de l'Alliance.

## Impact sur dialogues locaux
- Les visiteurs du **mémorial de Fluxia** ne parlent plus seulement de chiffres : ils réagissent aux noms, s'arrêtent, corrigent, remercient ou contestent.
- La **bénévole** gagne en assurance et cesse d'utiliser le mot "proprement" comme synonyme de silence.
- Les **archivistes** ajustent leur posture : l'un admet qu'un mémorial doit redevenir lisible humainement, l'autre se sent confirmé dans son travail de récupération des traces.
- Le lieu lui-même change d'ambiance, avec plus de recueillement actif et moins de circulation muette.

## Conséquence en post-game
- Le mémorial reste visiblement modifié : noms affichés, panneau ajouté ou addendum discret selon le choix du joueur.
- Une **scène secrète avec Frêne** se déclenche si au moins deux identités sont rétablies avec des preuves solides ; elle parle alors de ce que nommer change dans la manière d'habiter l'après-catastrophe.
- En **route Alliance**, le mémorial devient un espace de lecture publique et de réouverture graduelle des dossiers.
- En **route Sceau**, les noms peuvent rester mais sous un encadrement cérémoniel strict.
- En **route Flamme**, le mémorial devient un point de rassemblement plus vivant, avec habitants et proches qui ajoutent leurs propres traces.
