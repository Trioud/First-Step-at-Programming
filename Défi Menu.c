#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int choix = 0;
printf("=== Menu ===\n");
printf("1. Royal Cheese\n");
printf("2. Mc Deluxe\n");
printf("3. Mc Bacon\n");
printf("4. Big Mac\n");
printf("Votre choix ?");
scanf("%d", &choix);
switch(choix)
{
case 1:
    printf("Vous avez choisi le menu Royal Cheese");
    break;
case 2:
    printf("Vous avez choisi le menu Mc Deluxe");
    break;
case 3:
    printf("Vous avez choisi le menu Mc Bacon");
    break;
case 4:
    printf("Vous avez choisi le menu Big Mac");
    break;
default:
    printf("Il n'y a pas de menu correspondant a votre choix");
    break;
}
}




