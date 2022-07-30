// Program to Remove Duplicate Element in an array

#include <stdio.h>
int main() {
    int i, j, n, largest = 0;
    int arr[100];
    int position = 0;
    int limit;
    int secondLargest = 0;

    // ask the length of array
    printf( "Enter the length of array: " );
    scanf( "%d", &n );
    limit = n;

    // get array elements
    for( i = 0; i < n; i ++ ) {
        printf( "Enter %d th item: ", i );
        scanf( "%d", &arr[i] );
    }

    // delete duplicates
    for( i = 0; i < n; i++ ) {
        position = i+1;
        for( j = i + 1; j < limit; j++ ) {
            if( arr[i] != arr[j] ) {
                arr[position] = arr[j];
                position++;
            } else {
                limit--;
            }
        }
        if( i == n-1 ) {
            arr[position+1] = arr[n-1];
        }
    }

    // print deleted array
    for( i = 0; i < limit; i++ ) {
        printf( "%d ", arr[i] );
    }
}