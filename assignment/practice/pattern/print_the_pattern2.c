/*

*
* 1 *
* 1 2 1 *
* 1 2 3 2 1 *
* 1 2 3 4 3 2 1 *
* 1 2 3 2 1 *
* 1 2 3 *
* 1 *
*

*/

#include <stdio.h>
int main() {
    int n = 0;
    int i, j, k;
    
    printf( "Enter a number: " );
    scanf( "%d", &n );

    for( i = 0; i < n; i++ ) {
        for( j = 0; j <= i; j++ ) {
            if( j == 0 ) {
                printf( "* " );
            } else {
                printf( "%d ", j );
            }
        }

        for( k = j - 2; k >= 0; k-- ) {
            if( k == 0 ) {
                printf( "* " );
            } else {
                printf( "%d ", k );
            }
        }
        printf( "\n" );
    }

    for( i = n-2; i >= 0; i-- ) {
        for( j = 0; j <= i; j++ ) {
            if( j == 0 ) {
                printf( "* " );
            } else {
                printf( "%d ", j );
            }
        }

        for( k = j - 2; k >=0; k-- ) {
            if( k == 0 ) {
                printf( "* " );
            } else {
                printf( "%d ", k );
            }
        }
        printf( "\n" );
    }
}