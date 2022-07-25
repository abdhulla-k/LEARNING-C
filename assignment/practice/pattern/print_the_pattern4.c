/*

* * * * * * * * 1 * * * * * * * *
* * * * * * * 2 * 2 * * * * * * *
* * * * * * 3 * 3 * 3 * * * * * *
* * * * * 4 * 4 * 4 * 4 * * * * *
* * * * 5 * 5 * 5 * 5 * 5 * * * *

*/
#include <stdio.h>
#include <stdbool.h>
int main() {
    int n;
    printf( "Enter a number: " );
    scanf( "%d", &n );

    for( int i = 1; i <= n; i++ ) {
        int flag = true;
        
        for( int j = 0; j < n+n-i; j++ ) {
            printf( "* " );
        }

        for( int k = 0; k < i*2; k++ ) {
            if( flag == true ) {
                printf( "%d ",i );
                flag = false;
            } else {
                printf( "* " );
                flag = true;
            }
        }

        for( int d = 0; d < n+n-(i+1); d++ ) {
            printf( "* " );
        }
        printf( "\n" );
    }
}