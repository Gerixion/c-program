#include <stdio.h>
#include <stdlib.h>

void bonjour()
{
	printf("\nBonjour!!\n");
}

int triple(int nombre)
{
	return nombre * 3;
}
int menu()
{
    int choix = 0;
    
    while (choix < 1 || choix > 4)
    {
        printf("Menu :\n");
        printf("1 : Poulet de dinde aux escargots rotis a la sauce bearnaise\n");
        printf("2 : Concombres sucres a la sauce de myrtilles enrobee de chocolat\n");
        printf("3 : Escalope de kangourou saignante et sa gelee aux fraises poivree\n");
        printf("4 : La surprise du Chef (j'en salive d'avance...)\n");
        printf("Votre choix ? ");
        scanf("%d", &choix);
    }    
    
    return choix;
}

int main (int argc, char * argv[])
{	
	int nombreEntre = 0, nombreTriple = 0;
	
	bonjour();
	
	printf("Entre un nombre: ");
	
	scanf("%d", &nombreEntre);
	
	nombreTriple = triple(nombreEntre);
	
	printf("Le triple du nombre que vous avez entre est: %d\n\n", nombreTriple);

	switch (menu())
    {
        case 1:
            printf("Vous avez pris le poulet\n");
            break;
        case 2:
            printf("Vous avez pris les concombres\n");
            break;
        case 3:
            printf("Vous avez pris l'escalope\n");
            break;
        case 4:
            printf("Vous avez pris la surprise du Chef. Vous etes un sacre aventurier dites donc !\n");
            break;    
    }
       


	return 0;
}
