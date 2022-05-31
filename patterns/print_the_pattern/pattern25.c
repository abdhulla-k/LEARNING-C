/*print the following pattern
* * * * * *
*
* * * * * *
*
*
* * * * * *
*
*
*
* * * * * *
*
*
*
*
* * * * * *
*/
#include <stdio.h>
int main() {
    int n = 10;
    int i, j;
    int count = 1;

    for( i = 0; i < n; i++ ) {
        if( i % 2 == 0 ) {
            for( j = 0; j < 6; j++ ) {
                printf( "* " );
            }
            printf( "\n" );
        } else {
            for( j = 0; j < count; j++ ) {
                printf( "*\n" );
            }
            count++;
        }
    }
}