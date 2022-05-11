#include <stdio.h>
int main() {
    int i, j, position, number;
    int arr1[100] = { 1 , 2, 3, 4, 8, 9, 10 };
    int len = 7;

    // get the position there user want to insert an element
    printf( "Enter the psition you want to insert an element: " );
    scanf( "%d", &position );
    // get the element
    printf( "Enter the number you want to insert: ");
    scanf( "%d",&number );

    // insert element
    for( i = len-1; i >= 0; i-- ) {
        if( i == position-1 ) {
            arr1[i+1] = arr1[i];
            arr1[i] = number;
        }
        else if ( i > position-1 ) {
            arr1[i+1] = arr1[i];
        }
        else {
            break;
        }
    }

    // print the array
    printf( "\nElements of array: " );
    for( i = 0; i <= len; i++ ) {
        printf( "%d\t", arr1[i] );
    }
}