#include <stdio.h>
int main() {
    int n, i, j, k;

    printf( "Enter the number of rows to show trinagle pattern: ");
    scanf( "%d", &n );

    // create algorithm
    for( i = 1; i <= n; i++ ) {
        for( j = 1; j <= n-i; j++ ) {
            printf( " " );
        }
        for( k = 1; k <= i; k++ ) {
            printf( " %d", k );
        }
        printf( "\n" );
    }
}