#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "./../headers/automate.h"


int main(int argc, char const *argv[]) 
{
    // Ouvre le fichier test.txt en lecture seulement
    // (le fichier doit exister) :
     int i = 0;
    source = fopen("./../test2.txt", "r");

    if (source == NULL)
    {
        printf("Impossible d'ouvrir le fichier source\n");
        return -1;
    }
    c = fgetc(source); // lecture du caractere suivant du fichier source
    while(c!=EOF) //&& i<50)
    {

        Scanner();
        i++;
        printf("\n %d %s a%ca \n", token, tokenValue, c);

    }
    if (source != NULL)
    {fclose(source); // fermeture du fichier source
    return 0;}
}