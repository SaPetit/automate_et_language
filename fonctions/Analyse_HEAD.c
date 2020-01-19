


Analyse_HEAD() //\MOTCLE_T​​ TEXT ​\MOTCLE_A​​ TEXT
{

    if (token == MOTCLE_T​​)
    {
        Scanner();
        Analyse_TEXT();
        Scanner();
        if (token == MOTCLE_A​​ )
        {
            Scanner();
            Analyse_TEXT();
        }
    }
    else
    {
        puts("erreur Analyse_HEAD attend un MOTCLE_T​​");
        return -1;
    }

    if (token == PARA ||token == SECTION ||token == END)
    {
        continue;
    }
    else
    {
        puts("erreur dans les follow de HEAD​​");
        return -1;
    }



}
