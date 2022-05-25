/*
106. Write a program in C to convert the array in such a way that double its value and 
replace the next number with 0 if current and next element are same and rearrange the array 
such that all 0's shifted to the end. Go to the editor
*/
#include <stdio.h>
void updateArrayRearrange( int arr[], int length );
void moveZerosToEnd( int arr[], int length );
void printArray( int arr[], int length );

int main() {
    int arr[] = { 0, 3, 3, 3, 0, 0, 7, 7, 0, 9 };
    int length = sizeof( arr ) / sizeof( arr[0] );

    // print the array
    printArray(arr, length);

    // call the function updateArrayRearrange
    updateArrayRearrange( arr, length );
}

void updateArrayRearrange( int arr[], int length ) {
    if( length == 1 ) {
        return;
    }
    // go through the array
    for( int i = 0; i < length - 1; i++ ) {
        if( arr[i] != 0 && arr[i] == arr[i + 1] ) {
            // multiply i th element with 2 if the next element is equal to i th
            arr[i] = arr[i] * 2;
            arr[i + 1] = 0;
            i++;
        }
    }
    // call the fuction moveZerosToEnd to move all zero's to the end of the array
    moveZerosToEnd( arr, length );
}

// move all zeros to the end of the array
void moveZerosToEnd( int arr[], int length ) {
    int position = 0;

    // move all nonzero elements to first places of array
    for( int i = 0; i < length; i++ ) {
        if( arr[i] != 0 ) {
            arr[position++] = arr[i];  // post increment
        }
    }

    while( position < length ) {
        arr[position++] = 0;
    }

    printArray( arr, length );
}

// print the all elements of the array
void printArray( int arr[], int length ) {
    for( int i = 0; i < length; i++ ) {
        printf( "%d\t", arr[i] );
    }
    printf( "\n" );
}