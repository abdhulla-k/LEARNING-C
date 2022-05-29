/*
Write a program in C to rearrange an array such that even index elements are smaller and odd 
index elements are greater than their next. 
*/

#include <stdio.h>
void printArray( int ar[], int length );
void rearrangeArray( int arr[], int length );

int main() {
    int ar[] = { 6, 4, 2, 1, 8, 3 };
    int length = sizeof( ar ) / sizeof( ar[0] );
    
    // print the given array
    printArray( ar, length );

    // rearrange array
    rearrangeArray( ar, length );

    // print the array after arrangement
    printArray( ar, length );
}

void printArray( int ar[], int length ) {

    // print all element of given array
    for( int i = 0; i < length; i++ ) {
        printf( "%d\t", ar[i] );
    }
    printf( "\n" );
}

void rearrangeArray( int arr[], int length ) {
    int i, j, current;
    for( i = 0; i < length; i++ ) {
        // swap elements if the even index element become greater
        if( i % 2 == 0 && arr[i] > arr[i+1] ) {
            current = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = current;
        }
        // swap elements if the odd index element become smaller
        if(  i % 2 != 0 && arr[i] < arr[i+1]) {
            current = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = current;
        }
    }
}