// arrange positive negative

#include <stdio.h>
int main() {
    int n, i, j, k, temp;
    int arr[100];

    // get array data
    printf( "Enter length of array: " );
    scanf( "%d", &n );

    for( i = 0; i < n; i++ ) {
        printf( "Enter %d th element: " , i );
        scanf( "%d", &arr[i] );
    }

    // re arrage array negative
    for( i = 0; i < n; i += 2 ) {
        if( arr[i] < 0 ) {
            for( j = i + 1; j < n; j++ ) {
                if( arr[j] > 0 ) {
                    temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                    break;
                }
            }
        }
    }

    // re arrage positeive
    for( i = 1; i < n; i += 2 ) {
        if( arr[i] > 0 ) {
            for( j = i + 1; j < n; j++ ) {
                if( arr[j] < 0 ) {
                    temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                    break;
                }
            }
        }
    }

    // print array
    for( i = 0; i < n; i++ ) {
        printf( "%d\t", arr[i] );
    }
}