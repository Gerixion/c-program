#include <stdio.h>
#include <stdlib.h>
//#include "lire.h" pour le moment je sais pas encore inclure lire (texte) et lirelong(chifre) en mem temp
#include "lireLong.h"

//Comprenez le principe de la fonction fgets

int main (int argc, char * argv[]){
	/* Lorsque l'utilisateur tape du texte au clavier, le système d'exploitation copie directement le texte tapé dans le "buffer" stdin. Il est là pour recevoir temporairement l'entrée du clavier.

Le rôle de la fonction fgets est justement d'extraire du "buffer" les caractères qui s'y trouvent et de les copier dans la zone mémoire que vous lui indiquez (votre tableau chaine).

Après avoir effectué son travail de copie, fgets enlève du "buffer" tout ce qu'elle a pu copier.

iSi tout s'est bien passéfgets a donc pu copier tout le buffer dans votre chaîne, et ainsi le buffer se retrouve vide à la fin de l'exécution de la fonction. Mais si l'utilisateur entre beaucoup de caractères, et que la fonction fgets ne peut copier qu'une partie d'entre eux, seuls les caractères lus seront supprimés du "buffer". Tous ceux qui n'auront pas été lus y resteront ! */

	//char nom[10];
	// Tester si la fonction retourn un NULL
	//printf("Quel est votre nom ?");
	//lire(nom, 10);
	//printf("Ah ! Vous vous appelez donc %s !\n\n", nom);
	
	// Saisir des nombre. voir lireLong.h
	long age = 0;	
	printf("Quelle age a tu?\n");
	//age = lireLong();
	printf("Tu a %ld ans!\n\n", age);

	return 0;
}
