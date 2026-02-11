#include <stdio.h>
#include <stdlib.h>


//structure

typedef struct Coordonnees Coordonnees;
struct Coordonnees
{
	int x;
	int y;
};


int main(int argc, char *argv[])
{

// Trouvez la taille d'une variable em fonction de son type

printf("int : %ld octets\n", sizeof(int));
printf("char : %ld octets\n", sizeof(char));
printf("long : %ld octets\n", sizeof(long));
printf("double : %ld octets\n", sizeof(double));
printf("Coordonnees : %ld octets\n", sizeof(Coordonnees));

// Allouez manuellement de la memoire au systeme
// malloc: demande au systeem dexploitation la permision dutiliser de la memoire.
// free: pour liberee de la place dans la memoire.

int* memoireAllouee = NULL; // On cree un pointeur sur int
int* ageAmis = NULL;
int nombreDAmis = 0, i = 0;
memoireAllouee =  malloc(sizeof(int)); // La fonction malloc inscrit dans notre pointeur ladresse qui a ete reservee.

// Verifier si lallocation a reussi ou pas...
if(memoireAllouee != NULL)
{

	printf("L'allocation a marche\n");
}
else
{
	printf("Erreur : l'allocation a echoue...\n");
	exit(0);// on arrete immediatement un programme 
}
// A partie d'ici on peux continue le programe normalement.
printf("Quelle age avez vous ? ");
scanf("%d", memoireAllouee);// dans scanf pas besoin dindique que c'est un ponteur *
printf("Vous avez %d ans!\n", *memoireAllouee);//chez printf il faux metre un * sur le pointeur

printf("Combien d'amis tu a ?");
scanf("%d", &nombreDAmis);

if (nombreDAmis > 0) // Il faut qu'il ait au moins un ami (je le plains un peu sinon :p)
    {
        ageAmis = malloc(nombreDAmis * sizeof(int)); // On alloue de la mémoire pour le tableau/cree un tableau de int ayant une taille egale a som mombre damis(via malloc)
        if (ageAmis == NULL) // On vérifie si l'allocation a marché ou non
        {
            exit(0); // On arrête tout
        }

        // On demande l'âge des amis un à un
        for (i = 0 ; i < nombreDAmis ; i++)
        {
            printf("Quel age a l'ami numero %d ? ", i + 1);
            scanf("%d", &ageAmis[i]);
        }

        // On affiche les âges stockés un à un
        printf("\n\nVos amis ont les ages suivants :\n");
        for (i = 0 ; i < nombreDAmis ; i++)
        {
            printf("%d ans\n", ageAmis[i]);
        }


	// On peut utiliser ici la memoire

	free(memoireAllouee); // On n'a plus besoin de la memoire, on la libere
    }




return 0;
}
