void Analyse_H2() //H2→SSECTION​​ TEXT
{
    if (token == SSECTION)
    // le token nous fait rentrer ici donc on en prend un nouveau
    {
        Scanner();
        Analyse_TEXT();
    }
    else
    {
        puts("erreur Analyse H2 ne peut recevoir qu'un token SSECTION, ce nest pas le cas ici");
        return -1;
    }
