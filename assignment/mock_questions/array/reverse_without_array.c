// 1. Write a program to reverse an array without using an additional array?

#include <stdio.h>
void printTheArray( int arr[], int n );
int main() {
    int n;
    int i;
    int arr[100];

    // get array data from user
    printf( "Enter the length of your array: " );
    scanf( "%d", &n );

    for( i = 0; i < n; i++ ) {
        printf( "Enter %d th element: " , i );
        scanf( "%d", &arr[i] );
    }

    // print the given array
    printTheArray( arr, n );

    // reverse the array
    int end = n-1;
    for ( i = 0; i < n/2; i++ ) {
        int temp = arr[i];
        arr[i] = arr[end];
        arr[end] = temp;
        end--;
    }

    // print the array
    printTheArray( arr, n );
}

void printTheArray( int arr[], int n ) {
    int i;
    printf( "\nArray data is: " );
    for( i = 0; i < n; i++ ) {
        printf( "%d\t", arr[i] );
    }
}