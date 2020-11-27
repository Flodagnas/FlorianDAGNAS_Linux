# Les Boucles

En PowerShell, la boucle "For" s'appuie sur la syntaxe suivante :

![lol](https://github.com/Flodagnas/FlorianDAGNAS_Linux/blob/main/Cours_PowerShell/Capture%203.PNG)

Lorsque l'on utilise une boucle for, on suit la logique suivante : on indique une valeur de départ (état initial), une valeur cible dans la condition de répétition (par exemple la valeur 10) et on incrémente la valeur à chaque tour de boucle (à chaque itération) : on peut incrémenter comme on le veut.


Il éxiste plusieurs types de boucle "For".  
La plus connu est la boucle de "For" de base. 
Ensuite, il y a la boucle "For" basée sur un nombre d'éléments  

![lol](https://github.com/Flodagnas/FlorianDAGNAS_Linux/blob/main/Cours_PowerShell/Capture%204.PNG)   

On va définir la variable $langages et lui attribuer des valeurs (cela pourrait être dynamique).    
Grâce à $langages.Length, nous allons pouvoir faire une boucle qui traite l'ensemble des éléments du tableau.   
C'est ce que l'on fait habituellement (et plus simplement) avec une boucle ForEach mais on peut le faire aussi avec une simple boucle For, d'où cet exemple ci-dessus.

Enfin, il y a la boucle "For" à conditions multiple.

![lo](https://github.com/Flodagnas/FlorianDAGNAS_Linux/blob/main/Cours_PowerShell/Capture%205.PNG)  
![lol](https://github.com/Flodagnas/FlorianDAGNAS_Linux/blob/main/Cours_PowerShell/Capture%206.PNG)   

Au sein d'une boucle "For", on utilise généralement la variable $i pour gérer l'initialisation et l'incrémentation. Si besoin, on peut utiliser deux conditions afin de créer une boucle For à conditions multiple. Pour l'exemple ci-dessus, on prend $i et $j.  
