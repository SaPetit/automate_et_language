int Analyse_H2() //H2→SSECTION​​ TEXT
{
	//puts("j'entre dans h2");
    if (token == SSECTION)
    // le token nous fait rentrer ici donc on en prend un nouveau
    {
        fputs(ouvrirBaliseH2, target);
        compteurSSection++;
        fprintf(target, "%c.%d ",compteurSection, compteurSSection); //impression du numéro de sous section
        Scanner();
        Analyse_TEXT();
        fputs(fermerBaliseH2, target);
    }
    else
    {
        puts("erreur Analyse H2 ne peut recevoir qu'un token SSECTION, ce nest pas le cas ici");
        return -1;
    }
}
