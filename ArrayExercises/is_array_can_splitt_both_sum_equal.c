/*
 Write a program in C to check if an array can be splitted in such a position that, the sum 
 of left side of the splitting is equal to the sum of the right side.
 */
#include <stdio.h>
#include <stdbool.h>
void isItCanBeSplitted( int arr[], int length );

int main() {
    int arr[] = { 1, 3, 3, 8, 4, 3, 2, 3, 3 };
    int length = sizeof( arr ) / sizeof( arr[0] );

    // print the array
    for( int i = 0; i < length; i++ ) {
        printf( "%d\t", arr[i] );
    }

    // check is it can be splitted
    isItCanBeSplitted( arr, length );
}

void isItCanBeSplitted( int arr[], int length ) {
    int i, j;
    int countLeft = 0;
    int sum = 0;
    bool flag = false;

    // find the sum of the array
    for( i = 0; i < length; i++ ) {
        sum += arr[i];
    }

    // check is it splitable
    for( i = 0; i < length; i++ ) {
        countLeft += arr[i];
        sum -= arr[i];
        if( countLeft == sum ) {
            flag = true;
            break;
        }
    }

    // print the result
    ( flag == true ) ? printf( "\nThe array can be split in a position where the sum of both side are equal.") :
     printf( "\nThe array can not be split at any position where the sum of both side are equal. " );
}