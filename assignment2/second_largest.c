// Write a program to find Second Largest Number in an Array
#include <stdio.h>
int main() {
    int i, j, n, largest = 0;
    int arr[100];
    int len;
    int secondLargest = 0;

    // ask the length of array
    printf( "Enter the length of array: " );
    scanf( "%d", &n );

    // get array elements
    for( i = 0; i < n; i ++ ) {
        printf( "Enter %d th item: ", i );
        scanf( "%d", &arr[i] );

        // save larges
        largest = largest < arr[i] ? arr[i] : largest;
    }

    // find second largest
    for( i = 0; i < n; i++ ) {
        if( arr[i] > secondLargest && arr[i] != largest ) {
            secondLargest = arr[i];
        }
    }

    // print second larges element
    printf( "Second largest element is: %d", secondLargest );
}