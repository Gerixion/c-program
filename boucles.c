#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
// Creez une boucle while
	int reponse = 0;
	int compteur = 0;
	
	// Boucle While
	while(/*Condition*/ !(reponse == 47) )
	{
		//instruction a repeter
		printf("Tapez le nombre 47!: ");
		scanf("%d\n", &reponse);
	}
	while(compteur < 10)
	{
		compteur++; // pour sortie dunne boucle infini utuliser du ctrl + C.
		printf("Compteur: %d\n", compteur);
	}
	
	// Boucle do while

	do //un do while sexecute au moin une fois meme si la condision est fausse.
	{
		 compteur++; // pour sortie dunne boucle infini utuliser du ctrl + C.
                 printf("Compteur: %d\n", compteur);	
	}while(compteur < 100);

	
	// Boucle for

	for (compteur = 0; compteur < 150; ++compteur)
	{
	
		
		
		if(compteur == 50)
		{
			printf("Chargement %d%\n", compteur);
			continue;
		}
		else if(compteur == 100)
		{
			printf("Chargement %d%\n", compteur);
			break;
		}
		else
		{
			printf("Nombre de fichie...: %d\n", compteur);
		}

	}

	return 0;

}
