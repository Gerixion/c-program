/*
 * Author: Steve Djomnang Ntonchi

 * Copyright 2025

 * TO-Do:Imaginez un programme qui demande deux nombres à l'utilisateur :

	Stockez ces deux nombres dans des variables.

	Faites la somme de ces variables.

	Stockez le résultat dans une variable appelée resultat.

	Vous n'avez plus qu'à afficher le résultat du calcul à l'écran, 
	
	sous les yeux ébahis de l'utilisateur qui n'aurait jamais été capable de calculer cela de tête aussi vite.
*/

#include <stdio.h>
#include <stdlib.h>

int main( int argc, char * argv[])
{

// On declare les variable.
int nombre1 = 0;
int nombre2 = 0;
int resulta = 0;

// On demande le nombre 1 a lutulisateur.
printf("Donnez moi le premier nombre: ");
scanf("%d", &nombre1);

// On demande le nombre 2 a lutulisateur.
printf("\n\nDonnez moi le deuxiem nombre: ");
scanf("%d", &nombre2);

// La machine calcule la somme des 2 nombre.
resulta = nombre1 + nombre2;

// On imprimme le resulta.
printf("\n\nVoici le resulta: %d\n\n", resulta);

return 0;

}
