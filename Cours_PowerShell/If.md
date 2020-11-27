# If

Voici un exemple de base de l’instruction if :  
$condition = $true  
  if ( $condition )   
  {   
      Write-Output "The condition was true"   
  } 
 
L’instruction if commence par évaluer l’expression entre parenthèses.  
Si l’évaluation génère une valeur $true, elle exécute l’élément scriptblock entre les accolades.  
Si la valeur est $false, elle ignore cet élément scriptblock. 
Dans l’exemple précédent, l’instruction if a simplement évalué la variable $condition.  
Cette valeur $true aurait exécuté la commande Write-Output à l’intérieur du scriptblock.  
Dans certains langages, vous pouvez placer une simple ligne de code après l’instruction if afin de l’exécuter.  
Ce n’est pas le cas dans PowerShell.  
Vous devez fournir un élément scriptblock complet avec entre accolades pour que l’instruction fonctionne correctement.
 
