/* 10. Write a program in C to separate odd and even integers in separate arrays. */

#include <stdio.h>
int main() {
    int n, i, positionEven, positionOdd, lenEven, lenOdd;
    int arr[100];
    int even[100];
    int odd[100];

    // get length of array from user
    printf( "Enter the length of the data you wnated to upload: " );
    scanf( "%d", &n );

    // get input from user
    for( i = 0; i < n; i++ ) {
        printf( "Enter the %d th data: ", i+1 );
        scanf( "%d", &arr[i] );
    }

    // check odd or even
    positionEven = 0;
    lenEven = 0;
    positionOdd = 0;
    lenOdd = 0;

    for( i = 0; i < n; i++ ) {
        // add element of arr to even if it is even
        if( arr[i] % 2 == 0 ) {
            even[positionEven] = arr[i];
            positionEven++;
            lenEven++;
        }
        // ad elent of arr to odd if it is odd
        else {
            odd[positionOdd] = arr[i];
            positionOdd++;
            lenOdd++;
        }
    }

    // print array odd 
    if( lenOdd > 0 ){
        printf( "The odd elements are: \n      ");
        for( i = 0; i < lenOdd; i++ ) {
            printf( "%d\t", odd[i] );
        }
    } else {
        printf( "The odd elements are: 0");
    }

    // prit array even
    if( lenEven != 0 ) {
        printf( "\nEven elements are: \n      " );
        for( i = 0; i < lenEven; i++ ) {
            printf( "%d\t", even[i] );
        }
    } else {
        printf( "The even elements are: 0" );
    }
}