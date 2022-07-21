// 12

#include <stdio.h>
int main() {
    int arr[100];
    int len, i, j, temp;
    int count = 0;

    // get length of array
    printf( "Enter the length of array: " );
    scanf( "%d", &len );

    // get array elements and count the even numbers
    for( i = 0; i < len; i++ ) {
        printf( "Enter the %d th value: ", i );
        scanf( "%d", & arr[i] );
    }

    // sort the array descendingly
    for( i = 0; i < len; i++ ) {
        for( j = i + 1; j < len; j++ ) {
            if( arr[i] < arr[j] ) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // print the array
    for( i = 0; i < len; i++ ) {
        printf( "%d\t", arr[i] );
    }
}