typedef struct Personne Personne;	
//typedef indique que nous allons creer un alias de structure
//gace a ca plus besoin decrire struct dans main pour decralre une variable de type que jai moi mem cree.



//utuliser des enumeratiom
typedef enum Volum Volum;

enum Volume {

	FAIBLE = 10, MOYEN = 50, FORT = 100 //on declare les valeur constante que lenumeratiom peux avoir.
			   // Une énumération est un type de variable personnalisé qui peut seulement prendre une des valeurs prédéfinies : FAIBLE  , MOYEN ou FORT   , par exemple.

};//noublie pas les ;


struct Personne
 
{
         char nom[100];
         char prenom[100];
         char adresse[1000];

         int age;
         int etudiant; // Booleen : 1 = etudiant, 0 = nom etudian
 };
