/*

    *
    
   * *

  *   *

 *     *

*       *

 *     *

  *   *

   * *

    * 

*/
#include <stdio.h>
int main() {
    int i, n, j, k;

    printf( "Enter a number: " );
    scanf( "%d", &n );

    // print first section of the pattern
    for( i = 0; i < n; i++ ) {

        // print the spaces
        for( j = 1; j < n-i; j++ ) {
            printf( " " );
        }

        // print the stars and spaces between stars
        for( k = 0; k <= i; k++ ) {
            if( k == 0 || k == i ) {
                printf( "* " );
            } else {
                printf( "  " );
            }
        }
        printf( "\n\n" );
    }

    // print the second section of the pattern
    for( i = n-2; i >= 0; i-- ) {
        
        // print the spaces
        for( j = 1; j < n-i; j++ ) {
            printf( " " );
        }

        // print the star and spaces between stars
        for( k = 0; k <= i; k++ ) {
            if( k == 0 || k == i ) {
                printf( "* " );
            } else {
                printf( "  " );
            }
        }
        printf( "\n\n" );
    }
}