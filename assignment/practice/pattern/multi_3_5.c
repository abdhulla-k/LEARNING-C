/*
3
6  5
9  10 12
15 15 18 20
21 25 24 30 27
*/

#include <stdio.h>
int main() {
    int n, i, j;
    int num3 = 3;
    int num5 = 5;

    printf( "Enter a number: " );
    scanf( "%d", &n );

    for( i = 0; i < n; i++ ) {
        for( j = 0; j <= i; j++ ) {
            if( j % 2 == 0 ) {
                printf( "%d ", num3 );
                num3 += 3;
            } else {
                printf( "%d ", num5 );
                num5 += 5;
            }
        }
        printf( "\n" );
    }
}