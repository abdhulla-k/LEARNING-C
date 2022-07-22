#include <stdio.h>
int main() {
    int n;
    int i, j;

    // ask n from user
    printf( "Enter a number to print the diomond patter: " );
    scanf( "%d",&n );

    // print the first section of the pattern as below
    // *****
    // ** **
    // *   *
    for( i = 0; i < n; i++ ) {
        // using i to print the space. n - i is the space between both side
        for( j = 0; j < n*2; j++ ) {

            // printing * if the j is not between n-i and n+i
            if( j < n - i || j >= n + i ) {
                printf( "* " );
            } else {
                printf( "  " );
            }
        }
        printf( "\n" );
    }

    // print the second section of the pattern like below
    // *    *
    // **  **
    // ******
    for( i = n-2; i >= 0; i-- ) {
        for( j = 0; j < n*2; j++ ) {
            if( j < n - i || j >= n + i ) {
                printf( "* " );
            } else {
                printf( "  " );
            }
        }
        printf( "\n" );
    }
}