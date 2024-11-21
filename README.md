# Vérification de Jours Fériés en 2024

## Description

Ce programme en C permet de vérifier si une date donnée correspond à un jour férié pour l'année 2024. L'utilisateur peut saisir une date (jour, mois, année) et le programme l'informe si cette date est un jour férié ou non. Il gère une liste pré-définie de jours fériés pour l'année 2024.

## Fonctionnalités

1. **Saisie de la date** : Permet à l'utilisateur d'entrer un jour, un mois et une année.
2. **Affichage de la date saisie** : Affiche la date entrée sous un format lisible.
3. **Vérification de l'année** : Si l'année entrée n'est pas 2024, un message est affiché indiquant que la date ne correspond pas à 2024.
4. **Vérification des jours fériés** : Le programme compare la date entrée avec un tableau de jours fériés prédéfinis pour l'année 2024 et informe l'utilisateur si la date est un jour férié ou non.

## Détails techniques

- **Structure `date`** : Une structure est utilisée pour stocker le jour, le mois et l'année de la date.
- **Tableau des jours fériés** : Un tableau contenant 11 dates correspondant aux jours fériés de l'année 2024.
- **Fonctions utilisées** :
  - `lire_date()` : Permet à l'utilisateur de saisir une date.
  - `affiche_date()` : Affiche la date saisie.
  - `compare_date()` : Compare deux dates pour vérifier leur égalité.
  - `est_ferie()` : Vérifie si la date saisie est un jour férié en 2024.
