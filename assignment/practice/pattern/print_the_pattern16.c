#include <stdio.h>
int main() {
    int i, j, k, n;

    printf( "Enter a number: " );
    scanf( "%d", &n );

    // print the pattern

    // print the first section 
    for( i = 0; i < n; i++ ) {
        for( j = 0; j < n * 2; j++ ) {
            if( j < n-i || n + i <= j ) {
                printf( "* " );
            } else {
                printf( "  " );
            }
        }
        printf( "\n" );
    }

    // print the second section
    for( i = n; i > 0; i-- ) {
        for( j = 0; j < n * 2; j++ ) {
            if( j <= n-i || j >= ( n * 2 ) - (n-i+1) ) {
                printf( "* " );
            } else {
                printf( "  " );
            }
        }
        printf( "\n" );
    }
}