// include de libexterieurs
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <ctype.h>

//Variables Globales et enum

typedef enum TokenType
{
    MOTCLE_T,
    MOTCLE_A,
    SECTION,
    SSECTION,
    NOUV_PARA,
    MOT,
    END
}TokenType;

TokenType token;
FILE* source; //fichier d'entrée 
FILE* target = NULL; // fichier de sortie
char c; // caractère en cours de lecture
char tokenValue[50]; // mot en cours de lecture
int compteurSection = 64;  //garde en mémoire le decompte des sections
int compteurSSection = 0; //garde en mémoire le decompte des sous sections

// Declaration des tableaux de caracteres a inserer dans le html
char ouvrirBaliseHead[] = "\n<head>\n";
char fermerBaliseHead[] = "\n</head>\n";
char ouvrirBaliseTitre[] = "\n<title>\n";
char fermerBaliseTitre[] = "\n</title>\n";
char ouvrirBaliseAuteur[] = "\n<meta name=\"author\" content=\"";
char fermerBaliseAuteur[] = "\">\n";
char ouvrirBaliseH1[] = "\n<h1>\n";
char fermerBaliseH1[] = "\n</h1>\n";
char ouvrirBaliseP[] = "\n<p>\n";
char fermerBaliseP[] = "\n</p>\n";
char ouvrirBaliseBody[] = "\n<body>\n";
char fermerBaliseBody[] = "\n</body>\n";
char ouvrirPage[] = "\n<html>\n";
char fermerPage[] = "\n</html>\n";
char ouvrirBaliseH2[] = "\n<h2>\n";
char fermerBaliseH2[] = "\n</h2>\n";


//Prototypes de fonctions.
int Scanner();
int initTokenValue();
int Analyse_axiome();
int Analyse_BODY();
int Analyse_H1();
int Analyse_H2();
int Analyse_P();
int Analyse_HEAD();
int Analyse_S1();
int Analyse_S2();
int Analyse_TEXT();


//Fichier définissant les fonctions
#include "./../fonctions/initTokenValue.c"
#include "./../fonctions/scanner.c"
#include "./../fonctions/Analyse_axiome.c"
#include "./../fonctions/Analyse_BODY.c"
#include "./../fonctions/Analyse_HEAD.c"
#include "./../fonctions/Analyse_S1.c"
#include "./../fonctions/Analyse_S2.c"
#include "./../fonctions/Analyse_H1.c"
#include "./../fonctions/Analyse_H2.c"
#include "./../fonctions/Analyse_P.c"
#include "./../fonctions/Analyse_TEXT.c"