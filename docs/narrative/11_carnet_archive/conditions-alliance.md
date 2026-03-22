# Conditions de déblocage de la Route de l'Alliance

## Principe directeur
La Route de l'Alliance ne doit pas s'ouvrir parce que le joueur a rempli un compteur abstrait. Elle doit s'ouvrir parce que le Carnet prouve une compétence politique précise :
- documenter plusieurs réalités locales ;
- relever des contradictions sans réduire le monde à un seul coupable ;
- apporter des aides concrètes que les communautés reconnaissent ;
- laisser apparaître une réponse du vivant, symbolisée par Zygarde.

## Ce que le Carnet doit démontrer
Le Carnet doit montrer trois formes de crédibilité à la fois.

### 1. Crédibilité territoriale
Le joueur doit avoir documenté des lieux dans des zones de nature différente.

**Exigence recommandée** :
- au moins **un lieu documenté dans une zone de départ** : Cendrebourg ou Transit-sur-Rail ;
- au moins **deux lieux documentés dans des zones de fracture** : Bordelande, Verride ou Noctisilo ;
- au moins **un lieu documenté dans une zone de pouvoir** : Fluxia ou Observatoire.

**Entrées compatibles** :
- Cendrebourg : `JOURNAL_CBG_VERGERS_SUR_CENDRE`, `JOURNAL_CBG_COUR_DECOLE_MURALE` ;
- Transit-sur-Rail : `JOURNAL_TSR_GARE_A_SENS_UNIQUE`, `JOURNAL_TSR_PASSERELLE_DES_RETARDES` ;
- Bordelande : `JOURNAL_BDL_QUARTIERS_RACCOMMODES`, `JOURNAL_BDL_SERRE_COMMUNE` ;
- Verride : `JOURNAL_VRD_ATELIERS_FISSURES`, `JOURNAL_VRD_COUR_INTERIEURE_SOUFFLEE` ;
- Noctisilo : `JOURNAL_NOC_SERRES_DE_COMPATIBILITE`, `JOURNAL_NOC_BASSIN_DESSAI_CREPUSCULE` ;
- Fluxia : `JOURNAL_FLX_PLACES_SANS_ANGLES`, `JOURNAL_FLX_JARDIN_DES_NOMS_RETENUS` ;
- Observatoire : `JOURNAL_OBS_COUPOLE_DESACTIVE`, `JOURNAL_OBS_BALCON_DES_VENTS`.

### 2. Crédibilité critique
Le joueur doit avoir identifié des contradictions qui répartissent les responsabilités entre plusieurs couches du monde : foyer d'origine, infrastructure, bordure, recherche, centre politique, site fondateur.

**Exigence recommandée** :
- au moins **trois contradictions majeures**, issues de **trois zones différentes** ;
- parmi elles, au moins **une contradiction liée à une institution centrale** (`Fluxia` ou `Observatoire`) ;
- et au moins **une contradiction liée à une zone vécue par les communautés** (`Cendrebourg`, `Transit-sur-Rail`, `Bordelande`, `Verride` ou `Noctisilo`).

**Entrées compatibles** :
- `JOURNAL_CBG_CONTRADICTION_VILLAGE_PAISIBLE`
- `JOURNAL_TSR_CONTRADICTION_INCIDENT_NEUTRALISE`
- `JOURNAL_BDL_CONTRADICTION_ZONE_SACRIFIEE_VIVANTE`
- `JOURNAL_VRD_CONTRADICTION_RESTAURATION_OU_EFFACEMENT`
- `JOURNAL_NOC_CONTRADICTION_SOIN_OU_TRI`
- `JOURNAL_FLX_CONTRADICTION_CAPITALE_TRANSPARENTE`
- `JOURNAL_OBS_CONTRADICTION_URGENCE_DEVENUE_REGNE`

### 3. Crédibilité relationnelle
Le joueur doit avoir aidé des personnes et des Pokémon d'une manière que le Carnet peut formuler comme un pacte local, pas comme une victoire tactique.

**Exigence recommandée** : accomplir au moins **trois aides concrètes**, dont :
- **une aide à une communauté humaine** ;
- **une aide à un Pokémon ou à un groupe d'espèces surexploitées** ;
- **une aide qui restaure publiquement une mémoire ou une provenance**.

