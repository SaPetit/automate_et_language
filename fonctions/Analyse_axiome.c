int Analyse_axiome() //AXIOME→HEAD BODY ​\FIN
{ //puts("j'entre dans axiome");

    fputs(ouvrirPage, target);
    Scanner(); // recupération du 1er token
    
    //Une seule règle possible
    Analyse_HEAD();
    Analyse_BODY();

    if (token == END)
    {
            fputs(fermerPage, target);
        puts("succès, la grammaire est respecté");
        return 0;
    }
    else
    {
        puts("pblm token final");
    }

    puts("erreur dans axiome");

}
