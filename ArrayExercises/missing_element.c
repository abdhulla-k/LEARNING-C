#include <stdio.h>
int main() {
    int n, i, j, element;
    int arr[100];

    // get length of array from user
    printf( "Enter the length of the data you wnated to upload: " );
    scanf( "%d", &n );

    // get input from user
    for( i = 0; i < n; i++ ) {
        printf( "Enter the %d th data: ", i+1 );
        scanf( "%d", &arr[i] );
    }

    // find the missing element
    int flag = 0;
    for( i = 0; i <= n; i++ ) {
        flag = 0;
        for( j = 0; j < n; j++ ) {
            if( arr[j] == i + 1 ) {
                flag = 1;
                break;
            }
        }
        if( flag == 0 ) {
            printf( "missing element is: %d", i+1 );
            break;
        }
    }

    
}