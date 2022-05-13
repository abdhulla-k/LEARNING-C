// 24. Write a program in C to find the sum of left diagonals of a matrix.

#include <stdio.h>
int main() {
    int ar[100][100];
    int n, i, j, position, sumLeft;

    // get the data from user
    printf( "Enter the length of your data: " );
    scanf( "%d", &n );
    
    for( i = 0; i < n; i++ ) {
        for( j = 0; j < n; j++ ) {
            printf( "Entr the number to the  %d, %d th position: ", i, j );
            scanf( "%d", &ar[i][j] );
        }
    }

    // calculate the left diogonal of matrix
    position = n-1;
    sumLeft = 0;
    for( i = 0; i < n; i++ ) {
        sumLeft += ar[i][position];
        position--;
    }

    // print the array
    for( i = 0; i < n; i++ ) {
        for( j = 0; j < n; j++ ) {
            printf( "%d\t", ar[i][j] );
        }
        printf( "\n");
    }

    // prit the sum
    printf( " sum of left diononal is: %d", sumLeft );
}