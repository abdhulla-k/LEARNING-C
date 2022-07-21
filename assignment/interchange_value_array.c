// 10

#include <stdio.h>
void interchangeArray( int arr1[], int arr2[], int len );
void printTheArrayValue( int arr[], int len );

int main() {
    int arr1[100], arr2[100];
    int len, i;

    // get user input
    printf( "Enter the length of array: " );
    scanf( "%d", &len );

    // get array data
    for( i = 0; i < len; i++ ) {
        printf( "Enter %d the position of array: ", i );
        scanf( "%d", &arr1[i] );
    }
    printf( "\n" );

    printTheArrayValue( arr1, len );

    for( i = 0; i < len; i++ ) {
        printf( "Enter %d the position of array: ", i );
        scanf( "%d", &arr2[i] );
    }
    printf( "\n" );
    
    printTheArrayValue( arr2, len );

    // interchange and print the values of array
    interchangeArray( arr1, arr2, len );

}

void interchangeArray( int arr1[], int arr2[], int len ) {
    int i;
    int temp;

    // interchange the value
    for( i = 0; i < len; i++ ) {
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
    
    // print the value
    printf( "array 1: " );
    printTheArrayValue( arr1, len );

    printf( "array 2: " );
    printTheArrayValue( arr2, len );
}

void printTheArrayValue( int arr[], int len ) {
    int i;

    // print all values of given array
    for( i = 0; i < len; i++ ) {
        printf( "%d\t", arr[i] );
    }
    printf( "\n" );
}