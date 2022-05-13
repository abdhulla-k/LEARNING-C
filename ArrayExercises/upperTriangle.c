// 27. Write a program in C to print or display upper triangular matrix.

#include <stdio.h>
int main() {
    int ar[100][100];
    int n, i, j, space;

    // get the data from user
    printf( "Enter the length of your data: " );
    scanf( "%d", &n );
    
    for( i = 0; i < n; i++ ) {
        for( j = 0; j < n; j++ ) {
            printf( "Entr the number to the  %d, %d th position: ", i, j );
            scanf( "%d", &ar[i][j] );
        }
    }

    // find upper triangle
    space = 0;
    for( i = n/2; i < n; i++ ) {
        ar[0][i] = 0;
        ar[space][n-1] = 0;
        space++;
    }

    // print the metrix
    printf( "\nlower triangle: \n" );
    for( i = 0; i < n; i++ ) {
        for( j = 0; j < n; j++ ) {
            printf( "%d\t",ar[i][j] );
        }
        printf( "\n" );
    }
}