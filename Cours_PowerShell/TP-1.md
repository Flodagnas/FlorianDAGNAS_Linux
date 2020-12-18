# Scripts de gestion des comptes utilisateurs

## Créer des utilisateurs
Pour créer un utilisatuer, on utilise la commande ```New-LocalUser```   
![lol](https://github.com/Flodagnas/FlorianDAGNAS_Linux/blob/main/Cours_PowerShell/1.PNG)

## Modifier des utilisateurs
Par la suite, pour modifier un utilisateur, on utilise la commande ```Set-LocalUser```

## Supprimer des utilisateurs
Pour supprimer des utilisateur, on utilise la commande ```Remove-LocalUser```   
![lol](https://github.com/Flodagnas/FlorianDAGNAS_Linux/blob/main/Cours_PowerShell/2.PNG)

## Voir tout les utilisateurs
Pour voir tout les utilisateurs, il faut entrer la cammande ```Get-LocalUser```   
![yo](https://github.com/Flodagnas/FlorianDAGNAS_Linux/blob/main/Cours_PowerShell/3.PNG)

## Faire une recherche sur l'existence d'un utilisateur en particulier
Pour faire la recherche sur l'existence d'un utilisateur en particulier, il faut entrer la commande ```Get-LocalUser -Name 'guest'|Select-Object```
