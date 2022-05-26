/* enter the following pattern
* * * * *
*
*
*
* * * * * * * * * *
*
*
*
*
*
*
* * * * * * * * * * * * * * *
etc..
*/

#include <stdio.h>
int main() {
    int n = 10;
    int horizontal = 5;  // multiplication of 5
    int vertical = 3;  // multiplication of 3

    for( int i = 0; i <= n; i++ ) {

        // print * horizontally
        if( i % 2  == 0 ) {
            for( int j = 0; j < horizontal; j++ ) {
                printf( "* " );
            }
            printf( "\n" );
            // add five after printing *
            horizontal += 5;

            // print star vertically
        } else {
            for( int j = 1; j <= vertical; j++ ) {
                printf( "*\n" );
            }
            // add 3 after printing *
            vertical += 3;
        }
    }
}