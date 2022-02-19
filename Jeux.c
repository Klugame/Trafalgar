#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>




int main(void)
{
    char nom[255];
    char OuiNon1[255];
    char OuiNon2[] = "Oui";

    printf("Quel est votre prénom ? ");

    if (scanf("%254s", nom) != 1)
    {
        printf("Erreu#r lors de la saisie\n");
        return EXIT_FAILURE;
    }

    printf("Bien le bonjour %s !\n", nom);

    printf("Vous m'avez l'air bien timide jeune étranger ! vous avez besoin d'aide ? \n");  
    scanf("%254s", OuiNon1  ) ;
    if (strcmp(OuiNon1,OuiNon2) != 0) {
        printf("Que vous arrive t-il ? \n");



    }
    printf("Je viens d'Enduroi, une petite contré non loin de Trafalgar. Dites-vous.\net je cherche un travail pour faire vivre ma famille.\n");
    sleep(2);
    printf("Je vois, il me semble que j'ai de la famille la bas.");
    sleep(1);
    printf("Vous les conaissait peut-être !\n Ils s'appelle Jean Paul et François.\n");
    sleep(2);
    printf("Oui effectivement ça me dit un truc");




    return 0;
}