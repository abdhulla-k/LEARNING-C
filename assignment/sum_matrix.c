// 14

#include <stdio.h>
int main() {
    int arr1[100][100];
    int arr2[100][100];
    int sumArr[100][100];
    int len, i , j;

    printf( "Enter the length of array: " );
    scanf( "%d", &len );

    // get input data
    for( i = 0; i < len; i++ ) {
        for( j = 0; j < len; j++ ) {
            printf( "\nEnter the arr[%d] [%d] th value: ", i, j );
            scanf( "%d", &arr1[i][j] );
        }
    }

    for( i = 0; i < len; i++ ) {
        for( j = 0; j < len; j++ ) {
            printf( "\nEnter the arr[%d] [%d] th value: ", i, j );
            scanf( "%d", &arr2[i][j] );
        }
    }

    // sum of arr1 and arr2 and print
    for( i = 0; i < len; i++ ) {
        for( j = 0; j < len; j++ ) {
            sumArr[i][j] = arr1[i][j] + arr2[i][j];
            printf( "%d \t", sumArr[i][j] );
        }
        printf( "\n" );
    }
}