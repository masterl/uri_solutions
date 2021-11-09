#include <stdio.h>

int main()
{
    int total_entradas;
    int coelhos = 0;
    int ratos   = 0;
    int sapos   = 0;
    int cobaias = 0;
    int quantidade;
    char tipo;

    scanf( "%d", &total_entradas );

    for( int i = 0; i < total_entradas; ++i )
    {
        scanf( "%d %c", &quantidade, &tipo );

        switch( tipo )
        {
            case 'C':
                coelhos += quantidade;
                break;
            case 'R':
                ratos += quantidade;
                break;
            case 'S':
                sapos += quantidade;
                break;
        }
        cobaias += quantidade;
    }

    printf( "Total: %d cobaias\n", cobaias );
    printf( "Total de coelhos: %d\n", coelhos );
    printf( "Total de ratos: %d\n", ratos );
    printf( "Total de sapos: %d\n", sapos );

    printf( "Percentual de coelhos: %.2f %%\n", coelhos / (float)cobaias * 100.0 );
    printf( "Percentual de ratos: %.2f %%\n", ratos / (float)cobaias * 100.0 );
    printf( "Percentual de sapos: %.2f %%\n", sapos / (float)cobaias * 100.0 );

    return 0;
}