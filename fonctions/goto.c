char c;
enum TokenType
{
    MOTCLE_T,
    MOTCLE_A,
    SECTION,
    SSECTION,
    NOUV_PARA,
    MOT,
    FIN
}token;

char tokenValue[50];




// A : // cas d’un état non final
// if (c == ’>’) {c = fgetc(source); goto B; }
// // fgetc() avant le goto car B n’est pas final
// If (c == EOF) goto F;
// // pas de fgetc() car F est final
// goto Error;
// F : // cas d’un état final
// token = FIN;
// return 1;
// Erreur : // Etat supplémentaire pour gérer les erreurs
// printf(“aucun token trouve\n”);
// exit(-1); // le programme s’arrête dès qu’une erreur est détectée.
// }​​ \\ end scanner()



scanner()
{
    #pragma region //EtatInitial
    EtatInitial:
    if (c == '\t' || c == ' ')
    {
        fgetc();
        goto EtatInitial;
    }
    if (c == '\n')
    {
        fgetc();
        goto Para1_EtatInitial;
    }
    if (c == '=')
    {
        fgetc();
        goto Section1_SousSection1;
    }
    if (c == '>')
    {
        fgetc();
        goto MotCleA1_MotCleT1;
    }
    If (c == EOF)
    {
        goto END;

    #pragma endregion
    #pragma region //END
    END:
    #pragma endregion
    #pragma region //Mot1
    Mot1:
    #pragma endregion
    #pragma region //Para1_EtatInitial
    Para1_EtatInitial:
    #pragma endregion
    #pragma region //Section1_SousSection1
    Section1_SousSection1:
    #pragma endregion
    #pragma region //MotCleA1_MotCleT1
    MotCleA1_MotCleT1
    #pragma endregion
    #pragma region //SECTION
    SECTION
    #pragma endregion
    #pragma region //SousSection2
    SousSeection2
    #pragma endregion
    #pragma region//MotCleA2
    MotCleA2
    #pragma endregion
    #pragma region //MotCleT2
    MotCleT2
    #pragma endregion 
    #pragma region //Para1_Para2_EtatInitial
    Para1_Para2_EtatInitial
    #pragma endregion
    #pragma region //SECTION
    SECTION
    #pragma endregion
    #pragma region //MOTCLEAUTEUR
    MOTCLEAUTEUR
    #pragma endregion
    #pragma region //TITRE
    TITRE
    #pragma endregion
    #pragma region //MOT
    MOT
    #pragma endregion
    #pragma region //Mot1_PARA
    Mot1_PARA
    #pragma endregion
