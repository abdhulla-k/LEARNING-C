/*print the following pattern
X X
_ X X
X X
X X
_ _ X X X X
X X
X X
X X
_ _ _ X X X X X X X X
etc..
*/
#include <stdio.h>
int main() {
    int n = 5;
    int i, j;
    int count = 0;
    int count2 = 2;

    for( i = 0; i <= n; i++ ) {
        if( i % 2 == 0 ) {
            for( j = 0; j <= count; j++ ) {
                printf( "X X\n" );
            }
            count++;
        } else {
            for( j = 0; j <= count2 + ( count - 1 ); j++ ) {
                ( j < count ) ? printf( "_ " ) : printf( "X " );
            }
            count2 *= 2;
            printf( "\n" );

        }
    }
}