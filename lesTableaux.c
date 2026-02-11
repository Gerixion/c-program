#include <stdio.h>
#include <stdlib.h>

int main(int argc, int *argv)
{

	int sommeTableau(int tableau[], int tailleTableau);
	double moyenneTableau(int tableau[], int tailleTableau);
	void initialiserTableau(int *tableau2, int tailleTableau);
	int tableau [4], i = 0, x = 0;
	int tableau2[4] = {10,20};// Et une maniere de initialiser les tableau la jais donnez 2 valeur au tableau pour 
				// initialise est les 2 autre valeur son automatiquemen mis a 0. 
	/*
	for(int i = 0; i < 4; i++)// Boucle pour initialiser le tableau.
	{	
		++x;
		tableau[i] = x;

	}
		
	for(int i = 0; i < 4; i++)
	{
		printf("Tableau: %d\n\n", tableau[i]);
				

	}
	*/
	
	//initialiserTableau(tableau2,15);
	
	int tableau3[4] = {10,20,30,40};
	int somme = sommeTableau(tableau3,4);
	double moyenne = moyenneTableau(tableau3,4);

	printf("La somme et: %d\n", somme);
	printf("Et la moyenne et de: %f\n", moyenne);
	return 0;
}
void initialiserTableau(int *tableau2, int tailleTableau)
         {
                 for(int i = 0; i < tailleTableau; i++)
                 {
                         printf("%d\n", tableau2[i]);

                 }

         }

int sommeTableau(int tableau[], int tailleTableau){
	
	int result = 0;
	for(int i = 0; i < tailleTableau; i++){

		result += tableau[i];

	}

	return result;
}

double moyenneTableau(int tableau[], int tailleTableau){

	int result = 0;
	
	for(int i = 0; i < tailleTableau; i++){

		result += tableau[i];
	}
	
	 result /= tailleTableau;

	return result;

}

