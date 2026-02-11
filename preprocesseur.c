#include <stdio.h>
#include <stdlib.h>

#define WINDOWS

#ifdef WINDOWS
    /* Code source pour Windows */
#endif

#ifdef LINUX
    /* Code source pour Linux */
#endif

#ifdef MAC
    /* Code source pour Mac */
#endif

#define  TAILLE_MAX	1000 //#define permet de définir une constante de préprocesseur, autrement dit, d'associer une valeur à un mot.
#define  TAILLE_MIN	500
#define  TAILLE_MOY	((TAILLE_MAX + TAILLE_MIN)/2)
#define CONSTANTE // on peud definir une constante sans presiser de valeur.

#define COUCOU() printf("COUCOU Steve!\n\n");// Macro simple: Remplace COUCOU() part printf(COUCOU Steve!\n\n)

#define VERIFIELAMOYENNE(moyenne) if(moyenne > 700)\       // on peux donn
					printf("La Moyenne est plus grandei que 700.\n\n") 
/*
__LINE__ donne le numéro de la ligne actuelle.

__FILE__ donne le nom du fichier actuel.

__DATE__ donne la date de la compilation.

__TIME__ donne l'heure de la compilation.

Ces constantes peuvent être utiles pour gérer des erreurs, en faisant par exemple ceci :

*/
#if (TAILLE_MAX == 1000)	printf("Taille max: 1000")

#elif

#endif

// Évitez les inclusions infinies grâce à #ifndef
 
#ifndef DEF_NOMFICHIER // Si la constante n'a pas été définie le fichier n'a jamais été inclus


#define DEF_NOMDUFICHIER // On définit la constante pour que la prochaine fois le fichier ne soit plus inclus

#endif

int main(int argc, char * argv[]){

printf("Erreur a la ligne %d du fichier %s\n", __LINE__, __FILE__);
printf("Ce fichier a ete compile le %s a %s\n", __DATE__, __TIME__);

char chaine1 [TAILLE_MAX], chaine2 [TAILLE_MAX];
int moyenne = TAILLE_MOY;


COUCOU() // lappel de la macro ne nesisite pas de ; a la fin.
VERIFIELAMOYENNE(moyenne);

printf("Taile moyenne est de: %d\n", moyenne);

}
