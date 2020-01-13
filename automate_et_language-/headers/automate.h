
// // // COSMETIQUE


// include de libexterieurs
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include "struct.c"
#include <ctype.h>


//Variables Globales et enum

FILE *source, //fichier d'entrÃ© 
 *target = NULL; // fichier de sortie
char c;
enum TokenType
{
    MOTCLE_T,
    MOTCLE_A,
    SECTION,
    SSECTION,
    NOUV_PARA,
    MOT,
    END
}token;

char tokenValue[50];


//Prototypes.
int Scanner();


//



#include "./../fonctions/scanner.c"
// #include "./../fonctions/.c"
// #include "./../fonctions/.c"
// #include "./../fonctions/.c"
// #include "./../fonctions/.c"
// #include "./../fonctions/.c"