/*print the following pattern
* * *
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
*/

#include <stdio.h>
int main() {
    int n = 10;
    int i, j, k;
    int count = 3;

    for( i = 0; i < n; i++ ) {
        if( i % 2 == 0 ) {
            for( j = 0; j < 2; j++ ) {
                for( k = 0; k < count; k++ ) {
                    printf( "* " );
                }
                printf( "\n" );
            }
            count += 3;
            
        } else {
            for( j = 0; j < 3; j++ ) {
                printf( "*\n" );
            }
        }
    }
}