# Run on CodeBlocks
# Description du projet

Ce projet implémente deux classes en C++ : `Personnel` et `Patron`. La classe `Patron` dérive publiquement de la classe `Personnel`. Voici les fonctionnalités implémentées pour chaque classe :

## Classe Personnel

- La classe `Personnel` comprend trois attributs : `nom` (string), `position` (string), et `salaire` (double).
- Elle dispose d'un constructeur qui initialise les données membres.
- La fonction `affiche_personnel` affiche les informations sur le personnel.
- Les opérateurs de flux d'entrée (`>>`) et de sortie (`<<`) sont surchargés pour faciliter l'entrée et la sortie des informations de l'objet `Personnel`.

## Classe Patron

- La classe `Patron` hérite publiquement de la classe `Personnel`.
- En plus des attributs hérités, elle possède deux attributs propres : `bonus_annuel` (double) et `marque_voiture` (string).
- Elle dispose d'un constructeur qui initialise les données membres, y compris celles de la classe de base.
- La fonction `affiche_patron` affiche les informations sur le patron, à la fois en tant que membre du personnel et en tant que patron.
- Les opérateurs de flux d'entrée (`>>`) et l'opérateur d'affectation (`=`) sont surchargés pour faciliter l'entrée et la sortie des informations de l'objet `Patron`.

## Utilisation dans le main

Dans la fonction `main`, un objet de la classe `Personnel` et un objet de la classe `Patron` sont créés. Les informations de ces deux objets sont ensuite affichées.
