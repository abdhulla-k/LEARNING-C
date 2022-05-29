/* print the following pattern 
* * * * *
*
* * * * * * * * * *
*
*
* * * * * * * * * * * * * * * 
*
*
*
* * * * * * * * * * * * * * * * * * * *
*/
#include <stdio.h>
int main() {
    int n = 10;
    int i, j, k;
    int count = 1;
    int count2 = 1;

    for( i = 1; i <= n; i++ ) {
        if( i % 2 == 1 ) {
            for( j = 1; j <= count * 5; j++ ) {
                printf( "* " );
            }
            printf( "\n" );
            count++;
        } else {
            for( j = 0; j < count2; j++ ) {
                printf( "*\n" );
            }
            count2++;
        }
    }
}