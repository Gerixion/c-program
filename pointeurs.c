#include <stdio.h>
#include <stdlib.h>

int main (int argc , char *argv[])
{
	
	
	int age = 27;
	printf("Age: %d\n\n", age);
	
	printf("Adresse age: %p\n\n", &age);

	// Creation dun pointeur
	
	int *pointeurSurAge = &age;//un pointeur on linitialiser en utulisant la valeur "NULL"
	//au lieux de 0.

	printf("Adresse de la variable age via le pointeur sur age: %p\n\n", pointeurSurAge);
	
	printf("Valeur de la variable age via le  pointeur sur age: %d\n\n", *pointeurSurAge);



}

