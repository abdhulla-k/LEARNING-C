#include <stdio.h>
int main() {
    int variable = 65;
    int i, j, k, n;
    // ask the the len
    printf( "Enter a number: " );
    scanf( "%d", &n );

    // print the pattern
    // first section
    for( int i = 0; i < n; i++ ) {
        for(int k= 0 ; k<i ; k++ ){
            printf(" ");
        }
        for( int j = 0; j < n-i; j++ ) {
            if( j % 2 == 0 ) {
                printf( "* " );
            } else {
                printf( "%c ", variable );
                variable++;
            }
        }
        printf( "\n" );
    }

    // second section
    for( i = n-2; i >= 0; i-- ) {
        for( k = 0; k < i; k++ ) {
            printf( " " );
        }
        for( j = 0; j < n - i; j++ ) {
            if( j % 2 == 0 ) {
                printf( "* " );
            } else {
                printf( "%c ", variable );
                variable++;
            }
        }
        printf( "\n" );
    }
}