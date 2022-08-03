#include <stdio.h>
int main() {
    int i, j, k, n;

    printf( "Enter a number: " );
    scanf( "%d", &n );

    // print the pattern

    // print the first section 
    for( i = 0; i < n; i++ ) {
        for( j = 1; j <= n + i; j++ ) {
            if( j == n-i || j == n + i || j == n || i == n-1 ) {
                printf( "* " );
            } else {
                printf( "  " );
            }
        }
        printf( "\n" );
    }

    // print the second section
    for( i = n-2; i >= 0; i-- ) {
        for( j = 1; j <= n+i; j++ ) {
            if( j == n || j == n-i || j == n+i ) {
                printf( "* " );
            } else {
                printf( "  " );
            }
        }
        printf( "\n" );
    }
}