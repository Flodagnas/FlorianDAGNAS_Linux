# If

Voici un exemple de base de l’instruction if : 
![lol](https://github.com/Flodagnas/FlorianDAGNAS_Linux/blob/main/Cours_PowerShell/Capture%202.PNG)

L’instruction if commence par évaluer l’expression entre parenthèses.  
Si l’évaluation génère une valeur $true, elle exécute l’élément scriptblock entre les accolades.  
Si la valeur est $false, elle ignore cet élément scriptblock. 
Dans l’exemple précédent, l’instruction if a simplement évalué la variable $condition.  
Cette valeur $true aurait exécuté la commande Write-Output à l’intérieur du scriptblock.  
Dans certains langages, vous pouvez placer une simple ligne de code après l’instruction if afin de l’exécuter.  
Ce n’est pas le cas dans PowerShell.  
il faut fournir un élément scriptblock complet avec entre accolades pour que l’instruction fonctionne correctement.
 
