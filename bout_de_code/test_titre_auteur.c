if (c == 'a' || c == 'A')
{
    fgetc()
    if (c=='u' || c == 'U')
    {
        fgetc()
        if (c=='t' || c == 'T')
       {
            fgetc()
            if (c=='e' || c == 'E')
            {
                fgetc()
                if (c=='u' || c == 'U')
                {
                    if (c=='R' || c == 'r')
                    {
                        fgetc();
                        goto MotCleA2;
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
    fgetc()
    if (c=='i' || c == 'I')
    {
        fgetc()
        if (c=='t' || c == 'T')
       {
            fgetc()
            if (c=='r' || c == 'R')
            {
                fgetc()
                if (c=='e' || c == 'E')
                {
                    fgetc();
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
