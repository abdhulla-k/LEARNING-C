/* 
* * *
*
*
*
* * * * * * 
*
* 
* 
*
* 
*
* * * * * * * * *
etc..
*/

#include <stdio.h>
int main() {
    int n = 10;
    int i, j;

    for( i = 1; i <= n; i++ ) {
        for( j = 0; j < 3*i; j++ ) {
            printf( "* " );
        }
        printf( "\n" );
        for( j = 0; j < 3*i; j++ ) {
            printf( "*\n" );
        }
    }
}