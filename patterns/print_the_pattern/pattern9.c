/* prit the follownt pattern
* *
*
* * * *
*
*
*
* * * * * * * *
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
    int count1 = 2;
    float count2 = 1;

    for( i = 1; i <= n; i++ ) {
        if( i % 2 == 0 ) {
            for( j = 0; j < count1; j++ ) {
                printf( "* ");
            }
            count1 = count1 * 2;
            printf( "\n" );
        } else {
            for( j = 0; j < count2; j++ ) {
                printf( "*\n" );
            }
            count2 += 2;
        }
    }
}