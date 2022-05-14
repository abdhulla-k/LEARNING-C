/*A sparse martix is matrix which  has more zero elements than nonzero elements */

#include <stdio.h>
int main() {
    int ar[100][100];
    int row, coll, i, j;
    int zero = 0;

    // get input the length of row and column
    printf( "Enter the number of rows you want: " );
    scanf( "%d", &row );
    printf( "Enter the number of columns you want: " );
    scanf( "%d", &coll );

    // in put the data and check is it sparse or not
    for( i = 0; i < row; i++ ) {
        for( j = 0; j < coll; j++ ) {
            printf( "enter a number to [%d][%d] th position: ", i, j );
            scanf( "%d", &ar[i][j] );
            if( ar[i][j] == 0 ) {
                zero += 1;
            }
        }
    }

    if(( row + coll ) / 2 < zero ) {
        printf( "The metrix is a sparse matrix. \nThere is %d number of zeros", zero );
    } else {
        printf( "The matrix is not a sparse matrix. \nThere is %d number of zeros", zero );
    }

}