
// // // COSMETIQUE


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
void initTokenValue();


//


#include "./../fonctions/initTokenValue.c"
#include "./../fonctions/scanner.c"

// #include "./../fonctions/.c"
// #include "./../fonctions/.c"
// #include "./../fonctions/.c"
// #include "./../fonctions/.c"