int Analyse_P() //P→NOUV_PARA​​ TEXT P | epsilon
{ //puts("j'entre dans p");
    if (token == NOUV_PARA)
    { // le token nous fait rentrer ici donc on en prend un nouveau
        Scanner();
        Analyse_TEXT();
        Analyse_P();
    }
    else if ( token == NOUV_PARA
    || token == SECTION 
    || token == SSECTION 
    || token == END) //on test l'appartenance de token aux follow
    {
         //P → epsilon
    }
    else
    {
        puts("erreur dans P");
        return -1;
    }
}
