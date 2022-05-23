/* 
    print the following pattern
    ******
    **  **
    *    *
    *    *
    **  **
    ******

*/
#include <stdio.h>
int main() {
    int i, j;
    int n = 5;
    int flag = 0;

    for( i = 0; i < n; i++ ) {
        if( i == n-1 ) {
            flag = 1;
        }
        for( j = 0; j < (n*2); j++ ) {
            if( j < n ) {
                if( j < n - i ) {
                printf( "* " );
                } else {
                    printf( "  " );
                }
            } else {
                if( j < n+i ) {
                    printf( "  " );
                } else {
                    printf( "* " );
                }
            }
        }
        if( flag == 0 ) {
            printf( "\n" );
        }
    }

    for( i = n; i >= 0; i-- ) {
        for( j = 0; j < n*2; j++ ) {
            if( j < n ) {
                if( j < n - i ) {
                    printf( "* " );
                } else {
                    printf( "  " );
                }
            } else {
                if( j < n + i ) {
                    printf( "  " );
                } else {
                    printf( "* " );
                }
            }
        }
        printf( "\n" );
    }
}