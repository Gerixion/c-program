/*
 * Author: Steve Djomnang Ntonchi
 * Copyright 2025
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char argv[])
{	int majeur = 1; //booleenne existe pas dans le language C donc 1 = vais et 0 = faux dans un if.
	int age = 27;
	if (age >= 21)
	{
		printf("Est aussi majeur international ;).\n\n");//si lutulisatteur a plus ou egale a 21 ans
	}
	else if (age >= 18)//on peux ecrire autant de else if que on veux.
	{
		printf("Vous etes majeur %d ans!\n\n", age);//si l'utulisatteur a plus ou egale a 18 ans
	}
	else
	{
		printf("Vous etes mineur :(.\n\n");//si l'utulisateur est mineur...
	}

/*
 *	les different condition
 *	&& et permet de verifier plusieur condition(il faux que tout les condition sois correct)
 *	|| ou permet de verifier plusieur condition(des que une condition et correct)
 *	! non est si age nes pas 27 ex: (!(age<27)).
*/
	if(!(age < 27))
	{
		printf("Vous etes pas plus jeune que 27ans.\n\n");
	}
	
	if(majeur)//vue que majeur est = a 1, alors la condition est vrais est le pc imprimera la ligne 39.
	{
		printf("oui vous etes majeur.\n\n");
	}

	switch(age)//switch est comme un if mes tout est racoursi
	{
		case 18:
		
			printf("Salut tu et tout juste majeur!!!\n\n");
		break;

		case 27:
			printf("Salut tes majeur international!!!\n\n");
		break;
		
		default://correspond a un else ;)

			printf("Nous avont pas pus trouver ton age...\n\n");
	}
/******************************************************************************************************************************/
// Exercise

int choixMenu = 0 ;

printf("\n=== Menu ===\n1. Royal Cheese\n2. Mc Deluxe\n3. Mc Bacon\n4. Big Mac\nVotre choix?\n");

scanf("%d",&choixMenu);

switch (choixMenu)
{
	case 1: 
		printf("Tu as choisi le menu Royal cheese\n");
	break;
	
	case 2:
                printf("Tu as choisi le menu Mc Deluxe\n");
        break;

	case 3:
                 printf("Tu as choisi le menu MC Bacon\n");
        break;

	case 4:
                 printf("Tu as choisi le menu Big Mac\n");
        break;

	default:
		printf("Tu as fais une mauvaise selection...\n");
}

/*autorisation = (age >= 18) ? 1 : 0;

Le point d'interrogation permet de dire « est-ce que tu es majeur ? ». 
Si oui, alors on met la valeur 18 dans age. 
Sinon (le : signifie else ici), on met la valeur 17.*/

return 0;
}
