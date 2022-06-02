/*
 Write a program in C to find the index of first peak element in a given array.
*/

#include <stdio.h>
int main() {
    int arr[] = { 5, 12, 13, 20, 16, 19, 11, 7, 25 };
    int length = sizeof( arr ) / sizeof( arr[0] );

    // find the first peak
    for( int i = 0; i < length; i++ ) {
        if( arr[i] > arr[i + 1] ) {
            printf( "the first peak is at: %d", i );
            break;
        }
    }
}