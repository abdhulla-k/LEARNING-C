/*

* * * * * * * * * *
*                 *
*   * * * * * *   *
*   *         *   *
*   *   * *   *   *
*   *   * *   *   *
*   *         *   *
*   * * * * * *   *
*                 *
* * * * * * * * * *

*/
#include <stdio.h>
#include <stdbool.h>
int main() {
    int n = 0;
    int i, j, r, d, l, u;
    char* arr[100][100];


    printf( "Enter a number: " );
    scanf( "%d", &n );

    int len = n+ (n-1);
    int top = 0;
    int right = len;
    int down = len;
    int left = 0;
    int element = n;
    bool flag = true;

    for( i = 0; i < n; i++ ) {
        for( j = 0; j < 4; j++ ) {

            for( r = left; r < right; r++ ) {
                // printf( "%d %d\n", top, r );
                if( flag == true ) {
                    arr[top][r] = "* ";
                } else {
                    arr[top][r] = "  ";
                }
            }
            top++;

            for( d = top; d < down; d++ ) {
                // printf( "%d %d\n", d, right -1  );
                if( flag == true ) {
                    arr[d][right-1] = "* ";
                } else {
                    arr[d][right-1] = "  ";
                }
            }
            right--;
            
            for( l = right - 1; l >= left; l-- ) {
                // printf( "%d %d\n", down - 1, l  );
                if( flag == true ) {
                    arr[down-1][l] = "* ";
                } else {
                    arr[down-1][l] = "  ";
                }
            }
            down--;

            for( u = down -1; u >= top; u--) {
                // printf( "%d %d\n", u, left  );
                if( flag == true ) {
                    arr[u][left] = "* ";
                } else {
                    arr[u][left] = "  ";
                }
            }
            left++;

            // count down te element of the array
            element--;
            flag = !flag;
        }   
    }

    // print the array
    for( i = 0; i < len; i++ ) {
        for( j = 0; j < len; j++ ) {
            printf( "%s ", arr[i][j] );
        }
        printf( "\n" );
    }

}
