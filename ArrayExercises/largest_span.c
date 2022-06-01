/*
Return the largest span found in the leftmost and rightmost appearances of same value in a given array
*/

#include <stdio.h>
void findSpan( int arr[], int length );

int main() {
    int arr[] = { 17, 42, 19, 54, 7, 27, 24, 17, 54, 73 };
    int arr_size = sizeof( arr ) / sizeof( arr[0] );

    // print the given array
    for( int i = 0; i < arr_size; i++ ) {
        printf( "%d\t", arr[i] );
    }
    printf( "\n" );

    // find the span
    findSpan( arr, arr_size );
}

void findSpan( int arr[], int length ) {
    int i, j;
    int span = 0;
    int count;
    int check;

    // find the span right
    for( i = 0; i <= length / 2; i++ ) {
        count = 1;
        check = arr[i];
        for( j = i + 1; j < length; j++ ) {
            count++;
            if( arr[j] == check && count > span ) {
                span = count;
            } 
        }

    }

    // fid the span left
    for( i = length - 1; i >= length / 2; i-- ) {
        count = 1;
        check = arr[i];
        for( j = i - 1; j > 0; j-- ) {
            count++;
            if( arr[j] == check && count > span ) {
                span = count;
            } 
        }

    }

    // print the span
    printf( "%d", span );
}