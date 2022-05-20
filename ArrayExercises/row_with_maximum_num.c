/* 60. Write a program in C to find the row with maximum number of 1s */
#include <stdio.h>
int main() {
    int row, col;
    int i, j;
    int count = 0, rowWith1 = 0;

    // get user input
    printf( "Enter the number of row: " );
    scanf( "%d", &row );
    printf( "Enter the number of column: " );
    scanf( "%d", &col );
    int ar[row][col];
    for( i = 0; i < row; i++ ) {
        for( j = 0; j < col; j++ ) {
            printf( "Enter the [%d][%d] th element: ", i, j );
            scanf( "%d", &ar[i][j] );
        }
    }

    // find the row with maximum number of certain element.
    // now 1s
    for( i = 0; i < row; i++ ) {
        for( j = 0; j < col; j++ ) {
            if( ar[i][j] == 1 ) {
                count++;
            }
        }
        if( count > rowWith1 ) {
            rowWith1 = i;
        }
    }

    // prit the row
    printf( "row is: %d", rowWith1 );
}