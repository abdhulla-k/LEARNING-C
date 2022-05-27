/*print the following pattern
*
*
* * *
* *
* *
* * * * * *
* * * 
* * * 
* * * * * * * *
etc..
*/
#include <stdio.h>
int main() {
    int n = 10;
    int i, j, k;
    int count = 0;
    int count1 = 3;

    for( i = 0; i < n; i++ ) {
        if( i % 2 == 0 ) {
            for( j = 0; j < 2; j++ ) {
                for( k = 0; k <= count; k++ ) {
                    printf( "* " );
                }
                printf( "\n" );
            }
            count++;
        } else {
            for( j = 0; j < count1; j++ ) {
                printf( "* " );
            }
            count1 += 3;
            printf( "\n" );
        }
    }
}