/* 9. Write a program in C to find the maximum and minimum element in an array. */
#include <stdio.h>
int main() {
    int n, i, j, min, max;
    int arr1[100];
    // get length of array from user
    printf( "Enter the length of the data you wnated to upload: " );
    scanf( "%d", &n );

    // get input from user
    for( i = 0; i < n; i++ ) {
        printf( "Enter the %d th data: ", i+1 );
        scanf( "%d", &arr1[i] );
    }

    // find minimum and maximum elements
    max = arr1[0];
    min = arr1[0];
    for( i = 0; i < n; i++ ) {

        // find maximum element
        if( max < arr1[i] ) {
            max = arr1[i];
        }

        // find minimum element
        if( min > arr1[i] ) {
            min = arr1[i];
        }
        
    }
    printf( "maximum element is: %d\nminimum element is: %d", max, min );
}