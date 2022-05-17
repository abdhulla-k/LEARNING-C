#include <stdio.h>
int main() {
    int arr[4][4] = {
        {1, 2, 3, 4},
        {12, 13, 14, 5},
        {11, 16, 15, 6},
        {10, 9, 8, 7}
    };
    int n, i, j, rowStart, rowEnd, colStart, colEnd, cotrl;
    
    n = 4;
    rowStart = 0;
    rowEnd = n-1;
    colEnd = n-1;
    colStart = 0;

    for( i = 0; i < (n*2) - 1; i++ ) {
        cotrl = i % 4;

        if( cotrl == 0 ) {
            for( j = colStart; j <= colEnd; j++ ) {
                printf( "%d\t", arr[rowStart][j]);
            }
            rowStart++;
        }

        if( cotrl == 1 ) {
            for( j = rowStart; j <= rowEnd; j++ ) {
                printf( "%d\t", arr[j][colEnd] );
            }
            colEnd--;
        }

        if( cotrl == 2 ) {
            for( j = colEnd; j >= colStart; j-- ) {
                printf( "%d\t", arr[rowEnd][j] );
            }
            rowEnd--;
        }

        if ( cotrl == 3 ) {
            for( j = rowEnd; j >= rowStart; j-- ) {
                printf( "%d\t", arr[j][colStart]);
            }
            colStart++;
        }
        

        //if( colStart > colEnd && rowEnd < rowStart ) {
        //    break;
        //}
    }
}