/* print the following pattern
*
* *
*
*
*
* * * *
*
* * * * * * 
*
*
*
* * etc.
*/
#include <stdio.h>
int main() {
    int n = 10;
    int i, j;
    int flag = 0;
    int count1 = 2;
    float count2 = 2;

    for( i = 1; i <= n; i++ ) {
        if( i % 2 == 1 ) {
            for( j = 0; j < count1; j++ ) {
                printf( "* ");
            }
            count1 += 2;
            printf( "\n" );
        } else {
            for( j = 0; j <= flag; j++ ) {
                printf( "*\n" );
            }
            if( flag == 0 ) {
                flag = 2;
            } else {
                flag = 0;
            }
        }
    }
}