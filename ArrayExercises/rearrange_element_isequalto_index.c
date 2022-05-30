/* Write a program in C to rearrange an array such that arr[i]=i
Given array contains N elements, from 0 to N – 1. All elements within the range may not be 
present in the array. There will be -1 if an element within the range is not present in the 
array.
*/
#include <stdio.h>
void printArray( int ar[], int length );
void rearrange( int arr[], int length );

int main() {
    int arr[] = { 2, 5, -1, 6, -1, 8, 7, -1, 9, 1 };
    int length = sizeof( arr ) / sizeof( arr[0] );

    // print the array
    printArray( arr, length );

    // rearrange
    rearrange( arr, length );
}

void rearrange( int arr[], int length ) {
    int i, j;

    // go through the array
    for( i = 0; i < length; i++ ) {
        if( arr[i] != i && arr[i] != -1 ) {
            
            // loop since the arr[i] = index or -1;
            while( arr[i] != i && arr[i] != -1 ) {

                // swap between 
                int x = arr[i];
                int temp = arr[x];
                arr[x] = arr[i];
                arr[i] = temp;
            }
        }
    }

    // print the array
    printArray( arr, length );
}

void printArray( int ar[], int length ) {

    // print all element of given array
    for( int i = 0; i < length; i++ ) {
        printf( "%d\t", ar[i] );
    }
    printf( "\n" );
}