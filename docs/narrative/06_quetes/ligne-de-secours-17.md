# Ligne de secours 17

## Déclencheur
- Disponible après la première visite du site du **Convoi 17** et après les révélations majeures sur les rails secondaires.
- **Orme** propose au joueur de l'aider à reconstituer une ancienne ligne de secours oubliée dans les documents publics.
- La quête se débloque pleinement entre **Transit-sur-Rail**, **Bordelande** et la zone du **Convoi 17**.

## Prérequis
- Avoir vu `SCN_C17_SITE`.
- Avoir parlé à Orme après `SCN_C17_REVEAL`.
- Avoir accès aux rails secondaires et à Bordelande revisitable.

## Étapes précises
1. **Recevoir la carte tronquée** : Orme remet un plan partiel de la ligne 17 avec plusieurs segments manquants.
2. **Inspecter les rails secondaires de Transit-sur-Rail** : relever des numéros de traverses et une balise de signalisation condamnée.
3. **Collecter des témoignages à Bordelande** : parler à Eda, à une ancienne contrôleuse déplacée et à un manutentionnaire qui se souvient des convois de secours.
4. **Retrouver des fragments matériels** : récupérer une plaque `L17`, une sacoche de secours et une bobine radio endommagée sur trois maps différentes.
5. **Recouper les éléments** : utiliser un panneau d'affichage en gare pour replacer les fragments de trajet dans le bon ordre.
6. **Décider quoi faire de la reconstitution** :
   - remettre la ligne complète à Orme pour une transmission interne ;
   - en partager une copie à Eda pour qu'elle serve de preuve communautaire ;
   - produire une double version, plus difficile mais idéale pour l'Alliance.
7. **Assister à la réouverture symbolique** : une petite cérémonie ou un marquage mémoriel est installé près d'un quai secondaire.

## Maps concernées
- **Transit-sur-Rail** : gare principale, rails secondaires, panneau d'affichage technique.
- **Bordelande** : brasero central, zone des manutentions, maison de l'ancienne contrôleuse.
- **Convoi 17** : site de déraillement et débris périphériques.

## PNJ impliqués
- **Capitaine Orme**, qui lance l'enquête et porte la mémoire logistique de la quête.
- **Eda**, qui insiste sur la dimension humaine du trajet.
- **Ancienne contrôleuse**, témoin déplacé des lignes de secours.
- **Manutentionnaire de Bordelande**, mémoire pratique des convois.
- **Professeure Frêne**, optionnellement consultée pour authentifier la bobine radio.

## Objets ou preuves à trouver
- **Carte tronquée de la ligne 17**.
- **Plaque métallique `L17`**.
- **Sacoche de secours** marquée d'un ancien sceau ferroviaire.
- **Bobine radio endommagée** contenant un appel incomplet.
- **Balise de signalisation condamnée** à photographier / noter dans le Carnet.

## Choix proposés au joueur
- **Transmission interne à Orme** : privilégie une réforme depuis l'intérieur.
- **Copie communautaire pour Eda** : renforce la circulation horizontale de la mémoire.
- **Double archivage** : demande plus d'étapes, mais crée la version la plus réparatrice et la plus crédible pour l'Alliance.
- Le joueur choisit aussi si le quai secondaire reçoit une simple plaque technique ou un **marquage nominatif** dédié aux secouristes.

## Impact sur variables
- Reconstitution documentaire : `LISTEN +1`.
- Réparation concrète d'une mémoire collective : `REPAIR +1`.
- Si le joueur partage la preuve avec Eda : `REL_DISS +1`.
- Si le joueur passe uniquement par Orme : `REL_ADMIN +1`.
- Si le joueur réussit le double archivage : `ZYGARDE +1` et neutralité maintenue entre `REL_ADMIN` / `REL_DISS`.

## Impact sur Carnet
- Débloque une entrée **Archive** : `JRN_C17_LIGNE_SECOURS`.
- Débloque une entrée **Témoin** : `JRN_BDL_ANCIENNE_CONTROLEUSE`.
- Débloque une entrée **Mémorial** si le joueur choisit le marquage nominatif au quai secondaire.
- Nourrit directement les conditions de lecture du Convoi 17 et de la Route de l'Alliance.

## Impact sur dialogues locaux
- À **Transit-sur-Rail**, Orme et plusieurs voyageurs commentent désormais le quai secondaire au lieu de l'ignorer.
- À **Bordelande**, Eda et les habitants cessent de parler du convoi comme d'une rumeur lointaine si la preuve est partagée publiquement.
- La présence d'une plaque ou d'un marquage change les lignes de fond des manutentionnaires et de l'annonce publique en gare.
- En cas de solution purement interne, certains habitants reconnaissent l'effort mais regrettent que "ça reste encore entre gens autorisés".

## Conséquence en post-game
- Le quai secondaire de Transit-sur-Rail reste physiquement modifié : plaque, ruban d'accès, ou petit espace de mémoire selon le choix final.
- En **route Alliance**, la ligne 17 devient un exemple de mémoire partagée entre institution et habitants.
- En **route Sceau**, la ligne est reconnue officiellement mais présentée avec plus de prudence et moins de noms propres.
- En **route Flamme**, le quai secondaire attire davantage de visiteurs et de prises de parole spontanées sur les disparus et les secouristes.
