/* 
* * * * *
*
* * * *
*
*
* * *
*
*
*
* *
*
*
*
*
*
*/
#include <stdio.h>
int main() {
    int n = 10;
    int i, j;
    int count1 = n;
    float count2 = 1;

    for( i = 1; i <= n*2; i++ ) {
        if( i % 2 == 1 ) {
            for( j = 0; j <= count1; j++ ) {
                printf( "* " );
            }
            count1--;
            printf( "\n" );
        } else {
            for( j = 0; j < count2; j++ ) {
                printf( "*\n" );
            }
            count2++;
        }
    }
}