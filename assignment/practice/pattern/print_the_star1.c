// *         *
// **        **
// ***       ***
// ****      ****
// *****     *****
// ******    ******
// *******   *******
// ********  ********
// ********* *********
// ********************

#include <stdio.h>
int n = 10;
int main() {
    for( int i = 0; i < n; i++ ) {
        for( int j = 0; j <= n + i; j++ ) {
            if( j <= i || j >= n ) {
                printf( "*" );
            } else {
                printf( " " );
            }
        }
        printf( "\n" );
    }
}