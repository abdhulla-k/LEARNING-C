/* 4. Write a program in C to copy the elements of one array into another array. */
#include <stdio.h>

void printArray();

int main() {
    int arr[10];
    int arr2[10];
    int n;
    int i;

    // get length of array from user
    printf( "Enter the length of the data you wnated to upload: " );
    scanf( "%d", &n );

    // get input from user
    for( i = 0; i < n; i++ ) {
        printf( "Enter the %d th data: ", i+1 );
        scanf( "%d", &arr[i] );
    }

    // copy elements of arr to arr1
    for( i = 0; i < n; i++ ) {
        arr2[i] = arr[i];
    }

    // print arr and arr2
    printf( "Data from arr: \n" );
    printArray( arr, n );
    printf( "\nData from arr2 is: \n");
    printArray( arr2, n );

}

void printArray( int arr[], int n ) {
    int i;

    // print all elements
    for( i = 0; i < n; i++ ) {
        printf( "%d,\t", arr[i]);
    }
}