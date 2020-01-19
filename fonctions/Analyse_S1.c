


Analyse_S1() //S1→H1 P S2 S1 | epsilon
{
    if (token == SECTION//SECTION = first(h1))
    { // //S1→H1 P S2 S1
        Scanner();
        Analyse_H1();
        Analyse_P();
        Analyse_S2();
        Analyse_S1();
    }
    else if (token == END)//on test l'appartenance de token à
    {
        continue; //P → epsilon
    }
    else
    {
        puts("erreur dans P");
        return -1;
    }
}
