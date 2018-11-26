#include <stdio.h>
#include <stdlib.h>

int main ()
{
 int somme = 0, nb1 = 0, nb2 = 0, nb3 = 0; // Données de base
 printf("Calculatrice\n");
 printf("Valeur du premier nombre ?");
 scanf("%d", &nb1);
 printf("Valeur du second nombre ?");
 scanf("%d", &nb2);
 printf("Valeur du troisieme nombre ?");
 scanf("%d", &nb3);
 somme = nb1 + nb2 + nb3;
 printf("%d+%d+%d=%d", nb1, nb2, nb3, somme);
 return 0;

}


