#include <stdio.h>
#include <stdlib.h>
#include "lire.h"


long lireLong()
{
	//exemple
	// long i;
 
	// i = strtol( "148", NULL, 10 ); // i = 148
	// i = strtol( "148.215", NULL, 10 ); // i = 148
	// i = strtol( "   148.215", NULL, 10 ); // i = 148
	// i = strtol( "   148+34", NULL, 10 ); // i = 148
	// i = strtol( "   148 feuilles mortes", NULL, 10 ); // i = 148
	// i = strtol( "   Il y a 148 feuilles mortes", NULL, 10 ); // i = 0 (erreur : la chaîne ne commence pas par un nombre)
	
	char nombreTexte[100] = {0};

	if (lire(nombreTexte, 100))
	{
		// Si lecture du texte ok, convertir le nombre en long et le retourner
		return strtol(nombreTexte,NULL,10);
	}
	else
	{
		// Si probleme de lecture, renvoyer 0
		return 0;
	}
}
