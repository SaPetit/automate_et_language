void Analyse_P() //P→NOUV_PARA​​ TEXT P | epsilon
{
    if (token == NOUV_PARA​​)
    { // le token nous fait rentrer ici donc on en prend un nouveau
        Scanner();
        Analyse_TEXT();
        Analyse_P();
    }
    else if ( //on test l'appartenance de token à
    || token == PARA         //follow(P)
    || token == SECTION 
    || token == SSECTION 
    || token == END)
    {
        continue; //P → epsilon
    }
    else
    {
        puts("erreur dans P");
        return -1;
    }
}
