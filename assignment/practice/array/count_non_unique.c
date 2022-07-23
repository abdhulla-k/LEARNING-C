#include <stdio.h>
int main() {
    // using method of counting sort
    int arr[] = { 1, 2, 3, 3, 5, 4, 9, 8, 1, 2 };
    int n = 10;
    int i;
    int count = 0;
    int largest = 0;

    // find the largest number in arr
    for( i = 0; i < n; i++ ) {
        if( largest < arr[i] ) {
            largest = arr[i];
        }
    }

    int arr2[largest+1];

    // count the elements. using counting sort method
    for( i = 0; i < n; i++ ) {
        arr2[arr[i]]++;
    }

    // count the numbers
    for( i = 0; i < largest + 1; i++ ) {
        if( arr2[i] > 1 ) {
            count++;
        }
    }

    // print the count
    printf( "count of duplicated element: %d", count );
}