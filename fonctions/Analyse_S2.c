void Analyse_S2() //AXIOME→HEAD BODY ​\FIN
{
    Scanner(); // recupération du tokrn
    
    //Une seule règle possible AXIOME→HEAD BODY ​\FIN
    head();
    body();

    if (token == 6)
    {
        puts("succès, la grammaire est respecté");
        return 0;
    }
    else
    {
        puts("pblm token final");
        return
    }

    puts("erreur dans axiome");

}
