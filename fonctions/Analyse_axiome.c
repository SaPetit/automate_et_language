


axiome() //AXIOME→HEAD BODY ​\FIN
{
    Scanner(); // recupération du tokrn
    
    
    //Une seule règle possible
    head();
    body();

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
