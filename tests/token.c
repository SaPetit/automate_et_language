
    typedef enum MyEnum
    {
        A,B
    } lex;


    
    
    int main() {


        lex token = A;
       lex plop = B;

        if (token + 1 == plop )
        {
            puts("succes");
        }
        else
        {
            puts("echec");
        }

    return 0;
}