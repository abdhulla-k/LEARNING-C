/*print the following pattern
*
* * * *
*
*
* * * * * * * *
*
* * * * * * * * * *
*
*
 */

#include <stdio.h>
int main() {
    int n = 7;
    int i, j;
    int count = 0;
    int count2 = 8;
    int rightLen = 0;

    for( i = 0; i < n; i++ ) {
        if( i % 2 == 0 ) {
            for( j = 0; j <= count; j++ ) {
                printf( "*\n" );
            }
            count = ( count == 0 ) ? 1 : 0;

        } else {
            if( i == 3 ) {
                    count2 = 8;
                }
            for( j = 0; j < rightLen + ( count2 / 2 ); j++ ) {
                printf( "* " );
            } 
            printf( "\n" );
            count2 = count2 / 2;
            rightLen += count2;
        }
    }
}