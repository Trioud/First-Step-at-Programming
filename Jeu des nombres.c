#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
     srand(time(NULL));
     const int MAX = 100, MIN = 1;
   int Mystere = (rand() % (MAX - MIN + 1)) + MIN;
    int Nb_joueur = 0;


   while (Nb_joueur != Mystere)
   {


    printf("Devinez le mysterieux nombre !  ");
    scanf("%d", &Nb_joueur);
    if (Mystere < Nb_joueur)

    {
        printf("Le nombre mystere est inferieur\n");
    }
    else if (Mystere > Nb_joueur)
    {
        printf("Le nombre mystere est superieur\n");
    }
    else if (Mystere == Nb_joueur)
    {
        printf("Bravo vous avez trouve le nombre mystere !\n");
    }
    else
    {
        printf("Ce n'est pas un nombre valide !\n");

    }
   }
}
