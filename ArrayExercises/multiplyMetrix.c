/* 21. Write a program in C for multiplication of two square Matrices. */

#include <stdio.h>
int main() {
    int n, i, j, k;
    int ar1[100][100];
    int ar2[100][100];
    int ar3[100][100];

    // get length of array from user
    printf( "Enter the length of the data you wnated to upload: " );
    scanf( "%d", &n );

    // get input from user to array1 
    printf( "Enter data to array1\n\n" );
    for( i = 0; i < n; i++ ) {
        for( j = 0; j < n; j++ ){
            printf( "Enter the %d th data: ", i+1 );
            scanf( "%d", &ar1[i][j] );
        }
    }

    // get input from user to array2
    printf( "\nEnter data to array2\n" );
    for( i = 0; i < n; i++ ) {
        for( j = 0; j < n; j++ ){
            printf( "Enter the %d th data: ", i+1 );
            scanf( "%d", &ar2[i][j] );
        }
    }

    // multipy between two metrix
    int result = 0;
    // hold a position
    for( i = 0; i < n; i++ ) {
        for( j = 0; j < n; j++ ) {
            for( k = 0; k < n; k++ ){

                // add all multiplied values
                result += ar1[i][k] * ar2[k][j];
            }
            ar3[i][j] = result;
            result = 0;
        }
    }

    // print first array. ar1
    printf( "\nfirst array:\n" );
    for( i = 0; i < n; i++ ) {
        for( j = 0; j < n; j++ ) {
            printf( "%d\t", ar1[i][j]);
        }
        printf( "\n" );
    }

    // print second array. ar2
    printf( "\nfirst array:\n" );
    for( i = 0; i < n; i++ ) {
        for( j = 0; j < n; j++ ) {
            printf( "%d\t", ar2[i][j]);
        }
        printf( "\n" );
    }

    // print multiplied array
    printf( "\nResult\n" );
    for( i = 0; i < n; i++ ) {
        for( j = 0; j < n; j++ ) {
            printf( "%d\t", ar3[i][j]);
        }
        printf( "\n" );
    }

}