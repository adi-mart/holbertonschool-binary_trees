
# Binary Trees

Ce projet a pour objectif d'implémenter différentes fonctions de manipulation d'arbres binaires en C.

Un **arbre binaire** est une structure de données arborescente dans laquelle chaque nœud possède au plus deux enfants, appelés généralement « fils gauche » et « fils droit ». Cette structure est largement utilisée en informatique pour organiser, rechercher et manipuler des données de façon efficace (par exemple, dans les arbres de recherche, les tas, etc.).


## Structure du projet

| Fichier / Dossier                | Rôle / Description                                 |
|----------------------------------|----------------------------------------------------|
| `0-binary_tree_node.c`           | Création d'un nœud d'arbre binaire                 |
| `1-binary_tree_insert_left.c`    | Insertion d'un nœud à gauche                       |
| `2-binary_tree_insert_right.c`   | Insertion d'un nœud à droite                       |
| `3-binary_tree_delete.c`         | Suppression d'un arbre binaire                     |
| `4-binary_tree_is_leaf.c`        | Vérifie si un nœud est une feuille                 |
| `5-binary_tree_is_root.c`        | Vérifie si un nœud est la racine                   |
| `6-binary_tree_preorder.c`       | Parcours en préordre                               |
| `7-binary_tree_inorder.c`        | Parcours en inordre                                |
| `8-binary_tree_postorder.c`      | Parcours en postordre                              |
| `9-binary_tree_height.c`         | Hauteur de l'arbre                                 |
| `10-binary_tree_depth.c`         | Profondeur d'un nœud                               |
| `11-binary_tree_size.c`          | Taille de l'arbre                                  |
| `12-binary_tree_leaves.c`        | Nombre de feuilles                                 |
| `13-binary_tree_nodes.c`         | Nombre de nœuds non-feuilles                       |
| `14-binary_tree_balance.c`       | Facteur d'équilibre                                |
| `15-binary_tree_is_full.c`       | Vérifie si l'arbre est plein                       |
| `16-binary_tree_is_perfect.c`    | Vérifie si l'arbre est parfait                     |
| `17-binary_tree_sibling.c`       | Trouve le frère d'un nœud                          |
| `18-binary_tree_uncle.c`         | Trouve l'oncle d'un nœud                           |
| `binary_trees.h`                 | Fichier d'en-tête (structures, prototypes)         |
| `binary_tree_print.c`            | Affichage graphique de l'arbre                     |
| `*-main.c`                       | Fichiers de test pour chaque fonction              |
| Dossiers `0-node`, `2-right`,... | Exemples de fichiers/dossiers de tests ou outputs   |


## Compilation
Pour compiler tous les fichiers :

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o btree
```

Pour compiler un fichier de test spécifique :

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 1-main.c 1-binary_tree_insert_left.c 0-binary_tree_node.c binary_tree_print.c -o 1-insert_left
```


## Utilisation
Inclure le fichier d'en-tête dans vos fichiers sources :

```c
#include "binary_trees.h"
```


## Exemples

Exemple de création d'un arbre et d'insertion :

```c
binary_tree_t *root;
root = binary_tree_node(NULL, 98);
binary_tree_insert_left(root, 12);
binary_tree_insert_right(root, 402);
binary_tree_print(root);
```

## Auteur
Jordann et Aurélie

Projet réalisé dans le cadre du cursus Holberton School.
