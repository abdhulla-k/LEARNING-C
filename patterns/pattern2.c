/* 
print the following pattern
*                 *
* *             * * 
* * *         * * * 
* * * *     * * * * 
* * * * * * * * * * 
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *

 */

#include <stdio.h>
int main() {
    int n = 5;
    int i, j;

    // first part of the pattern
    for( i = 0; i < n; i++ ) {
        for( j = 0; j < n + n; j++ ) {

            // print the star
            if( j <= i | j >= n + n - i-1 ) {
                printf( "* ");

                // print the space
            } else {
                printf( "  " );
            }
        }
        printf( "\n\n" );
    }

    // second part of the pattern
    for( i = n; i > 0; i-- ) {
        for( j = 0; j < n + n; j++ ) {

            // print the star
            if( j < i | j >= n + n - i ) {
                printf( "* " );

            // print the space
            } else {
                printf( "  " );
            }
        }
        printf( "\n\n" );
    }
}