


axiome() //AXIOME→HEAD BODY ​\FIN
{
    Scanner(); // recupération du tokrn
    
    
    //Une seule règle possible
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
