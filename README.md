# Dante - Voyager à travers l'enfer pour générer et résoudre des labyrinthes

<img src="https://media.mutualart.com/Images/Articles/09_2021/09/340031ad-3001-43ed-9f95-8f1d88e9683e-Mappa%20dell'Inferno.Jpeg" height=60 align="left">
<p>Dante doit voyager à travers l'Enfer, un endroit complètement labyrinthique. Ici, nous allons générer des labyrinthes, trouver
le chemin de sortie et essayez de le faire aussi vite que possible.</p>
<p>Le projet est divisé en neuf sections, qui représentent les neuf cercles de l'Enfer que Dante doit traverser pour atteindre le purgatoire.</p>
<p>Le but de ce projet est de générer des labyrinthes (en un temps raisonnable), de les résoudre (en un temps raisonnable durée) et imprimez la solution.</p>
<br></br>
<div align="center">
<img src="https://encrypted-tbn2.gstatic.com/images?q=tbn:ANd9GcSOPI0cWta6ang1l-KbvEbWEblFaAmmE1_9CJKowWyh8n9perCe" height=60 align="center">
<p><b>DESCRIPTION :</b></p>
<p>&#8251 Les labyrinthes sont rectangulaires.</p>
<p>&#8251 Ils sont codés en ASCII.</p>
<p>&#8251 Les X représentent les murs et les * représentent les espaces libres.</p>
<p>&#8251 Il est possible de se déplacer sur les quatre cases environnantes (haut, bas, droite, gauche).</p>
<p>&#8251 "Démarrer" est dans le coin supérieur gauche (0 ; 0).</p>
<p>&#8251 "Terminer" se trouve dans le coin inférieur droit.</p>
<p>&#8251 Une solution est une série de cases libres et adjacentes, de «Début» à «Finition» inclus.</p>
<p>&#8251 «Start» et «Finish» peuvent être occupés. Dans ce cas, il n'y a pas de solution.</p>
<p>&#8251 La dernière ligne du labyrinthe ne se termine pas par une ligne de retour.</p>
<p>&#8251 Résolution: afin d'écrire la solution dans le labyrinthe, nous utilisons o pour le chemin de la solution.</p>
</div>
<br></br>
<div align="center">
<img src="https://cdn.essentiels.bnf.fr/media/images/cache/crop_doublelandscape_1000_500/rc/0v7YZSdz/uploads/media/image/20201204180548000000_pas_2524.jpg" height=60 align="center">
<p><b>EXEMPLE :</b></p>
<br></br>
<img src="https://lh3.googleusercontent.com/A5l3Zqj6JnfQJfyy1wt9bf73hvexTYuvdg8vpCnH7fopoml3QN3aXLSnzfkvZtTNXfvbK7MxswvnQ9WlkiTCsEOmFge6mBZXM19DN6M" height=180>
<p>&#8251 Chaque solveur doit pouvoir fonctionner comme suit :</p>
<img src="https://lh3.googleusercontent.com/SIImmj2MCN3xuqZC9gaicCkcw9jPiEkhAVY0qUMfMNGdS7qaJLfnADYAqkWQSLnHVT9YxQzIPhyrgnBCnTVHIT4mXnPwo9ToetEQEmM9Dg" height=30 align="center">
<p>&#8251 et imprimer le labyrinthe résolu sur la sortie standard. S'il n'y a pas de solution, vous devez imprimer "aucune solution trouvée" sur la même sortie</p>
<p>&#8251 Le générateur doit fonctionner comme suit :</p>
<img src="https://lh3.googleusercontent.com/4Hsg-nRN8yZx3473ExgOUoFjvlGTQ3TgLlcLtP9lprwsVVS8vqm7GMMeme_q7E418518ERRpUpAy5KGKlt4RburSauDLnhy57i0nEyLe" height=25 align="center">
<p>&#8251 Voici un labyrinthe 24x6 :</p>
<img src="https://lh3.googleusercontent.com/JVTGUHUwuPNJCHaMPbFtSpHQ7-5EKJSj9lUfObuY2tCFpFXug-BtdRiyDRdLekYp1HVksXFVASQMwS-HpzYXO2dQtplybi4BjNmT021dYg" height=80 align="center">
<p>&#8251 et un moyen de le résoudre.</p>
<img src="https://lh3.googleusercontent.com/59dvVvLffFmZAk4dkwReySgKbAVWsKUegu7Cr8J068gG414yS8NJzvn1itKv3YR9ZG5rIVgxuD6P_xVqBx9Pix5fIvEI3a_dipbopxab" height=80 align="center">
