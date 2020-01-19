


// include de libexterieurs
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
//#include "struct.c"
#include <ctype.h>


//Variables Globales et enum

FILE *source, //fichier d'entrÃ© 
 *target = NULL; // fichier de sortie
char c;
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

char tokenValue[50];


//Prototypes.
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


//


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
// #include "./../fonctions/.c"
// #include "./../fonctions/.c"
// #include "./../fonctions/.c"