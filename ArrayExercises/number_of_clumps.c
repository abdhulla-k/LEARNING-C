/*
100. Write a program in C to return the number of clumps(a series of 2 or more adjacent 
elements of the same value) in a given array.
 */

#include <stdio.h>
void printArray( int *arr, int length );
int findClumps( int arr[], int length );

int main() {
    int arr[] = { 17, 42, 42, 7, 24, 24, 17, 54, 17 };
    int length = sizeof( arr ) / sizeof( arr[0] );

    // find and print the clumps
    // pass array to function
    printf( "clumps: %d", findClumps( arr, length ));
}

void printArray( int *arr, int length ) {
    // print all element
    for( int i = 0; i < length; i++ ) {
        printf( "%d\t", arr[i] );
    }
    printf( "\n" );
}

int findClumps( int arr[], int length ) {
    int i, j;
    int flag = 0;
    int count = 0;

    // find the clumps
    // clumps means a series of 2 or more adjacent elements of the same value
    for( i = 1; i < length; i++ ) {
        if( arr[i] == arr[i-1] && flag == 0 ) {
            count++;
            flag = 1;
        } else if( arr[i] != arr[i-1] ) {
            flag = 0;
        }
    }
    
    // retucn the count
    return count;
}