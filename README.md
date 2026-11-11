# Pharmaceutique : Traçabilité et Contrôle de Conformité de Lots (C++)

##  Description du Projet
Application console développée en C++ pour automatiser le contrôle qualité et la traçabilité de lots de produits pharmaceutiques soumis aux normes de respect de la chaîne du froid (2.0°C à 8.0°C - Normes BPF/GMP).

##  Fonctionnalités
- Saisie sécurisée des informations de lots (Nom du produit, Numéro de lot, Température relevée).
- Évaluation automatique de la conformité du lot selon la plage autorisée [2.0°C, 8.0°C].
- Génération et persistance des données d'audit dans un fichier de rapport (`rapport_lots.txt`).

##  Technologies & Notions C++ utilisées
- **Langage :** C++
- **Bibliothèques Standard :** `<iostream>`, `<string>`, `<fstream>`
- **Notions :** Gestion du buffer de saisie (`std::getline`,..), entrées/sorties de fichiers (`std::ofstream`), conditions logiques.

## 💻 Structure du Répertoire
- `TestQualite.cpp` : Code source principal.
- `README.md` : Documentation du projet.
