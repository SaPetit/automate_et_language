


Analyse_H1() //H1→SECTION​​ TEXT
{
    if (token == SECTION)
    // le token nous fait rentrer ici donc on en prend un nouveau
    {
        Scanner();
        Analyse_TEXT();
    }
    else
    {
        puts("erreur Analyse h1 ne peut recevoir qu'un token SECTION, ce nest pas le cas ici");
        return -1;
    }

}
