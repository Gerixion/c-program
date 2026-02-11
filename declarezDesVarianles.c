#include <stdio.h>
#include <stdlib.h>
unsigned int nombreDeLecteursEnTrainDeLireUnNomDeVariableUnPeuLong;
/*voici different type de variable*/
signed char c = 18;
int age = 0;
long codePostal = 9300;
double score =  75.5;
//function main qui declare des variable.
int main (int argc, char * argv[])
{
	
	int nombreDeVies = 5 ;
	//on declare une variable constante(une variable qui ne bouge pas)
	const int ID = 489657868;//les nom de constante son ecrit en majuscules.
	//la manier dimprimer plusieur variable dans le bon ordre.
	printf("ID du joueur: %d\n\nNombre de vie: %d\n\n", ID, nombreDeVies);
	/*
	* %d = int
	* %u = unsigned(naccepte pas les nombre negatif, mes peus recevoir des tres grand nombre) char,int,long
 	* %ld = long
	* %f = float
	* %f = double
	*/
	printf("Queelle age a tu: ");
	scanf("%d", &age);
	/*
	* pour scanf float on utulise %f, et pour double on utulise %lf
	*/
	printf("\n\nAah vous avez donc: %d ans!!\n\n", age);
	return 0;

}
