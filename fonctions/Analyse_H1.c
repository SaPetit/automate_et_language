int Analyse_H1() //H1→SECTION​​ TEXT
{ //puts("j'entre dans h1");
    if (token == SECTION)
    // le token nous fait rentrer ici donc on en prend un nouveau
    {   fputs(ouvrirBaliseH1, target);
        compteurSection++;
        compteurSSection = 0; // réinitialisation du compteur section.
        fprintf(target, "%c) ", compteurSection); //impression du numéro de section
        Scanner();
        Analyse_TEXT();
        fputs(fermerBaliseH1, target);

    }
    else
    {
        puts("erreur Analyse H1 ne peut recevoir qu'un token SECTION, ce nest pas le cas ici");
        return -1;
    }

}
