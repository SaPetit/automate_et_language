int Analyse_axiome() //AXIOME→HEAD BODY ​\FIN
{ //puts("j'entre dans axiome");
    Scanner(); // recupération du 1er token
    
    //Une seule règle possible
    Analyse_HEAD();
    Analyse_BODY();

    if (token == END)
    {
        puts("succès, la grammaire est respecté");
        return 0;
    }
    else
    {
        puts("pblm token final");
    }

    puts("erreur dans axiome");

}
