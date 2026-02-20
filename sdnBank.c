#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>// pour ajoute la fonction sleep

int main(int argc , char * argv[])
{ 
	
	printf("\033[2J\033[H");
	printf("Hello steve.\n");
	sleep(3); //pause de 3 secondes
	printf("\033[2J\033[H");
	printf("comment tu vas\n");

}
