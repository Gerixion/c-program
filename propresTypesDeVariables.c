#include "propresTypesDeVariables.h"
#include <stdio.h>
#include <stdlib.h>


void recupPointeur(Personne *mec);

int main (int argc, char * argv[]){

Personne human; //Création d'une variable "human" de type Personne grace au typedef dans le .h on a pas besoin decrire le struct
		// pour declare une variable

Personne joueurs[2];

printf("Quelle est votre nom?\n");

scanf("%s",human.nom);

printf("Quelle est votre prenom?\n");

scanf("%s", human.prenom);

human.age = 27;

printf("Vous vous appelez %s %s et vous aves %d ans.\n\n", human.nom, human.prenom, human.age);


recupPointeur( &human);


printf("Joueur 1 quelle et votre nom?\n");
scanf("%s", joueurs[0].nom);

printf("Bonjour %s", joueurs[0].nom);

// Utulisez un pointeur sur une structure

Personne *utulisateur1 = NULL, *utulisateur2 = NULL;


return 0; 


}


void recupPointeur(Personne* mec){
	// entoure les pointeur de struct par des () si non ca fonctione pas
 	printf("Nom: %s\n\n", mec->nom);  // On travaille sur un pointeur, on utilise la flèche
	printf("Nom: %s\n\n", (*mec).nom); //On travaille sur une variable, on utilise le "point"

}
