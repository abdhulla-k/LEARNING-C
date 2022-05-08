#include <stdio.h>
int main() {
    int n, i, j, s;

    printf( "Enter number of rows to show star triangle pattern: ");
    scanf( "%d", &n );

    // create algorithm
    for( i = 1; i <= n; i++ ) {
        for( j = 1; j <= n-i; j++ ) {
            printf( " " );
        }
        for( s = 1; s <= i; s++ ) {
            printf( " *" );
        }
        printf( "\n" );
    }
}