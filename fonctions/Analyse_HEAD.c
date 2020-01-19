int Analyse_HEAD() //\MOTCLE_T​​ TEXT ​\MOTCLE_A​​ TEXT
{ //puts("j'entre dans head");

    if (token == 0)
    { // le token nous fait rentrer ici donc on en prend un nouveau
        Scanner();
        Analyse_TEXT();
        if (token == 1)
        //Le token ici est  fournie comme un follow de TEXT
        {
            Scanner();
            Analyse_TEXT();
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
