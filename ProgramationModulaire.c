#include <stdio.h>
#include <stdlib.h>

//Annoncez une fonction à l'aide d'un prototype

double aireRectangle(double largeur, double hauteur);// en metan un prototypes on peur ecrire notre fonction a la fin du main.

int main(int argc, char *argv[])
{   
    printf("Rectangle de largeur 5 et hauteur 10. Aire = %f\n", aireRectangle(5, 10));
    printf("Rectangle de largeur 2.5 et hauteur 3.5. Aire = %f\n", aireRectangle(2.5, 3.5));
    printf("Rectangle de largeur 4.2 et hauteur 9.7. Aire = %f\n", aireRectangle(4.2, 9.7));
   
    return 0;
}

// Notre fonction aireRectangle peut maintenant être mise n'importe où dans le code source :
double aireRectangle(double largeur, double hauteur)
{
    return largeur * hauteur;
}
