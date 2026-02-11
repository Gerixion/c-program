/*
 * Author: Steve Djomnang Ntonchi
 * copyright: 2025
 * 
 * Description: un programme qui calculle le nombre de temp ecoule en fonction de la minute donne par lutulisateur.
*/


#include <stdio.h>
#include <stdlib.h>


void triplePointeur(int *pointeurSurNombre);
void triplePointeur2(int *pointeurSurNombre2);
void tempsPasse(int *heure, int *minute);
int main(int argc, char *argv)
{

	int nombre = 5;
	int *pointeur = &nombre;

	triplePointeur(&nombre);

	printf("Le resulta de nombre: %d\n\n", nombre);

	triplePointeur2(pointeur);

	printf("Le resulta de nombre: %d\n\n", nombre);

/*************************************************************/


	int heures = 0 , minutes = 0;

	printf("\nCombien de minutes c'est ecoules: ");
	
	scanf("%d", &minutes);

	tempsPasse(&heures, &minutes);

	printf("\nIl c'est ecroule: %d heure et %d minute.\n\n", heures, minutes);

	
	return 0;

}


 void triplePointeur(int *pointeurSurNombre)
{
	*pointeurSurNombre *= 3;



}
void triplePointeur2(int *pointeurSurNombre)
{
         *pointeurSurNombre *= 5;



}

void tempsPasse(int  *heures, int *minutes)
{
	int minFix = 60;
	int minCount = 1;



	int *pointeurMinFix = &minFix;

	int *pointeurMinCount = &minCount;

	while( *pointeurMinCount < *minutes)
	{
		++*pointeurMinCount;
	
		if (*pointeurMinCount == *pointeurMinFix)
	
		{	
			*minutes -= *pointeurMinCount;
	
			++*heures;
	
			*pointeurMinCount = 1;

		}

	}
	


}
