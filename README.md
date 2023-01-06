## Recette galette saucisse

Bonjour

Ce tuto est pour apprendre a faire la recette de la galette saucisse, celle de nos grand parent de bretagne. Avec un gout inimitable.

Ingrédients :

    4 saucisses
    4 galettes de sarrasin
    30 g de beurre salé

1. Dans une poêle ou au barbecue, faites cuire les saucisses.

2. Avant la fin de la cuisson de la saucisse, faites chauffer une poêle beurrée avec le beurre salé et déposez une galette dans la poêle pour la faire chauffer quelques minutes.

3. Quand la galette est chaude et la saucisse cuite, déposez la saucisse sur l’un des bords de la galette puis roulez la saucisse dedans.

4. Renouvelez l’opération jusqu’à ce qu’il n’y ait plus de galettes et de saucisses.

5. Dégustez !

## Accord vin

La galette saucisse se marie parfaitement avec du vin rouge sec plutôt « jeune » comme un bon Cheverny rouge, un Côte roannaise rouge, un Orléans rouge, un Coteaux du Cher et de l'Arnon rouge ou encore un Anjou rouge.

===============================================================================

# tutoriel Git et GitHub

## Introduction à Git et GitHub

Git est un logiciel de gestion de version de code source. Il permet de suivre l'historique des modifications apportées à un projet et de travailler en collaboration avec d'autres développeurs.

GitHub est un service en ligne qui offre un espace de travail collaboratif basé sur Git. Il permet de stocker et de partager du code, mais aussi de travailler sur des projets en équipe et de suivre l'avancée des différentes tâches.

## Installation de Git

Pour utiliser Git, il faut tout d'abord l'installer sur votre ordinateur. Vous pouvez télécharger la dernière version de Git à l'adresse suivante : https://git-scm.com/downloads

Une fois le fichier téléchargé, ouvrez-le et suivez les instructions d'installation.

## Configuration de Git

Une fois Git installé sur votre ordinateur, il est recommandé de configurer votre nom d'utilisateur et votre adresse e-mail. Cela permettra de lier les commits (enregistrements) que vous allez effectuer à votre compte GitHub.

Pour configurer votre nom d'utilisateur, ouvrez un terminal et tapez la commande suivante :
```
git config --global user.name "Votre nom d'utilisateur"
```
Pour configurer votre adresse e-mail, tapez la commande suivante :
```	
git config --global user.email "votre@adresse.email"
```

## Création d'un dépôt (repository) sur GitHub

Un dépôt, ou repository en anglais, est un espace de stockage qui contient votre projet et l'historique des modifications apportées.

Pour créer un nouveau dépôt sur GitHub, connectez-vous à votre compte et cliquez sur le bouton "New repository" en haut à droite de la page.

Donnez un nom à votre dépôt et une description (optionnelle). Sélectionnez les options "Initialize this repository with a README" et "Add .gitignore: None" et cliquez sur le bouton "Create repository".

## Clonage d'un dépôt

Si vous souhaitez travailler sur un projet existant, vous pouvez cloner (copier) son dépôt sur votre ordinateur.

Pour cela, rendez-vous sur la page du dépôt sur GitHub et copiez l'URL du dépôt (en haut à droite de la page, bouton "Code").

Ouvrez un terminal et positionnez-vous dans le répertoire où vous voulez créer votre copie locale du dépôt. Tapez la commande suivante :
```	
git clone URL_DU_DEPOT
```
Le dépôt sera alors téléchargé sur votre ordinateur et un nouveau répertoire sera créé avec le nom du dépôt.

Clonage d'un dépôt

Si vous souhaitez travailler sur un projet existant, vous pouvez cloner (copier) son dépôt sur votre ordinateur.

Pour cela, rendez-vous sur la page du dépôt sur GitHub et copiez l'URL du dépôt (en haut à droite de la page, bouton "Code").

Ouvrez un terminal et positionnez-vous dans le répertoire où vous voulez créer votre copie locale du dépôt. Tapez la commande suivante :

git clone URL_DU_DEPOT

Le dépôt sera alors téléchargé sur votre ordinateur et un nouveau répertoire sera créé avec le nom du dépôt.
Ajout de fichiers au dépôt

## Ajout de fichiers au dépôt

Pour ajouter des fichiers au dépôt, il faut d'abord les "indexer" avec la commande git add. Par exemple, pour ajouter un fichier nommé "monfichier.txt", tapez :
```
git add monfichier.txt
```
Vous pouvez ajouter plusieurs fichiers en même temps en utilisant l'opérateur *, par exemple :
```
git add *.txt
```
Cela ajoutera tous les fichiers ayant l'extension ".txt" dans le répertoire courant.

Enregistrement des modifications (commit)

Une fois que vous avez ajouté les fichiers que vous souhaitez au dépôt, il faut enregistrer ces modifications (commit) avec un message expliquant les changements apportés.

Pour cela, tapez la commande suivante :
```
git commit -m "Votre message de commit"
```

## Envoi des modifications sur GitHub (push)

Pour envoyer vos commits sur GitHub, vous devez utiliser la commande git push.

Avant de pouvoir envoyer vos commits, vous devez vous assurer que vous êtes à jour avec le dépôt distant (celui sur GitHub). Pour cela, utilisez la commande git pull.

Ensuite, pour envoyer vos commits, tapez :
```
git push origin nom_de_votre_branche
```
Remplacez "nom_de_votre_branche" par le nom de la branche sur laquelle vous travaillez. Si vous travaillez sur la branche principale (master), vous pouvez omettre cet argument.

## Travail en équipe sur un projet

Lorsque vous travaillez en équipe sur un projet, il est recommandé de travailler sur des branches séparées plutôt que directement sur la branche principale (master).

Pour créer une nouvelle branche, utilisez la commande suivante :
```
git branch nom_de_la_branche
```
Pour basculer sur cette branche, utilisez la commande git checkout :
```
git checkout nom_de_la_branche
```
Vous pouvez également créer et basculer sur une nouvelle branche en une seule commande avec git checkout -b :
```
git checkout -b nom_de_la_branche
```
Une fois que vous avez terminé de travailler sur votre branche, vous pouvez envoyer vos modifications sur GitHub en utilisant une pull request.

Pour cela, rendez-vous sur la page du dépôt sur GitHub et cliquez sur le bouton "New pull request". Sélectionnez votre branche dans la liste et cliquez sur "Create pull request".

Vous pouvez ajouter des commentaires et des informations supplémentaires sur votre pull request. Un membre de l'équipe peut alors review (relecture) votre pull request et, s'il est d'accord, l'intégrer à la branche principale.

## Résolution de conflits

Il peut arriver que des conflits apparaissent lorsque vous essayez de fusionner des branches.

Un conflit se produit lorsque plusieurs personnes ont modifié le même fichier et que Git ne sait pas comment fusionner ces modifications.

Pour résoudre un conflit, vous devez ouvrir le fichier en conflit et chercher les sections de code qui sont entourées de balises <<<<<<<, ======= et >>>>>>>. Vous devez alors choisir quelles modifications conserver et supprimer les balises.

Une fois que vous avez résolu le conflit, ajoutez le fichier modifié avec la commande git add et faites un commit avec un message expliquant les modifications apportées.

## Conclusion

Voilà, vous savez maintenant comment utiliser Git et GitHub pour travailler sur un projet en collaboration avec d'autres personnes.

N'hésitez pas à vous référer à la documentation de Git pour en savoir plus sur les commandes et les fonctionnalités disponibles.

Et n'oubliez pas de suivre les bonnes pratiques de gestion de version de code pour éviter les problèmes et travailler de manière efficace en équipe.