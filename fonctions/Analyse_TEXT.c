


Analyse_TEXT() //TEXT→MOT​​ TEXT | epsilon
{
    if (token == MOT)
    
    {
        //Traitement de tokenValue pour écrire dans le fichier.
     
     
     
     
     
        //Une fois tokenValue traité on prend un nouveau token.
        //On le renvoie dans Analyse_TEXT
        Scanner();
        Analyse_TEXT();
    }
    else if (token == AUTEUR
    || token == PARA 
    || token == SECTION 
    || token == S_SECTION 
    || token == END)
    {
        //On se trouve dans les follow de text, on peut appliquer 
        // TEXT -> epsilon
        continue;
    }
    else
    {
        puts("erreur dans TEXT");
        return -1;
    }

}
