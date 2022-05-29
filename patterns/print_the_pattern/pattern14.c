/* print the following pattern
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
* * * * * * * * * * 
 */
#include <stdio.h>
int main() {
    int n = 10;
    int i, j;
    int count1 = 5;
    float count2 = 3;

    for( i = 0; i <= n; i++ ) {
        if( i % 2 == 0 ) {
            for( j = 0; j < count1; j++ ) {
                printf( "* ");
            }
            count1 += 5;
            printf( "\n" );
        } else {
            for( j = 0; j < count2; j++ ) {
                printf( "*\n" );
            }
            count2 += 3;
        }
    }
}