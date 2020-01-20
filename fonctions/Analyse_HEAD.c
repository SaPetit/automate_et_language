int Analyse_HEAD() //\MOTCLE_T​​ TEXT ​\MOTCLE_A​​ TEXT
{ //puts("j'entre dans head");

    if (token == MOTCLE_T)
    { // le token nous fait rentrer ici donc on en prend un nouveau
        fputs(ouvrirBaliseHead, target);
        fputs(ouvrirBaliseTitre, target);
        Scanner();
        Analyse_TEXT();
        fputs(fermerBaliseTitre, target);
        if (token == MOTCLE_A)
        //Le token ici est  fournie comme un follow de TEXT
        {
            fputs(ouvrirBaliseAuteur, target);
            Scanner();
            Analyse_TEXT();

            fputs(fermerBaliseAuteur, target);
            fputs(fermerBaliseHead, target);
        }
        else
        {
        puts("erreur Analyse_HEAD attend un MOTCLE_A​​");
        return -1;
        }
    }
    else
    {
        puts("erreur Analyse_HEAD attend un MOTCLE_T​​");
        return -1;
    }

    if (token == NOUV_PARA ||token == SECTION ||token == END)
    {
        
    }
    else
    {
        puts("erreur dans les follow de HEAD​​");
        return -1;
    }



}
