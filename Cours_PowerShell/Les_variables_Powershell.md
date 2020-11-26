# Les Variables PowerShell

Une variable Powershell est un emplacement de stockage provisoire en mémoire destiné à recueillir une valeur, un objet ou une collection d’objets.

Les variables sont généralement nommées, et leurs noms sont toujours précédés d’un symbole “$“.

Les variables sont automatiquement “typées” lors de l’affectation de valeur (si elles ne sont pas déclarées au préalable).

Il existe plusieurs commandes pour manipuler les variables, mais le plus simple reste la déclaration par instanciation via le signe d’égalité.

## Exemple:

$Process = Get-Process

Ici, la variable “Process” déclarée dans cet exemple contient la liste des processus en cours, obtenus par la commande “Get-Process”.
Vous pouvez afficher son contenu en mentionnant simplement en stipulant son nom “$Process” puis “Entrée”
