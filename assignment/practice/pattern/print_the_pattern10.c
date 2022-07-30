/*

*
*
* $ *
* *
* *
* $ * $ * $
* * *
* * * 
* * *

*/

#include <stdio.h>
int main() {
    int n, i, j, k;
    int first = 0, second = 3;

    printf( "Enter a number: " );
    scanf( "%d", &n );

    // print the pattern
    for( i = 0; i < n; i++ ) {
        if( i == 0 ) {
            printf( "*\n*\n");
            first = 2;
        }
        if( i % 2 == 1 ) {
            for( j = 0; j < first; j++ ) {
                for( k = 0; k < first; k++ ) {
                    printf( "* " );
                }
                printf( "\n" );
            }
            first++;

        } else {
            for( j = 0; j < second; j++ ) {
                if( j % 2 == 0 ) {
                    printf( "* " );
                } else {
                    printf( "$ " );
                }
            }
            second += 3;
            printf( "\n" );
        }
    }
}