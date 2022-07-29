// Write a program to find the frequency of each element in the array
#include <stdio.h>
int main() {
    int i, j, n, largest;
    int arr[100];
    int len;

    // ask the length of array
    printf( "Enter the length of array: " );
    scanf( "%d", &n );

    // get array elements
    for( i = 0; i < n; i ++ ) {
        printf( "Enter %d th item: ", i );
        scanf( "%d", &arr[i] );
    }

    // find the count of each element using counting sort

    // find the largest element in array
    largest = arr[0];
    for( i = 0; i < n; i++ ) {
        largest = arr[i] > largest ? arr[i] : largest;
    }

    // create the counting array
    int counter[largest];

    // make all elements zero
    for( i = 0; i < largest; i++ ) {
        counter[i] = 0;
    }

    // count the elements
    for( i = 0; i < n; i++ ) {
        counter[arr[i]]++;
    }

    // print the counts
    for( i = 0; i < largest; i++ ) {
        if( counter[i] > 0 ) {
            printf( "element: %d, count: %d\n", i, counter[i] );
        }
    }
}