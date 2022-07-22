// print all unique elements from an array

#include <stdio.h>
#include <stdbool.h>
int main() {
    int arr[100];
    int len;
    int i, j;
    bool a = true;

    // ask the len of arry
    printf( "Enter the length of array: " );
    scanf( "%d", &len );

    // get array data

    for( i = 0; i < len; i++ ) {
        printf( "Enter the %d th value: ", i );
        scanf( "%d", &arr[i] );
    }

    // print the unique elements
    for( i = 0; i < len; i++ ) {
        a = true;
        for( j = 0; j < len; j++ ) {
            if( arr[i] == arr[j] && i != j ) {
                a = false;
                break;
            }
        }
        if( a == true ) {
            printf( "%d", arr[i] );
        }
    }
}