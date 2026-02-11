#include <stdio.h>
#include <stdlib.h>

#define TAILLE_MAX 1000 //tableau de taille 1000

int main(int argc, char *argv[])
{

//Ouvrez un fichier avec fopen

FILE* fichier = NULL; //file avec * vue que cest un pointeurd sur le fichier. toujour initialiser un pointeur a NULL si on a pas de valeur a lui donner.

// fermeture du fichier
int fermeture;

//age de lutulisateur
int age = 27;

// le caractere actuel enm utulisant fgetc
int caractereActuel = 0;

char chaine[TAILLE_MAX] = ""; // Chaine vide de TAILLE_MAX

int score[3] = {0}; //tableaux avec les 3 mellieur scores "fscanf();"
/*
*** Les diferent mode douverture ***
- r: lecture seule "le fichier dois etre cree"
- w: Ecriture seule
- a: mode d'ajout "uniquement a la fin"
- a+: ajout en lecture/ecriture a la fin
- r+: lecture et ecriture "le fichier dois etre cree"
- w+: lecture et ecriture, avec suppression du contenu au prealable
*/

//code suivant ouvre un fichier en mode lecture et ecriture

fichier = fopen("test.txt", "w");//ouvrire le fichier en mode ecriture
// sous dossier fopen("souDossier/test.txt", "r+");

//ouvrir un fichier nimporte ou dans le disque dure.
//fopen("C: \\User\\Steve Andy\\c-programe\\test.txt","r+");

//code pour verifier si un fichier a etes ouver correctement.
if( fichier == NULL)
{
	printf("Impossible d'ouvrir le fichier test.txt\n");
}
else
{
	printf("L'ouverture du fichier test.txt a reussi\n");
	
	//ici tu ajoute tout ce aue tu veux lire ou ecrire dans le fichie...
	
	//ecrire dans le fichier...
	/*
		- fputc(); ecrit just eun caractere dans le fichier (Un caracter  a la fois)
		- fputs(); ecrit une chaine de caractere dans le fichier
		- fprintf(); ecrit une chaine formatee dans le fichier.
	*/
	
	fputc('I', fichier);
	
	fputs("\nCC je suis fputs.\nSteve aprend le language C.\nfin du fputs!\n",fichier);
	
	fprintf(fichier, "Debut de fprintf:\nLutulisateur a %d ans.\nFin de fprintf.\n", age);
	
	
	fermeture = fclose(fichier);
	
	if(fermeture == EOF)
	{
		printf("Erreur de fermeture du fichier test.txt.\n");
	}
	else
	{
		printf("Le fichier test.txt c'est fermer correctement.\n");
	}
	
//-----------------------------------------------------------------------------------------------------------------//

	//lire dans un fichier
	/*
		- fgetc(); lire un caractere dans un fichier.
		- fgets(); lire une chaine de caractere dans un fichier.
		- fscanf(); lit une chaine "formatee" dans un fichier.
	*/	

	//fichier = fopen("test.txt", "r");//ouvrire le fichire en mode lectur sauf pour fscanf();



	// fgetc();

	/*do{

		caractereActuel = fgetc(fichier);// La fonction fgetc retourne un int c'est le caractere aui a ete lu, si non EOF si il ne lit plus de caractere.
		printf("%c", caractereActuel);// On afiche le caractere
	}while(caractereActuel != EOF);// On continue tant que fgetc n'a pas retourne EOF (fin de fichier)
	
	printf("\n\n");*/



	// fgets();

	/*while(fgets(chaine, TAILLE_MAX, fichier) != NULL) // il vas lire la TAILLE_MAX caractere du fichier, on stocke le tout dans "chaine"(Array de chaine).
							 // while lit le fichie tant qu'on ne recoit pas d'erreur (Null).	
	{
		printf("%s", chaine);// On affiche la chaine.
	}*/

	
	
	// fscanf();
	
	fichier  = fopen("score.txt","r");
	
	fscanf(fichier, "%d %d %d", &score[0], &score[1], &score[2]);
	printf("Les meilleurs scores sont: %d, %d et %d\n", score[0], score[1], score[2]);
	

	//apres avoir finis de travailler avec un fichier il faux le fermez.

	fermeture = fclose(fichier);

	// est toujour verrifier si il cest bien fermez 0  = fermeture reussi / EOF = fermeture echoue.
	
	if(fermeture == 0)
	{
		printf("Le fichier test.txt c'est fermer correctement.\n");
	}
	else
	{
		printf("Erreur de fermeture du fichier test.txt.\n");
	}


/*
ftell indique à quelle position vous êtes actuellement dans le fichier.

fseek positionne le curseur à un endroit précis.

rewind remet le curseur au début du fichier (c'est équivalent à demander à la fonction fseek de positionner le curseur au début).
SEEK_SET  : indique le début du fichier ;

SEEK_CUR  : indique la position actuelle du curseur ;

SEEK_END  : indique la fin du fichier.


rename renomme un fichier ;
int rename(const char* ancienNom, const char* nouveauNom);

remove  supprime un fichier.
int remove(const char* fichierASupprimer);

*/



}










return 0;
}
