/* 15. Write a program in C to delete an element at desired position from an array.  */

#include <stdio.h>
int main() {
    int n, i, j, element;
    int deleted = 0;
    int arr[100];

    // get length of array from user
    printf( "Enter the length of the data you wnated to upload: " );
    scanf( "%d", &n );

    // get input from user
    for( i = 0; i < n; i++ ) {
        printf( "Enter the %d th data: ", i+1 );
        scanf( "%d", &arr[i] );
    }

    // get the element
    printf( "Enter the element to be deleted: " );
    scanf( "%d", &element );
    
    // find position of the element
    for( i = 0; i < n; i++ ) {
        if( arr[i] == element ) {
            deleted++;

            // delete the element
            for( j = i; j < n-1; j++ ) {
                arr[j] = arr[j+1];
            }
            i = i-1;
        }
    }

    // print the array
    for(i = 0; i < n-deleted; i++ ) {
        printf("%d,\t",arr[i]);
    }
}