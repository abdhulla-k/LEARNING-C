#include <stdio.h>
int main() {
    int ar[100][100];
    int n, i, j, position, temp;

    // get length of the array
    printf( "Enter length of the array: ");
    scanf( "%d", &n );

    // get data to the array
    for( i = 0; i < n; i++ ) {
        for( j = 0; j < n; j++ ) {
            printf( "Enter a number for [%d],[%d] position: ",i,j );;
            scanf( "%d", &ar[i][j]);
        }
    }

    // print the array
    printf( "\nMetrix before:\n");
    for( i = 0; i < n; i++ ) {
        for( j = 0; j < n; j++ ) {
            printf( "%d\t",ar[i][j] );
        }
        printf( "\n" );
    }

    //transpos the matrix
    position = n-1;
    for( i = 0; i < n/2; i++ ) {
        temp = ar[i][position];
        ar[i][position] = ar[position][i];
        ar[position][i] = temp;
        position--;
    }

    // print the array
    printf( "\nMetrix after:\n");
    for( i = 0; i < n; i++ ) {
        for( j = 0; j < n; j++ ) {
            printf( "%d\t",ar[i][j] );
        }
        printf( "\n" );
    }
}