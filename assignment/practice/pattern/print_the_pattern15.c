#include <stdio.h>
int main() {
    int i, j, n;

    printf( "Enter a number: " );
    scanf( "%d", &n );
    int start = 0;
    int end = n;

    for( i = 0; i <= n; i++ ) {
        for( j = 0; j <= n; j++ ) {
            if( j == i || j == n-i ) {
                printf( "*" );
            } else {
                printf( " " );
            }
        }
        printf( "\n" );
    }
}