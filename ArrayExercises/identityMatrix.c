#include <stdio.h>
int main() {
    int ar[100][100];
    int n, i, j;

    // get length of array from user
    printf( "Enter the length of the data you wnated to upload: " );
    scanf( "%d", &n );

    // get input from user to array1 
    printf( "Enter data to array1\n\n" );
    for( i = 0; i < n; i++ ) {
        for( j = 0; j < n; j++ ){
            printf( "Enter the %d th data: ", i+1 );
            scanf( "%d", &ar[i][j] );
        }
    }

    // loop is also going to print the matrix
    printf( "the matrix is: \n" );

    // check is it identity
    int x = 0;

    for( i = 0; i < n; i++ ) {
        for( j = 0; j < n; j++ ) {

            // print the matrix
            printf( "%d\t", ar[i][j] );

            // check is it identity or not
            if( i == j ) {
                if( ar[i][j] != 1 ) {
                    x = 1;
                }
            } else {
                if( ar[i][j] != 0 ) {
                    x = 1;
                }
            }
        }
        printf( "\n" );
    }

    if( x == 1 ) {
        printf( "It is not an identity matrix" );
    } else {
        printf( "This is an identity matrix" );
    }
}