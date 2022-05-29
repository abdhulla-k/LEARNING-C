/* print the following pattern
* * *
* * *
*
* * * * * *
* * * * * *
*
*
* * * * * * * * * 
* * * * * * * * *
*
*
*
etc.
*/

#include <stdio.h>
int main() {
    int i, j, k;
    int n = 10;
    int count = 1;
    int count2 = 1;

    for( i = 1; i <= n; i++ ) {
        if( i % 2 == 1 ) {
            for( j = 1; j <= 2; j++ ) {
                for( k = 0; k < count * 3; k++ ) {
                    printf( "* " );
                }
                printf( "\n" );
            }
            count++;
        } else {
            for( j = 0; j < count2; j++ ) {
                printf( "*\n" );
            }
            count2++;
        }
    }
}