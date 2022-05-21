/* Write a program in C to replace every element with the greatest element on its right side */

#include <stdio.h>
void changeElements( int arr[], int n, int StartIndex );

int main() {
    int ar[] = { 7, 5, 8, 9, 6, 8, 5, 7, 4, 6 };
    int n = sizeof( ar ) / sizeof( ar[0] );
    int startIndex = 1;

    changeElements( ar, n, startIndex );
}


// function to replace the element
void changeElements( int arr[], int n, int startIndex ) {
    int largest = 0;
    int endingIndex = 0;
    int i, j;
    int temp = startIndex;
    int flag = 0;

    // find the largest element
    for( i = temp; i < n; i++ ) {
        if( largest < arr[i] ) {
            startIndex = i + 1;
            largest = arr[i];
            endingIndex = i;
        }
    }


    if( temp == n ) {
        flag = 1;
    }

    // replace elements with largest
    if( arr[temp] < largest && arr[temp] < largest ) {
        for( j = temp-1; j < endingIndex; j++ ) {
            arr[j] = largest;
        }
    } else {
        for( j = temp-1; j < endingIndex; j++ ) {
            arr[j] = arr[temp];
        }
    }

    // print all elements
    if( flag == 1 ) {
        for( i = 0; i < n; i++ ) {
            printf( "%d\t", arr[i] );
        }
    }

    if( temp < startIndex && endingIndex <= n ) {
        changeElements( arr, n, startIndex );
    }
} 