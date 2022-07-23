#include <stdio.h>
int main() {
    int n = 6;
    int i, j;

    for( i = 0; i < n; i++ ) {
        for( int k = 0; k < n; k++ ) {
            for( j = 0; j < n * 2; j++ ) {
                if( j == n-i || j == n+i ) {
                    printf( "*" );
                } else {
                    printf( " " );
                }
            }
            printf( "\n" );
        }

    }
}