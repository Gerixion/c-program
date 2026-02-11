#include <stdlib.h>
#include <stdio.h>

int main (int argc, char *argv[])
{
	
	 char nom[20] = {0};

	printf("Quel est votre nom ?");
	scanf("%s", nom);
	printf("Ah! Vous vous appelez donc %s !\n\n", nom);




	return 0;
}
