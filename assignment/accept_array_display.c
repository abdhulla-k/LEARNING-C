// 15

#include <stdio.h>
int getArray( int arr[] );
void displayArray( int arr[], int len );


int main() {
    int arr[100];

    int len = getArray( arr );

    displayArray( arr, len );
}

int getArray( int arr[] ) {
    int len, i;

    // get the length of array
    printf( "Enter the size of array: " );
    scanf( "%d", &len );

    // get value of array
    for( i = 0; i < len; i++ ) {
        printf( "\nEnter the %d the value: ", i );
        scanf( "%d", &arr[i] );
    }

}

void displayArray( int arr[], int len ) {
    // display the elements of array
    for( int i = 0; i < len; i++ ) {
        printf( "%d \t", arr[i] );
    }
}