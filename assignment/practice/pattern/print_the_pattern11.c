/*

* *
* - * -
* * * * 
* - * - * - * -
* * * * * *
* - * - * - *- * - * - 

*/

#include <stdio.h>
int main() {
    int n, i, j, k;
    int first = 2, second = 2;

    printf( "Enter a number: " );
    scanf( "%d", &n );

    // print the pattern
    for( i = 0; i < n; i++ ) {
        if( i % 2 == 0 ) {
            for( j = 0; j < first; j++ ) {
                printf( "* " );
            }
            first += 2;
        } else {
            for( j = 0; j < second; j++ ) {
                printf( "* - ");
            }
            second += 2;
        }
        printf( "\n" );
    }
}