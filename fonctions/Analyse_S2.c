void Analyse_S2() //S2→H2 P S2 | epsilon
{
    if (token == SSECTION //SSECTION = first(H2))
    { // //S1→H1 P S2 S1
        Scanner();
        Analyse_H2();
        Analyse_P();
        Analyse_S2();
    }
    else if (token == END) //on test l'appartenance de token à
    //follow(S1)
    {
        continue; //S2 → epsilon
    }
    else
    {
        puts("erreur dans S1");
        return -1;
    }
}
