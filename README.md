## 🇫🇷 VERSION FRANÇAISE  

# 🌳 Arbres Binaires - Projet Holberton School

[![C](https://img.shields.io/badge/language-C-blue.svg)](https://fr.wikipedia.org/wiki/C_(langage))
[![Holberton](https://img.shields.io/badge/school-Holberton-red.svg)](https://www.holbertonschool.com/)

## 👥 Auteurs
- **Jordann** - [Profil GitHub](https://github.com/JordannM83)
- **Aurélie** - [Profil GitHub](https://github.com/adi-mart)


## 📖 Description
Ce projet fait partie du programme de Holberton School et se concentre sur l'implémentation de diverses fonctions d'arbres binaires en C. L'objectif est de comprendre la structure des arbres binaires, leurs parcours et les opérations courantes.


## 🎯 Objectifs d'apprentissage
Après avoir terminé ce projet, vous devriez être capable de :
- Créer et manipuler des arbres binaires
- Comprendre les concepts de parent, enfant, racine et feuille
- Implémenter différents parcours d'arbres binaires (préordre, infixe, postordre)
- Calculer la hauteur, la profondeur, la taille, le nombre de feuilles et de nœuds
- Évaluer les propriétés d'un arbre (équilibre, perfection, etc.)
- Utiliser les arbres binaires pour organiser et rechercher des données efficacement

## 🗂️ Structure du projet

```
holbertonschool-binary_trees/
├── binary_trees.h                # Fichier d'en-tête avec prototypes et structures
├── binary_tree_print.c           # Fonction d'affichage graphique de l'arbre
├── 0-binary_tree_node.c          # Création de nœud
├── 1-binary_tree_insert_left.c   # Insérer enfant gauche
├── 2-binary_tree_insert_right.c  # Insérer enfant droit
├── 3-binary_tree_delete.c        # Supprimer l'arbre
├── 4-binary_tree_is_leaf.c       # Vérifier si le nœud est une feuille
├── 5-binary_tree_is_root.c       # Vérifier si le nœud est racine
├── 6-binary_tree_preorder.c      # Parcours préordre
├── 7-binary_tree_inorder.c       # Parcours infixe
├── 8-binary_tree_postorder.c     # Parcours postordre
├── 9-binary_tree_height.c        # Hauteur de l'arbre
├── 10-binary_tree_depth.c        # Profondeur du nœud
├── 11-binary_tree_size.c         # Taille de l'arbre
├── 12-binary_tree_leaves.c       # Nombre de feuilles
├── 13-binary_tree_nodes.c        # Nombre de nœuds non-feuilles
├── 14-binary_tree_balance.c      # Facteur d'équilibre
├── 15-binary_tree_is_full.c      # Vérifier si l'arbre est complet
├── 16-binary_tree_is_perfect.c   # Vérifier si l'arbre est parfait
├── 17-binary_tree_sibling.c      # Trouver le frère
├── 18-binary_tree_uncle.c        # Trouver l'oncle
├── *-main.c                      # Fichiers de test
└── README.md                     # Ce fichier
```

## 🌱 Qu'est-ce qu'un arbre binaire ?
Un **arbre binaire** est une structure de données hiérarchique composée de nœuds. Chaque nœud contient :
- une valeur (donnée)
- un pointeur vers son parent (sauf la racine)
- un enfant gauche
- un enfant droit

Le premier nœud est la **racine**.
Un nœud sans enfants est une **feuille**.
Chaque nœud (sauf la racine) a un **parent** qui est le nœud directement au-dessus dans la hiérarchie. Cette relation parent/enfant permet de se déplacer facilement vers le haut ou le bas de l'arbre. Les arbres binaires sont utilisés pour organiser, rechercher et manipuler des données efficacement.


## 🔄 Parcours d'arbres
Il existe plusieurs façons de parcourir un arbre binaire :

- **Préordre** :
  1. Visiter le nœud actuel
  2. Parcourir le sous-arbre gauche
  3. Parcourir le sous-arbre droit

- **Infixe** :
  1. Parcourir le sous-arbre gauche
  2. Visiter le nœud actuel
  3. Parcourir le sous-arbre droit

- **Postordre** :
  1. Parcourir le sous-arbre gauche
  2. Parcourir le sous-arbre droit
  3. Visiter le nœud actuel


## 🚀 Compilation et utilisation
Compilation générale :
```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o binary_trees
```

Exemple pour tester l'insertion à gauche :
```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 1-main.c 1-binary_tree_insert_left.c 0-binary_tree_node.c binary_tree_print.c -o insert_left
./insert_left
```

Inclure l'en-tête dans vos fichiers :
```c
#include "binary_trees.h"
```

## 🧪 Tests
Des fichiers de test `*-main.c` sont fournis pour chaque fonctionnalité.

## 📝 Notes
- Tous les fichiers suivent le style Betty
- Les fonctions de parcours affichent les valeurs dans l'ordre choisi
- Les fonctions de manipulation respectent la structure parent/enfant

## 🏫 À propos de Holberton School
Ce projet fait partie du programme de Holberton School, une école d'ingénierie logicielle basée sur des projets.

## 📄 Licence
Ce projet fait partie du programme de Holberton School. Tous droits réservés.
<br><br>
## 🇬🇧 ENGLISH VERSION

# 🌳 Binary Trees - Holberton School Project

[![C](https://img.shields.io/badge/language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Holberton](https://img.shields.io/badge/school-Holberton-red.svg)](https://www.holbertonschool.com/)

## 👥 Authors
- **Jordann** - [GitHub Profile](https://github.com/JordannM83)
- **Aurélie** - [GitHub Profile](https://github.com/adi-mart)


## 📖 Description
This project is part of the Holberton School curriculum and focuses on implementing various binary tree functions in C. The goal is to understand the structure of binary trees, their traversals, and common operations.


## 🎯 Learning Objectives
After completing this project, you should be able to:
- Create and manipulate binary trees
- Understand the concepts of parent, child, root, and leaf
- Implement different binary tree traversals (preorder, inorder, postorder)
- Calculate height, depth, size, number of leaves and nodes
- Evaluate tree properties (balance, perfection, etc.)
- Use binary trees to organize and search data efficiently


## 🗂️ Project Structure

```
holbertonschool-binary_trees/
├── binary_trees.h                # Header file with prototypes and structures
├── binary_tree_print.c           # Tree graphical print function
├── 0-binary_tree_node.c          # Node creation
├── 1-binary_tree_insert_left.c   # Insert left child
├── 2-binary_tree_insert_right.c  # Insert right child
├── 3-binary_tree_delete.c        # Delete tree
├── 4-binary_tree_is_leaf.c       # Check if node is a leaf
├── 5-binary_tree_is_root.c       # Check if node is root
├── 6-binary_tree_preorder.c      # Preorder traversal
├── 7-binary_tree_inorder.c       # Inorder traversal
├── 8-binary_tree_postorder.c     # Postorder traversal
├── 9-binary_tree_height.c        # Tree height
├── 10-binary_tree_depth.c        # Node depth
├── 11-binary_tree_size.c         # Tree size
├── 12-binary_tree_leaves.c       # Number of leaves
├── 13-binary_tree_nodes.c        # Number of non-leaf nodes
├── 14-binary_tree_balance.c      # Balance factor
├── 15-binary_tree_is_full.c      # Check if tree is full
├── 16-binary_tree_is_perfect.c   # Check if tree is perfect
├── 17-binary_tree_sibling.c      # Find sibling
├── 18-binary_tree_uncle.c        # Find uncle
├── *-main.c                      # Test files
└── README.md                     # This file
```

## 🌱 What is a Binary Tree?
A **binary tree** is a hierarchical data structure made of nodes. Each node contains:
  - a value (data)
  - a pointer to its parent (except the root)
  - a left child
  - a right child

The first node is the **root**.
A node with no children is a **leaf**.
Every node (except the root) has a **parent** which is the node directly above it in the hierarchy. This parent/child relationship allows you to move up or down the tree easily. Binary trees are used to organize, search, and manipulate data efficiently.

## 🔄 Tree Traversals
There are several ways to traverse a binary tree:

- **Preorder**:
  1. Visit the current node
  2. Traverse the left subtree
  3. Traverse the right subtree

- **Inorder**:
  1. Traverse the left subtree
  2. Visit the current node
  3. Traverse the right subtree

- **Postorder**:
  1. Traverse the left subtree
  2. Traverse the right subtree
  3. Visit the current node

## 🚀 Compilation & Usage
General compilation:
```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o binary_trees
```

Example to test left insertion:
```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 1-main.c 1-binary_tree_insert_left.c 0-binary_tree_node.c binary_tree_print.c -o insert_left
./insert_left
```

Include the header in your files:
```c
#include "binary_trees.h"
```

## 🧪 Testing
Test files `*-main.c` are provided for each feature.

## 📝 Notes
- All files follow the Betty style
- Traversal functions print values in the chosen order
- Manipulation functions respect parent/child structure

## 🏫 About Holberton School
This project is part of the Holberton School curriculum, a project-based software engineering school.

## 📄 License
This project is part of the Holberton School curriculum. All rights reserved.
