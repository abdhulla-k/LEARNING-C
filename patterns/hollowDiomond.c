#include <stdio.h>
int main() {
    // hollow diomond star pattern
    int n, i, j, k, arr[2];

    printf( "Enter a number: " );
    scanf( "%d",&n );

    // first section of the pattern
    for( i = 1; i <= n; i++ ) {
        for ( j = 1; j <= n-i; j++ ) {
            printf( " " );
        }
        printf("*");
        for( k = 1; k <= i-1; k++ ) {
            if( k == i-1 ) {
                printf(" *");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    // section two of the pattern
    for( i = n-1; i > 0; i-- ) {
        for( j = 1; j <= n-i; j++ ) {
            printf( " " );
        }
        for( k = 1; k <= i; k++ ) {
            if( k == i | k == 1) {
                printf( "* " );
            }
            else{
                printf( "  " );
            }
        }
        printf( "\n" );
    }
}