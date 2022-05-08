#include <stdio.h>
int main() {
    int n, i, j;

    printf( "Enter the number of row to show trinagle pattern: " );
    scanf( "%d", &n );

    for( i = 1; i <= n; i++ ) {
        for( j = 1; j <= i; j++ ) {
            printf( "%c",64 + i );
        }
        printf( "\n" );
    }
}