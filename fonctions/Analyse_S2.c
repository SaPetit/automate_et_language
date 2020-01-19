int Analyse_S2() //S2→H2 P S2 | epsilon
{ //puts("j'entre dans s2");
    if (token == SSECTION) //SSECTION = first(H2))
    { // //S1→H1 P S2 S1
        //Scanner();
        Analyse_H2();
        Analyse_P();
        Analyse_S2();
    }
    else if (token == END || token == SECTION) //on test l'appartenance de token à
    //follow(S1)
    {
         //S2 → epsilon
    }
    else
    {
        puts("erreur dans S2");
        return -1;
    }
}
