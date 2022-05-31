/*print the following pattern
X X X X
X X X
X
X
X X X
X X
X
X
X X
X
*/

#include <stdio.h>
int main() {
    int n = 5;
    int i, j, k;
    int count = 4;

    for( i = 0; i < n; i++ ) {
        if( i % 2 == 0 ) {
            for( j = 0; j < 2; j++ ) {
                for( k = 0; k < count; k++ ) {
                    printf( "X " );
                }
                printf( "\n" );
                count--;
            }
            count++;
        } else {
            for( j = 0; j < 2; j++ ) {
                printf( "X\n" );
            }
        }
    }
}