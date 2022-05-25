/* 
* *
*
*
*
* * * *
*
*
*
*
*
*
* * * * * * * *
*/
#include <stdio.h>
int main() {
    int n = 5;
    int i, j;
    int count1 = 1;
    float count2 = 1.5;

    for( i = 1; i <= n; i++ ) {
        if( i % 2 == 1 ) {
            for( j = 0; j < count1 * 2; j++ ) {
                printf( "* " );
            }
            count1 = j;
            printf( "\n" );
        } else {
            for( j = 0; j < count2 * 2; j++ ) {
                printf( "*\n" );
            }
            count2 = j;
        }
    }
}