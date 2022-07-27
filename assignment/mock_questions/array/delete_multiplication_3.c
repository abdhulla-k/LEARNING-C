#include <stdio.h>
void printTheArray( int arr[], int n );

int main() {
    int i, j, k;
    int n;
    int arr[100];
    int temp = 0;
    int len;

    // get array data from user
    printf( "Enter the length of your array: " );
    scanf( "%d", &n );
    len = n;

    for( i = 0; i < n; i++ ) {
        printf( "Enter %d th element: " , i );
        scanf( "%d", &arr[i] );
    }

    // print the given array
    printTheArray( arr, n );

    // delete
    for( i = 0; i < n; i++ ) {
        if( arr[i] % 3 != 0 ) {
            arr[temp] = arr[i];
            temp++;
        } else {
            len--;
        }
    }

    printTheArray( arr, len );
}

void printTheArray( int arr[], int n ) {
    int i;
    printf( "\nArray data is: " );
    for( i = 0; i < n; i++ ) {
        printf( "%d\t", arr[i] );
    }
}