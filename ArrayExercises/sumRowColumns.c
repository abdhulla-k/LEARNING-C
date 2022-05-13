// 25. Write a program in C to find sum of rows an columns of a Matrix.

#include <stdio.h>
int main() {
    int ar[100][100];
    int sumRow[100];
    int sumColumn[100];
    int n, i, j, sum, positionCol;

    // get the data from user
    printf( "Enter the length of your data: " );
    scanf( "%d", &n );
    
    for( i = 0; i < n; i++ ) {
        for( j = 0; j < n; j++ ) {
            printf( "Entr the number to the  %d, %d th position: ", i, j );
            scanf( "%d", &ar[i][j] );
        }
    }
    
    // calculate the row sum
    sum = 0;
    positionCol = 0;
    for( i = 0; i < n; i++ ) {
        for( j = 0; j < n; j++ ) {
            sum += ar[i][j];
            sumColumn[j] += ar[i][j];
        }
        sumRow[i] = sum;
        sum = 0;
    }

    // print the array with sum of row
    for( i = 0; i < n; i++ ) {
        for( j = 0; j < n; j++ ) {
            printf( "%d\t", ar[i][j] );
        }
        // print su of i th row
        printf( "\tsum: %d", sumRow[i] );
        printf( "\n");
    }

    // print sum of column
    for( i = 0; i < n; i++ ) {
        printf( "%d\t", sumColumn[i]);
    }
}