#include <stdio.h>
int main() {
    int arr[100];
    int n, i, j;
    int larg = 0, secondLarg = 0;

    // get length of array1 from user
    printf( "Enter the length of the data you wnated to upload: " );
    scanf( "%d", &n );

    // get input from user to array1
    for( i = 0; i < n; i++ ) {
        printf( "Enter the %d th data: ", i+1 );
        scanf( "%d", &arr[i] );
    }

    // find largest element
    for( i = 0; i < n; i++ ) {
        if( arr[i] > larg ) {
            larg = arr[i];
        }
    }

    // find second largest element
    for( i = 0; i < n; i++ ) {
        if( arr[i] == larg ) {
            i++;
            i--;
        }
        else{
            if( secondLarg < arr[i] ) {
                secondLarg = arr[i];
            }
        }
    }
    
    // print second largest element
    printf( "Second largest element is: %d", secondLarg );
}