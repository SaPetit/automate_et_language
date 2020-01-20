#include "./../headers/automate.h"

int main(int argc, char const *argv[]) 
{
    // Ouvre le fichier source.txt en lecture seulement
    // (le fichier doit exister) :
    source = fopen("source.txt", "r");
    // Cree et ouvre un fichier tmp.html en lecture/ecriture,
    // avec suppression du contenu au prealable :

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
    fputs("<!DOCTYPE HTML PUBLIC -//W3C//DTD HTML 4.01//EN http://www.w3.org/TR/html4/strict.dtd>", target); //Insertion du doctype dans le fichier cible

    c = fgetc(source); // Lecture du 1er caractere du fichier source
    Analyse_axiome(); // Lancement de l'analyseur syntaxique
    if (source != NULL)
    {
        fclose(source); // Fermeture du fichier source
    }
    if (source != NULL)
    {
        fclose(source); // Fermeture du fichier source
    }
    return 0;
}
