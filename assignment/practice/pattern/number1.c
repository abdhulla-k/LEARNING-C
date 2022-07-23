//       1
//     2 3 2
//   3 4 5 4 3
// 4 5 6 7 6 5 4

#include <stdio.h>
int main() {
    int n = 4;
    int i, j, k;
    int count = 0;

    for( i = 1; i <= n; i++ ) {
        for( j = 1; j < n; j++ ) {
            if( j <= n - i ) {
                printf( " " );
            }
        }
        for( j = i; j < i+i; j++ ) {
            printf( "%d", j );
            count = j;
        }
        for( j = 0; j < i-1; j++ ) {
            count--;
            printf( "%d", count );
        }
        printf( "\n" );
    }
}