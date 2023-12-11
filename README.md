# Tutoriel Git et GitHub 📘

## Introduction à Git et GitHub 💡

🔗 Git est un système de gestion de versions décentralisé, essentiel pour suivre les modifications dans les projets de développement et collaborer efficacement. GitHub, quant à lui, est une plateforme en ligne qui étend les fonctionnalités de Git, offrant un espace collaboratif pour le stockage, le partage et la gestion de code.

## Installation de Git 💻

1. Commencez par installer Git sur votre machine. Téléchargez la dernière version depuis [le site officiel de Git](https://git-scm.com/downloads) et suivez les instructions d'installation.

## Configuration de Git ⚙️

2. Après l'installation, configurez votre identifiant et adresse e-mail pour lier vos commits à votre compte GitHub :
   - Pour le nom d'utilisateur : `git config --global user.name "Votre nom d'utilisateur"`
   - Pour l'adresse e-mail : `git config --global user.email "votre@adresse.email"`

## Création d'un dépôt sur GitHub 📁

3. Un dépôt (repository) est l'espace de stockage pour votre projet. Créez-en un sur GitHub en cliquant sur "New repository", nommez-le, ajoutez une description, et initialisez avec un README.

## Clonage d'un dépôt 🔄

4. Pour travailler sur un projet existant, clonez son dépôt :
   - Copiez l'URL du dépôt sur GitHub (bouton "Code").
   - Dans un terminal, placez-vous dans le répertoire souhaité et exécutez `git clone URL_DU_DEPOT`.

## Ajout de fichiers au dépôt ➕

5. Pour ajouter des fichiers :
   - Indexez-les avec `git add monfichier.txt` (ou `git add *.txt` pour plusieurs fichiers).
   - Enregistrez les modifications avec `git commit -m "Votre message de commit"`.

## Envoi des modifications sur GitHub (push) 🚀

6. - Assurez-vous d'être à jour avec `git pull`.
   - Envoyez vos modifications avec `git push origin nom_de_votre_branche`.

## Travail en équipe 👥

7. - Créez et basculez sur une nouvelle branche avec `git checkout -b nom_de_la_branche`.
   - Utilisez les pull requests sur GitHub pour fusionner les branches.

## Résolution de conflits 🔧

8. En cas de conflits, éditez manuellement les fichiers concernés, choisissez les modifications à conserver, puis ajoutez le fichier avec `git add` et faites un commit.

## Conclusion 🎉

9. Git et GitHub sont des outils puissants pour la gestion de versions et le travail collaboratif. N'oubliez pas de consulter la documentation de Git pour approfondir vos connaissances.

---

# GIT (Commandes de Base) 🛠️

Git permet de gérer des versions de fichiers et répertoires, crucial pour le travail d'équipe sur des projets.

### Commandes de Base

- **Initialiser un dépôt** : `git init`
- **Ajouter un fichier** : `git add <fichier>`
- **Commiter un fichier** : `git commit -m "<message>"`
- **Voir l'état de l'espace de travail** : `git status`
- **Voir l'historique des commits** : `git log`
- **Voir les différences entre les commits** : `git diff`
- **Ignorer un fichier** : Créez `.gitignore` et y lister les fichiers à ignorer.
- **Reset** : Annuler un commit avec `git reset --soft <commit>` ou `git reset --hard <commit>`.
- **Rebase** : `git rebase -i <commit>`

### Gestion des Branches 🌿

- **Créer une branche** : `git branch <nom de la branche>`
- **Se déplacer sur une branche** : `git checkout <nom de la branche>`
- **Fusionner une branche** : `git merge <nom de la branche>`
- **Supprimer une branche** : `git branch -d <nom de la branche>`


