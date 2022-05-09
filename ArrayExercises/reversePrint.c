/* 2. Write a program in C to read n number of values in an array and display it in reverse order. */

#include <stdio.h>
int main() {
    int arr[10], n, i;

    // get length of array from user
    printf( "Enter the length of the data you wnated to upload: " );
    scanf( "%d", &n );

    // get input from user
    for( i = 0; i < n; i++ ) {
        printf( "Enter the %d th data: ", i+1 );
        scanf( "%d", &arr[i] );
    }

    // print data
    printf( "Entered data is: \n");
    for( i = 0; i < n; i++ ) {
        printf( "%d,\t", arr[i] );
    }

    // print rverse data
    printf( "\nReversed data is: \n" );
    for( i = n-1; i >= 0; i-- ) {
        printf( "%d,\t", arr[i] );
    }

}