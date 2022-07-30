/*

*******

 *******

  *******

   *******

    *******

     *******

      *******

       *******
*/

#include <stdio.h>
int main() {
    int n, i, j, k;

    printf( "Enter a number: " );
    scanf( "%d", &n );

    // print the pattern
    for( i = 0; i < n; i++ ) {
        for( j = 0; j < n + i; j++ ) {
            if( j < i ) {
                printf( " " );
            } else {
                printf( "*" );
            }
        }
        printf( "\n\n" );
    }
}