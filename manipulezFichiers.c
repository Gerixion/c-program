#include <stdio.h>
#include <stdlib.h>



int main (int argc, char * argv[]){

	FILE* fichier = NULL;//initialiser toujour un pointeur a NULL si vous lutuliser pas imediatement.
	int age = 0;
	int caractereActuel = 0;
	fichier = fopen("test.txt", "r+");// on lit et ecrit dans le fichier

	//fichier = fopen("dossier/test.txt", "r+");   //sous dossier.
	//fichier = fopen("C:\\Program Files\\Notepad++\\readme.txt", "r+"); //chemin absolut important les double \\ antislashs. 
		
	
	if(fichier != NULL){
	
		printf("Ouverture a reussi!!\n\n");
		
	
		//fputc('A', fichier);// on ecrit le caractere A dans le document test.txt
	
		//fputs("\nBonjour a tous!\nCeci est le premier fichier que je manipule via une fonction.\n\n", fichier);// permet dajouter une chaine de charactere dans un fichier.
		
		//printf("Quelle age avez vous?\n");

                //scanf("%d", &age);

		//fprintf(fichier,"Le createur de ce fichie a %d ans!\n", age);//permet dimprimer le resulta dune variable dans un fichier.


		/*
		fputc écrit un caractère dans le fichier (UN SEUL caractère à la fois).

		fputs écrit une chaîne dans le fichier.

		fprintf écrit une chaîne formatée dans le fichier.
		*/
		
		/*
		fgetc lit un caractère.

		fgets lit une chaîne.

		fscanf lit une chaîne "formatée".
		
		*/
		do
		{
		
			caractereActuel = fgetc(fichier);// On lit le caractere
			printf("%c", caractereActuel);// On l'affiche
		}while(caractereActuel != EOF); // On continue tant que fgetc na pas retour

	
		int fermer = fclose(fichier);// on ferme le fichier qui a ete ouvert.
		
		if(fermer == 0){
			printf("Fichier fermez avec succes: %d\n", fermer);
		}
		else{
			printf("Erreur: %d du fichie test.txt\n", fermer);
		}
		
	}
	else{

		printf("Ereur: Louverture na pas reussi.\n\n");
	}
	
	
	
	return 0;


}

/*
"r"  : lecture seule. Vous pourrez lire le contenu du fichier, mais pas y écrire. Le fichier doit avoir été créé au préalable.

"w"  : écriture seule. Vous pourrez écrire dans le fichier, mais pas lire son contenu. Si le fichier n'existe pas, il sera créé.

"a"  : mode d'ajout. Vous écrirez dans le fichier, en partant de la fin du fichier. Vous ajouterez donc du texte à la fin du fichier. Si le fichier n'existe pas, il sera créé. Ce mode d'ajout peut être utile si vous voulez seulement ajouter des informations à la fin du fichier.

"a+"  : ajout en lecture / écriture à la fin. Vous écrivez et lisez du texte à partir de la fin du fichier. Si le fichier n'existe pas, il sera créé.

"r+"  : lecture et écriture. Vous pourrez lire et écrire dans le fichier. Le fichier doit avoir été créé au préalable.

"w+"  : lecture et écriture, avec suppression du contenu au préalable. Le fichier est donc d'abord vidé de son contenu, vous pouvez y écrire, et le lire ensuite. Si le fichier n'existe pas, il sera créé.
*/



/*
 Lisez une chaîne avec fgets

#define TAILLE_MAX 1000
 
int main(int argc, char *argv[])
{
    FILE* fichier = NULL;
    char chaine[TAILLE_MAX] = "";
 
    fichier = fopen("test.txt", "r");
 
    if (fichier != NULL)
    {
        while (fgets(chaine, TAILLE_MAX, fichier) != NULL) // On lit le fichier tant qu'on ne reçoit pas d'erreur (NULL)
        {
            printf("%s", chaine); // On affiche la chaîne qu'on vient de lire
        }
 
        fclose(fichier);
    }
 
    return 0;
}
test github
*/
