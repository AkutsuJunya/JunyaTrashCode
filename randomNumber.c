#include <stdio.h> //Nombre de tentatives + mode deux joueurs scanf + niveaux
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int nombreMystere = 0, nombreInput = 0, nombreTentative = 0, nombreJoueur = 0, niveau = 0;// On declare la variable
    int MAX , MIN; //On declare les valeurs min et max de nombreMystere

    printf("=== PLUS OU MOINS===\n\n");
    printf("NIVEAU 1 - EASY\n");
    printf("NIVEAU 2 - MEDIUM\n");
    printf("NIVEAU 3 - HARD\n\n");
    printf("Veuillez choisir un niveau : \n");
    scanf("%d", &niveau);
    printf("Vous avec choisi le niveau %d \n\n", niveau);
    printf("Selectionnez le nombre de joueurs\n\n");
    printf("Mode 1 joueur\n");
    printf("Mode 2 joueurs\n");
    scanf("%d", &nombreJoueur);
    printf("Vous avec choisi le mode %d joueur(s)\n", nombreJoueur);

    srand(time(NULL)); //SetRANDom permet d'intialiser le generateur de nombre random
    //La fonction rand() permet de lancer le generateur initié par srand
    //myVar = randomNumber entre 100 et 1

    if (nombreJoueur == 1 && niveau == 1)

        {
           int MAX = 100, MIN = 1;
           nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

            do //if possible pendant une boucle
        {
        printf("Quel est le nombre ? ");
        scanf("%d", &nombreInput);

        if(nombreMystere > nombreInput)
               {
                printf("C'est plus !\n\n");
                nombreTentative++;
               }
            else if (nombreMystere < nombreInput)
                {
                printf("C'est moins !\n\n");
                nombreTentative++;
                }
            else
                printf("Bravo, vous avez trouve le nombre mystere !!!\n\n");
                printf("= %d tentatives.\n\n", nombreTentative);
        } while(nombreInput != nombreMystere);
        }

    else if (nombreJoueur == 1 && niveau == 2)
    {
        int MAX = 500, MIN = 100;
        nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

        do
        {
        printf("Quel est le nombre ? ");
        scanf("%d", &nombreInput);

        if(nombreMystere > nombreInput)
            {printf("C'est plus !\n\n");
            nombreTentative++;}
            else if (nombreMystere < nombreInput)
                {printf("C'est moins !\n\n");
                nombreTentative++;}
            else
                printf("Bravo, vous avez trouve le nombre mystere !!!\n\n");
                printf("= %d tentatives.\n\n", nombreTentative);
        } while(nombreInput != nombreMystere);

    }

    else if (nombreJoueur == 1 && niveau == 3)
    {
        int MAX = 1500, MIN = 500;
        nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

        do
        {
        printf("Quel est le nombre ? ");
        scanf("%d", &nombreInput);

        if (nombreMystere > nombreInput)
            {printf("C'est plus !\n\n");
            nombreTentative++;}
            else if (nombreMystere < nombreInput)
                {printf("C'est moins !\n\n");
                nombreTentative++;}
            else
                printf("Bravo, vous avez trouve le nombre mystere !!!\n\n");
                printf("= %d tentatives.\n\n", nombreTentative);
         }while(nombreInput != nombreMystere);

    }
    else if (nombreJoueur ==2)
        {
        printf("\nVous avez choisi le mode 2 joueurs\n\n");
        printf("Joueur 1 : A toi de choisir un nombre mystere.\n");
        printf(".....\n");
        scanf("%d", &nombreMystere);
        printf("Ton nombre mystere est enregistre.\n\n");
        printf("Bonne chance joueur 2.\n\n");

        do
        {
        printf("Quel est le nombre ? ");
        scanf("%d", &nombreInput);

        if (nombreMystere > nombreInput)
            {printf("C'est plus !\n\n");
            nombreTentative++;}
            else if (nombreMystere < nombreInput)
                {printf("C'est moins !\n\n");
                nombreTentative++;}
            else
                printf("Bravo, vous avez trouve le nombre mystere !!!\n\n");
                printf("= %d tentatives.\n\n", nombreTentative);
        } while(nombreInput != nombreMystere);
        }

    return 0;
}
