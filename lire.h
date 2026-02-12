#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Penser à inclure string.h pour strchr()
 

void viderBuffer()
{	
	/* La fonction viderBuffer lit dans le "buffer", caractère par caractère, grâce à getchar. Cette fonction renvoie un int(et non un char, allez savoir pourquoi, peu importe).

On se contente de récupérer ce int dans la variable temporaire c.

On boucle tant qu'on n'a pas récupéré le caractère \n et le symbole EOF(fin de fichier), qui signifient tous deux "vous êtes arrivé à la fin du buffer". On s'arrête de boucler dès que l'on tombe sur l'un de ces deux caractères. */
	int c = 0;
	while (c != '\n' && c != EOF)
	{
		c = getchar();
	}
}


int lire(char *chaine, int longueur)
{
    char *positionEntree = NULL;
 
    // On lit le texte saisi au clavier
    if (fgets(chaine, longueur, stdin) != NULL)  // Pas d'erreur de saisie ?
    {
        positionEntree = strchr(chaine, '\n'); // On recherche l'"Entrée"
        if (positionEntree != NULL) // Si on a trouvé le retour à la ligne
        {
            *positionEntree = '\0'; // On remplace ce caractère par \0
        }
	else
	{
		viderBuffer();
	}
        return 1; // On renvoie 1 si la fonction s'est déroulée sans erreur
    }
    else
    {
    	viderBuffer();
    	return 0; // On renvoie 0 s'il y a eu une erreur
    }
}
