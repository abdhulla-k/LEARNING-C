/*
Update every array element with multiplication of previous and next numbers in array
*/

#include <stdio.h>
void updateArrayElements( int arr[], int length );
void printArray( int ar[], int length );

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6 };
    int length = sizeof( arr ) / sizeof( arr[0] );

    // print array
    printArray( arr, length );

    // update
    updateArrayElements( arr, length );

    // print updated array
    printArray( arr, length );
}

void printArray( int ar[], int length ) {

    // print all element of given array
    for( int i = 0; i < length; i++ ) {
        printf( "%d\t", ar[i] );
    }
    printf( "\n" );
}

void updateArrayElements( int arr[], int length ) {
    int i, j;
    int preElement = arr[0];
    int currentElement = 0;

    // go through the array
    for( i = 0; i < length; i++ ) {
        
        // update all elements
        if( i == 0 ) {
            currentElement = arr[i];
            arr[i] = preElement * arr[i+1];
            preElement = currentElement;
        } else if( i == length - 1 ) {
            currentElement = arr[i];
            arr[i] = preElement * arr[i];
        } else {
            currentElement = arr[i];
            arr[i] = preElement * arr[i+1];
            preElement = currentElement;
        }
    }
}