#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "./../headers/automate.h"


int main(int argc, char const *argv[]) 
{
    // Ouvre le fichier test.txt en lecture seulement
    // (le fichier doit exister) :
    source = fopen("./../test2.txt", "r");

    if (source == NULL)
    {
        printf("Impossible d'ouvrir le fichier source\n");
        return -1;
    }
    c = fgetc(source); // lecture du caractere suivant du fichier source
    while(c!=EOF)
    {

        Scanner();
        printf("\n %d %s \n", token, tokenValue);

    }
    if (source != NULL) fclose(source); // fermeture du fichier source
    return 0;
}