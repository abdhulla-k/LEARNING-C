/* 30. Write a program in C to accept two matrices and check whether they are equal. */

#include <stdio.h>
#include <stdbool.h>
int main() {
    int ar1[100][100];
    int ar2[100][100];
    int row1, colum1, rwo2, colum2, i, j;
    bool flag = true;

    // get row and column of ar1
    printf( "\nEnter the row of array1: " );
    scanf( "%d", &row1 );
    printf( "\nEnter the column of array1: " );
    scanf( "%d", &colum1 );

    // get the column and row of ar2
    printf( "\nEnter the row of array2: " );
    scanf( "%d", &rwo2 );
    printf( "\nEnter the column of array2" );
    scanf( "%d", &colum2 );

    // check is it equel or not. check the len of row and colum
    if( row1 != rwo2 && colum1 != colum2 ) {
        flag = false;
    }
    printf( "%d",flag );

    // get the data to array1
    printf( "\nEnter the data to the array1: " );
    for( i = 0; i < row1; i++ ) {
        for( j = 0; j < colum1; j++ ) {
            printf( "\nEnter the number to the [%d][%d] th postion of array1: ", i, j );
            scanf( "%d", &ar1[i][j] );
        }
    }

    printf( "\nEnter the data to the array1: " );
    for( i = 0; i < row1; i++ ) {
        for( j = 0; j < colum1; j++ ) {
            printf( "\nEnter the number to the [%d][%d] th postion of array1: ", i, j );
            scanf( "%d", &ar1[i][j] );
        }
    }

    if( flag = true ) {
        for( i = 0; i < row1; i++ ) {

            if( flag = false ) {
                break;
            }

            for( j = 0; j < colum1; j++ ) {
                if( ar1[i][j] != ar2[i][j] ) {
                    flag = false;
                    break;
                }
            }
        }
    }
    if( flag = true ) {
        printf( "\nmetrixes are equal " );
    } else {
        printf( "\nthe matrixes are not equal" );
    }

}
