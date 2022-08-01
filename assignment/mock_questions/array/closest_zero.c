// find closest element to zero
#include <stdio.h>
#include <stdbool.h>
int main() {
    int n, i, j, k, temp;
    int defference;
    bool flag = true;
    int arr[100];

    // get array data
    printf( "Enter length of array: " );
    scanf( "%d", &n );

    for( i = 0; i < n; i++ ) {
        printf( "Enter %d th element: " , i );
        scanf( "%d", &arr[i] );
    }

    // find closest element
    for( i = 0; i < n; i++ ) {
        if( arr[i] < 0 ) {
            k = arr[i] * -1;
            if( k < defference ) {
                defference = k;
                flag = false;
            }

        } else {
            if( defference > arr[i] ) {
                defference = arr[i];
                flag = true;
            }
        }
    }

    // print closest
    if( flag == false ) {
        printf( "%d", defference * -1 );
    } else {
        printf( "%d", defference );
    }
}