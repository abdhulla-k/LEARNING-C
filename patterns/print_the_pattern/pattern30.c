/*print the following pattern
*
*
* * *
* *
* *
* * * * * *
* * *
* * *
* * * * * * * * *
etc
*/

#include <stdio.h>
int main() {
    int n = 10;
    int horizontal = 3;
    int vertical = 1;
    int i, j;

    for( i = 0; i < n; i++ ) {
        if( i % 2 == 0 ) {
            for( int k = 0; k < 2; k++ ) {
                for( j = 0; j < vertical; j++ ) {
                    printf( "* " );
                }
                printf( "\n" );
            }
            vertical++;

        } else {
            for( j = 0; j < horizontal; j++ ) {
                printf( "* " );
            }
            printf( "\n" );
            horizontal += 3;
        }
    }
}