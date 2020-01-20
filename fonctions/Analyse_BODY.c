int Analyse_BODY() // BODY→P S1
{
    //puts("j'entre dans body");
    fputs(ouvrirBaliseBody, target);
    Analyse_P();
    Analyse_S1();
    fputs(fermerBaliseBody, target);
}
