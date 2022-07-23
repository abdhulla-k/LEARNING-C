        //  03      
    //   02    04
//    01          05
// 00                06

#include <stdio.h>
int main() {
    int n, i, j;
    int count = 0;

    printf( "Enter a number: " );
    scanf( "%d", &n );

    for( i = 0; i <= n; i++ ) {
        count = i;
        for( j = 0; j < n*n*n; j++ ) {
            if( j ==  n  - i || j ==  n + i ) {
                if( j < 10 ) {
                    printf( "0%d", j );
                } else {
                    printf( "%d", j );
                }
            } else {
                printf( "  " );
            }

            if( (j % 2*n ) == 0 ) {
                
            }
        }
        printf( "\n" );
    }
}
//  j ==  n  - i || j ==  n + i 
// j % n - i == 0 || j %  n + i == 0