#include <stdio.h>

int main( void )
{
    for( int i = 0; i <= 2; ++i )
    {
        int j1 = i + 1;
        int j2 = i + 2;
        int j3 = i + 3;

        printf( "I=%d J=%d\n", i, j1 );
        printf( "I=%d J=%d\n", i, j2 );
        printf( "I=%d J=%d\n", i, j3 );

        if( i == 2 )
        {
            break;
        }

        for( int count = 2; count < 10; count += 2 )
        {
            printf( "I=%d.%d J=%d.%d\n", i, count, j1, count );
            printf( "I=%d.%d J=%d.%d\n", i, count, j2, count );
            printf( "I=%d.%d J=%d.%d\n", i, count, j3, count );
        }
    }

    return 0;
}
