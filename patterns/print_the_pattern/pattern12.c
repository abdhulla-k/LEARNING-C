/* wrinte the following pattern
* * * * * * *
* *       * *
*   *   *   *
*     *     *
*   *   *   *
* *       * *
* * * * * * *
*/

#include <stdio.h>
int main() {
    int n = 7; // ther shoud not be center point in case of even number
    int i, j;
    int startPos = 1;
    int endPos = n-2;

    // go through rows; row means n; iterate n times
    for( i = 0; i < n; i++ ) {
        
        // print n times * in first row
        if( i == 0 ) {
            for( j = 0; j < n; j++ ) {
                printf( "* " );
            }
            printf( "\n" );

        // print 3 times * in middle row
        } else if( i == n / 2 && n % 2 != 0 ) {
            for( j = 0; j < n ; j++ ) {
                if( j == 0 | j == n / 2 | j == n - 1 ) {
                    printf( "* " );
                } else {
                    printf( "  " );
                }
            }
            printf( "\n" );
            startPos += 1;
            endPos -= 1;

        // print * at startPos and endPos;
        } else if( i < n / 2 | i < n - 1 ) {
            for( j = 0; j < n; j++ ) {
                if( j == 0 | j == n - 1 | j == startPos | j == endPos ) {
                    printf( "* " );
                } else {
                    printf( "  " );
                }
            }
            printf( "\n" );
            startPos += 1;
            endPos -= 1;

        // print n times * in last line
        } else {
            for( j = 0; j < n; j++ ) {
                printf( "* " );
            }
        }
    }
}
