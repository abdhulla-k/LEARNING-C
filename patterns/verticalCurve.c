#include <stdio.h>
int main() {
    int n, i, j;
    printf( "Enter a number to show vertical curve star pattern: " );
    scanf( "%d",&n );

    // create the algorithm
    for( i = 1; i <= n; i++ ) {
        for( j = 1; j <= i; j++ ) {
            printf( "*" );
        }
        printf( "\n" );
    }

    // section two
    for( i = n-1; i <= n && i > 0; i-- ) {
        for( j = 1; j <= i; j++ ) {
            printf( "*" );
        }
        printf( "\n" );
    }
} 