/* 
*
*
* * *
* *
* *
* * * * * *
* * *
* * *
* * *
* * * * * * * * * 
etc..
*/
#include <stdio.h>
int main() {
    int n = 20;
    int i, j, k;
    int count1 = 1;
    int count2 = 1;

    for( i = 0; i <= n; i++ ) {
        if( i % 2 == 0 ) {
            if( i != 0 ) {
                for( j = 0; j < count1; j++ ) {
                    for( k = 0; k < count1; k++ ) {
                        printf( "* " );
                    }
                    printf( "\n" );
                }
                count1++;
            } else {
                for( j = 0; j < 2; j++ ) {
                    printf( "*\n" );
                }
                count1++;
            }
        } else {
            for( j = 0; j < count2 * 3; j++ ) {
                printf( "* " );
            }
            printf( "\n" );
            count2++;
        }
    }
}