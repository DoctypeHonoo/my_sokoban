<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174794137-3507bdf8-4c29-49b7-b5bd-9a399e530650.png" />
</p>
<h1 align="center">
   My_Sokoban
</h1>

---

## Motivation : 

Le **My_Sokoban** est un projet de début/milieu d'année à Epitech à réaliser en solo, dont le principe est de recréer le jeu du sokoban dans un terminal à l'aide de la librairie ncurses.
<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174794448-c62dcbf3-7480-4efa-899a-b7b2e46e1185.png" />
</p>

---

## Description :

Le jeu doit être jouable avec les flêches directionnel du clavier et doit reproduire le jeu du sokoban avec quelques différences : 
- Les cases ou le joueur peut se déplacer doivent être représenté par des espaces
- Les murs par des "#"
- Les boîtes par des "X"
- Les cases ou le joueur doit amener les boîtes par des "O"
- Le joueur par un "P"

---

## Fonctions Autorisées : 

- malloc, free, exit
- (f)open, (f)close, (f)read, (f)write
- getline, ioctl, usleep, sigaction, signal
- stat, lstat, fstat

---

## Installer & Lancer le Projet :

Ouvrez un terminal et dirigez vous ou vous souhaitez que le projet soit installé, puis exécutez les commandes suivantes : 
```bash
$ git clone git@github.com:DoctypeHonoo/my_sokoban.git
$ cd my_sokoban
$ make
```
Le binaire se trouvera alors à la racine du projet, et il vous suffira de le lancer comme ceci : 
```bash
$ ./my_sokoban map
```
<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174798124-a53159a7-4fc7-4645-b007-1fbc0318c9ce.png">
</p>

---

## Comment l'utiliser ? : 

Notre lemin possède un système de parsing complet mais il ne possède malheureusement pas encore l'algorithme qui va permettre de calculer l'itinéraire des fourmis.

<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174785200-495420df-b660-46d6-821c-bf4df6e19674.png">
</p>
