// 22 

#include <stdio.h>
int main() {
    int arr[100][100];
    int arr2[100][100];
    int arr3[100][100];
    int n, i, j;

    printf( "Enter the length of arr: " );
    scanf( "%d", &n );

    // get data to the array1
    for( i = 0; i < n; i++ ) {
        for( j = 0; j < n; j++ ) {
            printf( "Enter [%d][%d] th element: ", i, j );
            scanf( "%d", &arr[i][j] );
        }
    }

    // get data to the array2
    for( i = 0; i < n; i++ ) {
        for( j = 0; j < n; j++ ) {
            printf( "Enter [%d][%d] th element: ", i, j );
            scanf( "%d", &arr2[i][j] );
        }
    }

    // add the arr and arr2
    for( i = 0; i < n; i++ ) {
        for( j = 0; j < n; j++ ) {
            arr3[i][j] = arr[i][j] + arr2[i][j];
            // also print now
            printf( "%d\t", arr3[i][j] );
        }
        printf( "\n" );
    }

}