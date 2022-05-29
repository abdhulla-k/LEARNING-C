/* print the following pattern
* * *
*
*
*
* * * * * *
* * * * * *
*
*
*
* * * * * * * * * 
* * * * * * * * *
* * * * * * * * *
etc.
*/
#include <stdio.h>
int main() {
    int i, j, k;
    int n = 10;
    int count = 1;

    for( i = 0; i <= n; i++ ) {
        if( i % 2 == 0 ) {
            for( j = 1; j <= count; j++ ) {
                for( k = 0; k < count * 3; k++ ) {
                    printf( "* " );
                }
                printf( "\n" );
            }
            count++;
        } else {
            for( j = 0; j < 3; j++ ) {
                printf( "*\n" );
            }
        }
    }
}
