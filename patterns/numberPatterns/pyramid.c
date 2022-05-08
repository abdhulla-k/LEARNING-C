#include <stdio.h>
int main() {
    int n, i, j, k;
    
    printf( "Enter the number of rows to show number pyramid pattern: ");
    scanf( "%d", &n);

    // first section of the pattern
    for( i = 1; i <= n; i++ ) {
        for( j = 1; j <= n; j++ ) {
            if( j <= i ) {
                printf( "%d", j );
            }
            else {
                printf( " " );
            }
        }
            // section two of the pattern
        for( j = n; j > 0; j-- ) {
            if( j == i | j < i) {
                printf( "%d", j );
            }
            else {
                printf(" ");
            }
        }
        printf( "\n" );
    }
}