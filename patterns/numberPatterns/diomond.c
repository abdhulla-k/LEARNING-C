#include <stdio.h>
int main() {
    int n, i, j, k;
    printf( "Enter the number of rows to show the number diomond pattern: " );
    scanf( "%d", &n );

    // create algorithm
    // first part of the pattern
    for( i = 1; i <= n; i++ ) {

        // print spaces
        for( j = 1; j <= n-i; j++ ) {
            printf( " " );
        }

        // print the number pattern
        for( k = 1; k <= i; k++ ) {
            printf( " %d", k );
        }
        printf( "\n") ;
    }

    // second partof the pattern
    for( i = n-1; i > 0; i-- ) {
        // print spces
        for( j = 1; j <= n-i; j++ ) {
            printf( " " );
        }
        for( k = 1; k <= i; k++ ) {
            printf( " %d", k );
        }
        printf( "\n" );
    }
}