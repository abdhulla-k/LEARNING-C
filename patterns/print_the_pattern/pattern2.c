/*  print the followint pattern
* * *
*
* * * * * *
*
*
* * * * * * * * *
*
*
*
* * etc.
*/

#include <stdio.h>
int main() {
    int i, j;
    int n = 5;
    int count3 = 1;
    int count1 = 1;

    for( i = 0; i < n; i++ ) {
        if( i % 2 == 0 ) {
            for( j = 0; j < count3 * 3; j++ ) {
                printf( "* " );
            }
            printf( "\n" );
            count3++;
        } else {
            for( j = 0; j < count1; j++ ) {
                printf( "*\n" );
            }
            count1++;
        }
    }
}