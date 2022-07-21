// 9

#include <stdio.h>
int main() {
    int n = 5, i, j;

    // print the pattern
    for( i = 0; i <= n; i++ ) {
        for( j = 1; j <= i; j++ ) {
            printf( "%d ", j );
        }

        printf( "\n" );
    }
}