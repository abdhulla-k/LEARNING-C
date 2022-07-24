/*

5 5 5 5 5 5 5
5 4 4 4 4 4 5
5 4 3 3 3 4 5
5 4 3 2 3 4 5
5 4 3 3 3 4 5
5 4 4 4 4 4 5
5 5 5 5 5 5 5

*/

#include <stdio.h>
int main() {
    int n = 0;
    int i, j, r, d, l, u;
    int arr[100][100];


    printf( "Enter a number: " );
    scanf( "%d", &n );

    int len = n+ (n-1);
    int top = 0;
    int right = len;
    int down = len;
    int left = 0;
    int element = n;

    for( i = 0; i < n; i++ ) {
        for( j = 0; j < 4; j++ ) {

            for( r = left; r < right; r++ ) {
                // printf( "%d %d\n", top, r );
                arr[top][r] = element;
            }
            top++;

            for( d = top; d < down; d++ ) {
                // printf( "%d %d\n", d, right -1  );
                arr[d][right-1] = element;
            }
            right--;
            
            for( l = right - 1; l >= left; l-- ) {
                // printf( "%d %d\n", down - 1, l  );
                arr[down-1][l] = element;
            }
            down--;

            for( u = down -1; u >= top; u--) {
                // printf( "%d %d\n", u, left  );
                arr[u][left] = element;
            }
            left++;

            // count down te element of the array
            element--;
        }   
    }

    // print the array
    for( i = 0; i < len; i++ ) {
        for( j = 0; j < len; j++ ) {
            printf( "%d ", arr[i][j] );
        }
        printf( "\n" );
    }

}