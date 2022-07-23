// 21

#include <stdio.h>
int main() {
    int n, i;
    int arr[100];
    int arr2[100];
    
    printf( "Enter the length of array: " );
    scanf( "%d", &n );

    // get input to array
    for( i = 0; i < n; i++ ) {
        printf( "Enter %d th value: ", i );
        scanf( "%d", &arr[i] );
    }

    // find adjacent of array
    for( i = 0; i < n - 1; i++ ) {
        arr2[i] = arr[i] * arr[i + 1];
    }

    // print the array
    for( i = 0; i < n - 1; i++ ) {
        printf( "%d\t", arr2[i] );
    }
}