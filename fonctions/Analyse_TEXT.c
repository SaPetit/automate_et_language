int Analyse_TEXT() //TEXT→MOT​​ TEXT | epsilon
{ //puts("j'entre dans text");
    if (token == MOT)
    
    {
        //Traitement de tokenValue pour écrire dans le fichier.
     
     
     
            fputs(tokenValue, target);
            fputc(' ', target);
     
        //Une fois tokenValue traité on prend un nouveau token.
        //On le renvoie dans Analyse_TEXT
        Scanner();
        Analyse_TEXT();
    }//on test l'appartenance de token à follow(TEXT)
    else if (token == MOTCLE_A 
    || token == NOUV_PARA         
    || token == SECTION 
    || token == SSECTION 
    || token == END)
    {
        //On se trouve dans les follow de text, on peut appliquer 
        // TEXT -> epsilon
        
    }
    else 
    {
        puts("erreur dans TEXT");
        return -1;
    }

}
