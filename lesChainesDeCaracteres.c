#include <stdio.h>
#include <stdlib.h>
#include <string.h>//nouvelle bibliotheque pour les chaine de caractere.
int main(int argc, char *argv[]){
	/*
	Methode manuellement pour avoir une chaine de caractere
	*/
	char lettre = 'A';

	printf("%d\n", lettre); // %d Imprime le nombre qui appartien a la letre A donc 65
	
	printf("%c\n", lettre); // %c Imprime la lettre A

	//scanf("%c", &lettre);// demande a lutulisateur de donne une lettre.
	printf("%c\n",lettre);

	char tableauChaine[6] = {'S','a','l','u','t','\0'}; //declare une chaine de caractere via le tableau. \0 est tres important a la fin de chaque tableau de chaine de caractere.

	printf("%s\n", tableauChaine);

	
	/*
         Methode a utulise uniauement a l'initialisation pour avoir une chaine de caractere
         */
	
	char salut[] = "Salut";// La taille du tableau chaine est automatiquement calculée

	printf("%s\n", salut);

	char prenom[100];

	printf("Comment t'appelles-tu ? ");
	scanf("%s", prenom);
	printf("Salut %s! jespere que tu vas bien?\n", prenom);

	/*
		Je vais vous présenter les principales :

		strlen pour calculer la longueur d'une chaîne.

		strcpy pour copier une chaîne dans une autre.

		strcat pour concaténer 2 chaînes.

		strcmp pour comparer 2 chaînes.

		strchr pour rechercher un caractère.

		strpbrk pour rechercher le premier caractère de la liste.

		strstr pour rechercher une chaîne dans une autre.

		sprintf pour écrire dans une chaîne.
	*/
	int lengueurPrenom = strlen(prenom);
	printf("Lengueur du prenom: %d\n", lengueurPrenom);

	return 0;
}
