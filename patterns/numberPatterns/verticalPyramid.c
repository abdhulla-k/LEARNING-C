#include <stdio.h>
int main() {
    int n, i, j;

    printf( "Enter the number of row to show vertical number pyramid pattern: " );
    scanf( "%d", &n );

    // create algorithm
    // first part of the pattern
    for( i = 1; i <= n; i++ ) {
        for( j = 1; j <= i; j++ ) {
            printf( "%d", j );
        }
        printf( "\n" );
    }
    
    // the second part of the pattern
    for( i = n-1; i > 0; i-- ) {
        for( j = 1; j <= i; j++ ) {
            printf( "%d", j );
        }
        printf( "\n" );
    }
}