/*print the following pattern
* * * * * 
*
* 
* * * * * * * * * *
*
*
*
*
* * * * *
*
*
*
*
*
*
*
*
etc..
*/

#include <stdio.h>
int main() {
    int n = 10;
    int i, j;
    int togle = 5;
    int add = 2;

    for( i = 0; i < n; i++ ) {
        if( i % 2 == 0 ) {
            for( j = 0; j < togle; j++ ) {
                printf( "* " );
            }
            togle = ( togle == 5 ) ? 10 : 5;
            printf( "\n" );
        } else {
            for( j = 0; j < add; j++ ) {
                printf( "*\n" );
            }
            add *= 2;
        }
    }
}