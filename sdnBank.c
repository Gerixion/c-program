#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>// pour ajoute la fonction sleep
#include "typedefSDNBank.h"
#include <time.h>
#include <string.h>
Client creationDunClient();
void printLogo();
void menu();
void menuDeDeppart();
void menuFinal();

int main(int argc , char * argv[])
{ 
	
	printf("\033[2J\033[H");
	//printf("Hello steve.\n");
	//sleep(3); //pause de 3 secondes
	//printf("\033[2J\033[H");
	//printf("comment tu vas\n"
	int choix;
	menuDeDeppart();
	scanf("%d", &choix);
	switch(choix)
	{
		case 1:
			Client client = creationDunClient();
			menuFinal();
			break;
		case 2:
			printf("\033[2J\033[H");
			printf("\033[2J\033[H");
			printLogo();
			printf("               BYE BYE!!\n\n");
			sleep(1.5);
			break;

	}
	
	return 0;
}
void menuDeDeppart()
{
	printLogo();
	printf("               ===MENU===\n               1. Devenir client.\n               2. Exit.\n\n");
}
void menuFinal()
{
	printLogo();
	printf("               -BIENVENUE-\n               ===MENU===\n               1. Supprimer mon compte.\n               2. Depot.\n               3. Retrait.\n               4. Demande de pres.\n               5. Exit.\n\n");
}

void printLogo()
{
	 printf("                ----------\n               |          |\n               | SDN BANK |\n               |          |\n                ----------\n\n\n");
}

Client creationDunClient()
{
	printf("\033[2J\033[H");
        Client c1;

	// Demande de nom au client.
	printLogo();
	printf("Quelle et votre nom?\n");
	scanf("%s",c1.nom);
	printf("\033[2J\033[H");
	
	// Demande de prenom au client.
	printLogo();
	printf("Quelle et votre prenom?\n");	
	scanf("%s",c1.prenom);
	printf("\033[2J\033[H");
	
	// Demande d'age au client.
	printLogo();
	printf("Quelle age avez vous?\n");
	scanf("%d",&c1.age);
	printf("\033[2J\033[H");
	
	// Demande de mot de passe au client
	printf("Ecrive le mot de passe pour entre dans votre Compte Bancaire...\n");
	scanf("%s", c1.motDePasse);
	printf("\033[2J\033[H");

	// Cree un ID/Numero Client alleatoire.
	srand(time(NULL)); // Initialise le generateur (IMPORTANT)
        printLogo();
	printf("Chargement /........../ 0%%\n");
	sleep(1.5); // pause de 1.5 seconde
	printf("\033[2J\033[H");
	
	printLogo();
	printf("Chargement /==......../ 25%%\n");
	for(int i = 0; i < 4; i++)
        {
                 c1.idNumeroClient[i] = rand() % 10 + '0'; // + '0' convertir int en caractere
        }
	c1.idNumeroClient[4] = '\0'; // termine la chaine
	printf("%s\n", c1.idNumeroClient);
        sleep(1.5); // pause de 1.5 seconde
	printf("\033[2J\033[H");

	// Cree un IBAN alleatoire.
	printLogo();
	printf("Chargement /=====...../ 50%%\n");
        srand(time(NULL)); // Initialise le generateur (IMPORTANT)
	c1.iban[0] = 'B';
	c1.iban[1] = 'E';
        for(int i = 2; i < 16; i++)
        {
                 c1.iban[i] = rand() % 10 + '0'; // + '0' convertir int en caractere
        }
        c1.iban[16] = '\0'; // termine la chaine
	printf("%s\n", c1.iban);	
	sleep(1.5); // pause de 1.5 seconde
	printf("\033[2J\033[H");

	// Cree un numero de carte alleatoire
	printLogo();
        printf("Chargement /=======.../ 75%%\n");
        srand(time(NULL)); // Initialise le generateur (IMPORTANT)
        for(int i = 0; i < 16; i++)
        {
                 c1.numeroDeCarte[i] = rand() % 10 + '0'; // + '0' convertir int en caractere
        }
        c1.numeroDeCarte[16] = '\0'; // termine la chaine
        printf("%s\n", c1.numeroDeCarte);
	sleep(1.5); // pause de 1.5 seconde
	printf("\033[2J\033[H");

	// Initiallise la balance a 0
	printLogo();
        printf("Chargement /==========/ 100%%\n");
	c1.balance = 0;
	sleep(1.5); // pause de 2 seconde
	printf("\033[2J\033[H");

	return c1;
}
