// char c;
// enum TokenType
// {
//     MOTCLE_T,
//     MOTCLE_A,
//     SECTION,
//     SSECTION,
//     NOUV_PARA,
//     MOT,
//     FIN
// }token;

// char tokenValue[50];




// A : // cas d’un état non final
// if (c == ’>’) {c = fgetc(source); goto B; }
// // c = fgetc(source) avant le goto car B n’est pas final
// If (c == EOF) goto F;
// // pas de c = fgetc(source) car F est final
// goto Error;
// F : // cas d’un état final
// token = FIN;
// return 0;
// Erreur : // Etat supplémentaire pour gérer les erreurs
// printf(“aucun token trouve\n”);
// exit(-1); // le programme s’arrête dès qu’une erreur est détectée.
// }​​ \\ end scanner()

int Scanner()
{
    int k=0;
    initTokenValue();

     //EtatInitial
    EtatInitial:
    if (c == '\t' || c == ' ')
    {
        c = fgetc(source);
        goto EtatInitial;
    }
    if (c == '\n')
    {
        c = fgetc(source);
        goto Para1_EtatInitial;
    }
    if (c == '=')
    {
        c = fgetc(source);
        goto Section1_SousSection1;
    }
    if (c == '>')
    {
        c = fgetc(source);
        goto MotCleA1_MotCleT1;
    }
    if (c == EOF)
    {
        goto END;
    }
    if (isalnum(c))
    {
        tokenValue[k] = c;
        k++;
        c = fgetc(source);
        goto Mot1;
    }
    goto Error;

     //END
    END:
    token = END;
    return 0;

     //Mot1
    Mot1:
    if (c == '\t' || c == ' ')
    {
        goto MOT;
    }
    if (c == '\n')
    {
       goto MOT;
    }
    if (isalnum(c))
    {
        tokenValue[k] = c;
        k++;
        c = fgetc(source);
        goto Mot1;
    }
    goto Error;
     //Para1_EtatInitial
    Para1_EtatInitial:
    if (c == '\t' || c == ' ')
    {
        c = fgetc(source);
        goto Para1_EtatInitial;
    }
    if (c == '\n')
    {
        c = fgetc(source);
        goto Para1_Para2_EtatInitial;
    }
    if (c == '=')
    {
        c = fgetc(source);
        goto Section1_SousSection1;
    }
    if (c == '>')
    {
        c = fgetc(source);
        goto MotCleA1_MotCleT1;
    }
    if (c == EOF)
    {
        goto END;
    }
    if (isalnum(c))
    {
        tokenValue[k] = c;
        k++;
        c = fgetc(source);
        goto Mot1;
    }
    goto Error;

     //Section1_SousSection1
    Section1_SousSection1:
    if (c == '\t' || c == ' ' || c == '\n')
    {
        goto SECTION;
    }
    if (c == '=')
    {
        c = fgetc(source);
        goto SousSection2;
    }
    if (c == EOF)
    {
        goto END;
    }
    if (isalnum(c))
    {
        tokenValue[k] = c;
        k++;
        c = fgetc(source);
        goto Mot1;
    }
    goto Error;
     //MotCleA1_MotCleT1
    MotCleA1_MotCleT1:
    if (c == 'a' || c == 'A')
    {
       c = fgetc(source);
       if (c=='u' || c == 'U')
        {
            c = fgetc(source);
            if (c=='t' || c == 'T')
            {
                c = fgetc(source);
                if (c=='e' || c == 'E')
                {
                    c = fgetc(source);
                    if (c=='u' || c == 'U')
                    {
                        c = fgetc(source);
                        if (c=='R' || c == 'r')
                        {
                            c = fgetc(source);
                            goto MotCleA2;
                        }
                        else
                        {
                            puts("le r de auteur manque");
                            goto Error;
                        }
                        
                    }
                    else
                    {
                        goto Error;
                    }
    
                }
            }
            else
            {
                goto Error;
            }
    }
    else
        {
            goto Error;
        }
    
    }

    if (c == 't' || c == 'T')
    {
        c = fgetc(source);
        if (c=='i' || c == 'I')
        {
            c = fgetc(source);
            if (c=='t' || c == 'T')
        {
                c = fgetc(source);
                if (c=='r' || c == 'R')
                {
                    c = fgetc(source);
                    if (c=='e' || c == 'E')
                    {
                        c = fgetc(source);
                        goto MotCleT2;
                    }
                    else
                    {
                        goto Error;
                    }
    
                }
            }
            else
            {
                goto Error;
            }
    }
    else
        {
            goto Error;
        }
    
    }
    goto Error;
     //SousSection2
    SousSection2:
    if (c == ' ' || c == '\t' || c == '\n' || c == EOF )
    {
        goto SSECTION;
    }
    goto Error;
    //MotCleA2
    MotCleA2:
    if (c == ' ' || c == '\t' || c == '\n' || c == EOF )
    {
        goto MOTCLE_A;
    }
    goto Error;
     //MotCleT2
    MotCleT2:
    if (c == ' ' || c == '\t' || c == '\n' || c == EOF )
    {
        goto MOTCLE_T;
    }
    goto Error; 
     //Para1_Para2_EtatInitial
    Para1_Para2_EtatInitial:
    if (c == '\t' || c == ' ')
    {
        c = fgetc(source);
        goto Para1_Para2_EtatInitial;
    }
    if (c == '\n')
    {
        c = fgetc(source);
        goto Para1_Para2_EtatInitial;
    }
    if (c == '=')
    {
        c = fgetc(source);
        goto Section1_SousSection1;
    }
    if (c == '>')
    {
        c = fgetc(source);
        goto MotCleA1_MotCleT1;
    }
    if (c == EOF)
    {
        goto END;
    }
    if (isalnum(c))
    {
        //tokenValue[k] = c;
        //k++;
        //c = fgetc(source);
        goto Mot1_PARA;
    }
    goto Error;
     //SECTION
    SECTION:
    token = SECTION;
    return 0;     
    //SSECTION
    SSECTION:
    token = SSECTION;
    return 0;
     //MOTCLE_A
    MOTCLE_A:
    token = MOTCLE_A;
    return 0;
     //TITRE
    MOTCLE_T:
    token = MOTCLE_T;
    return 0;
     //MOT
    MOT:
    tokenValue[k] = '\0';
    token = MOT;
    return 0;
     //Mot1_PARA
    Mot1_PARA:
    token = NOUV_PARA;
    return 0;
    //ERROR
    Error:
    printf("aucun token trouve\n");
    return -1;
}