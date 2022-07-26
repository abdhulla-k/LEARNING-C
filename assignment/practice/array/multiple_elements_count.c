#include <stdio.h>
int main() {
    int n, i, j, k;
    int arr[100];
    int arr2[100] = {0};
    int negatve = 0;
    int count = 0;
    int largeNumber = 0;
    int coutingLen = 0;

    // ask the length of the array
    printf( "Enter the length of the array: " );
    scanf( "%d", &n );

    // get input to the array
    for( i = 0; i < n; i ++ ) {
        printf( "Enter %d th element: ", i );
        scanf( "%d", &arr[i] );

        // find large number
        ( largeNumber < arr[i] ) ? ( largeNumber = arr[i] ) : ( largeNumber = largeNumber );

        // check is there a negative number; save that to a variable
        if( arr[i] < 0 ) {
            if( negatve > arr[i] ) {
                negatve = arr[i];
            }
        }
    }

    if( negatve < 0 ) {
        negatve = negatve * -1;
    }
    coutingLen = largeNumber + negatve;

    for( i = 0; i < n; i++ ) {
        arr2[arr[i] + negatve]++;
    }

    for( i = 0; i <= coutingLen; i++ ) {
        if( arr2[i] != 0 ) {
            printf( "\n element: %d, count: %d" , i-negatve, arr2[i] );
        }
        if( arr2[i] > 1 ) {
            count++;
        }
        printf( "\ni: %d\n", arr[i] );
    }

    printf( "\ncount: %d", count );
}