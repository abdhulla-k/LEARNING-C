/*print the following pattern
X X X X _ _
_ X X X X
X
X X X _ _
_ X X X
X
X
X X _ _
_ X X
X
X
X
X _ _
_ X
X
X
X
X
*/
#include <stdio.h>
int main() {
    int n = 8;
    int i,j;
    int count1 = 4;
    int count2 = 1;

    for( i = 0; i < n; i++ ) {
        if( i % 2 == 0 ) {
            for( j = 0; j < count1 + 2; j++ ){
                ( j < count1 ) ? printf( "X " ) : printf( "_ " );
            }
            printf( "\n" );
            for( j = 0; j <= count1; j++ ) {
                ( j == 0 ) ? printf( "_ ") : printf( "X " );
            }
            printf( "\n" );
            count1--;
        } else {
            for( j = 0; j < count2; j++ ) {
                printf( "X\n" );
            }
            count2++;
        }
    }
}