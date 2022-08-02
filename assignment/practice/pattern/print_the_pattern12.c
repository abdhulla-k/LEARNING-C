/*

5
4 5
3 4 5
2 3 4 5
1 2 3 4 5

*/

#include <stdio.h>
int main() {
    int n, i, j, k;
    int first = 2, second = 2;

    printf( "Enter a number: " );
    scanf( "%d", &n );

    // print the pattern
    for( i = 0; i < n; i++ ) {
        for( j = n - i; j <= n; j++ ) {
            printf( "%d", j );
        }
        printf( "\n" );
    }
}