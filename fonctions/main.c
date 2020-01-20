#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "./../headers/automate.h"

char c; // caractère en cours de lecture


int main(int argc, char const *argv[]) 
{
    // Ouvre le fichier test.txt en lecture seulement
    // (le fichier doit exister) :
    source = fopen("test2.txt", "r");
    // Cree et ouvre un fichier tmp.html en lecture/ecriture,
    // avec suppression du contenu au prealable :
    //remove("target.html");
    target = fopen("target.html", "w+");
    if (source == NULL)
    {
        printf("Impossible d'ouvrir le fichier source\n");
        return -1;
    }
    if (target == NULL)
    {
        printf("Impossible d'ouvrir le fichier target\n");
        return -1;
    }
  

    fputs("<!DOCTYPE HTML PUBLIC -//W3C//DTD HTML 4.01//EN http://www.w3.org/TR/html4/strict.dtd>", target);

    c = fgetc(source); // lecture du 1er caractere du fichier source
  

    Analyse_axiome();


    if (source != NULL)
    {
        fclose(source); // fermeture du fichier source
    }
    if (source != NULL)
    {
        fclose(source); // fermeture du fichier source
    }
    return 0;
}