**Entrées compatibles par type d'aide** :
- **Communautés humaines** : `JOURNAL_BDL_SERRE_COMMUNE`, `JOURNAL_BDL_ARCHIVE_PACTE_SERRE_COMMUNE`, `JOURNAL_TSR_TEMOIN_CONTROLEUSE_QUAI_C` ;
- **Pokémon / vivant** : `JOURNAL_BDL_POKEMON_DE_TRAVAIL_ESSOUFFLE`, `JOURNAL_NOC_SUJET_REFUSE_LE_BASSIN`, `JOURNAL_TSR_POKEMON_DE_SERVICE_SYNCOPE` ;
- **Mémoire / provenance restaurée** : `JOURNAL_VRD_SCENE_SENSIBLE_OBJET_RECONNU`, `JOURNAL_FLX_SCENE_SENSIBLE_NOMS_RETIRES`, `JOURNAL_CBG_COUR_DECOLE_MURALE`.

## Rôle des scènes sensibles
Les scènes sensibles ne servent pas de verrou numérique ; elles servent de test moral. Pour que l'Alliance reste disponible, le joueur doit avoir traité au moins **une scène sensible liée à la gestion des foules ou des affects** et au moins **une scène sensible liée au soin ou au deuil**.

**Paires recommandées** :
- affects / contrôle : `JOURNAL_TSR_SCENE_SENSIBLE_APAISEMENT_EXPRESS`, `JOURNAL_OBS_SCENE_SENSIBLE_REVELATION_UXIE` ;
- soin / deuil / exploitation : `JOURNAL_BDL_SCENE_SENSIBLE_POKEMON_EPUISE`, `JOURNAL_VRD_SCENE_SENSIBLE_OBJET_RECONNU`, `JOURNAL_CBG_SCENE_SENSIBLE_MURALE_RECOUVERTE`, `JOURNAL_NOC_SCENE_SENSIBLE_SUJET_REFUSE`, `JOURNAL_FLX_SCENE_SENSIBLE_NOMS_RETIRES`.

## Rôle des fragments de Zygarde
Les fragments de Zygarde doivent confirmer la cohérence du Carnet, pas la remplacer.

### Déclenchement recommandé d'un fragment
Un fragment peut apparaître lorsqu'une même zone réunit :
1. **un lieu documenté** ;
2. **une contradiction clairement relevée** ;
3. **une aide concrète aboutie**.

Exemples :
- **Bordelande** : `JOURNAL_BDL_QUARTIERS_RACCOMMODES` + `JOURNAL_BDL_CONTRADICTION_ZONE_SACRIFIEE_VIVANTE` + `JOURNAL_BDL_ARCHIVE_PACTE_SERRE_COMMUNE`.
- **Verride** : `JOURNAL_VRD_ATELIERS_FISSURES` + `JOURNAL_VRD_CONTRADICTION_RESTAURATION_OU_EFFACEMENT` + `JOURNAL_VRD_SCENE_SENSIBLE_OBJET_RECONNU`.
- **Observatoire** : `JOURNAL_OBS_COUPOLE_DESACTIVE` + `JOURNAL_OBS_CONTRADICTION_URGENCE_DEVENUE_REGNE` + `JOURNAL_OBS_ECHO_DE_ZYGARDE` ou un pacte final validé par Frêne et le rival.

## Formulation de déblocage recommandée
Au lieu d'un simple “si compteur >= X”, l'ouverture de l'Alliance peut être évaluée comme une série de preuves narratives.

```text
ALLIANCE_OK si :
  - preuve_territoriale = vraie
  - preuve_critique = vraie
  - preuve_relationnelle = vraie
  - preuve_sensible = vraie
  - au moins 2 fragments de Zygarde ont été révélés par cohérence locale
```

### Traduction pratique
- **preuve_territoriale** : le Carnet couvre départ + fracture + pouvoir.
- **preuve_critique** : le Carnet recoupe au moins trois contradictions de provenance différente.
- **preuve_relationnelle** : le joueur a laissé derrière lui des améliorations reconnaissables par des PNJ et par les Pokémon concernés.
- **preuve_sensible** : le joueur a regardé en face au moins deux scènes que le monde préfère lisser.

## Effet narratif sur la Route de l'Alliance
Quand ces conditions sont remplies, la Route de l'Alliance devient crédible parce que :
- Frêne voit que le Carnet n'a pas servi à collectionner des faits, mais à relier des responsabilités.
- Eda reconnaît des aides concrètes plutôt qu'une curiosité de passage.
- Agathe considère que le joueur sait restaurer sans blanchir.
- Un représentant du centre, comme Valce ou l'archiviste de nuit, peut accepter une réforme graduelle parce que la preuve produite n'est ni naïve ni incendiaire.
- Zygarde répond à une région recousue localement, pas à un camp victorieux.
