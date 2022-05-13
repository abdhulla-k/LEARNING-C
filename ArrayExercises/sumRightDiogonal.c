// Write a program in C to find sum of right diagonals of a matrix.
#include <stdio.h>
int main() {
    int ar[100][100];
    int n, i, j, sumRight;

    // get the data from user
    printf( "Enter the length of your data: " );
    scanf( "%d", &n );
    
    for( i = 0; i < n; i++ ) {
        for( j = 0; j < n; j++ ) {
            printf( "Entr the number to the  %d, %d th position: ", i, j );
            scanf( "%d", &ar[i][j] );
        }
    }

    // calculate the sum of right diogonal
    sumRight = 0;
    for( i = 0; i < n; i++ ) {
        sumRight += ar[i][i];
    }

    // print the array
    for( i = 0; i < n; i++ ) {
        for( j = 0; j < n; j++ ) {
            printf( "%d\t", ar[i][j] );
        }
        printf( "\n");
    }

    // print the sum
    printf( "result is: %d", sumRight );
}