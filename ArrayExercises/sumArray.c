/* 3. Write a program in C to find the sum of all elements of the array.  */

#include <stdio.h>
int main() {
    int arr[10];
    int i;
    int n;
    int sum = 0;

    // get length of array from user
    printf( "Enter the length of the data you wnated to upload: " );
    scanf( "%d", &n );

    // get input from user
    for( i = 0; i < n; i++ ) {
        printf( "Enter the %d th data: ", i+1 );
        scanf( "%d", &arr[i] );
    }

    // calculate the sum of arr
    for( i = 0; i < n; i++ ) {
        sum += arr[i];
    }

    // print result
    printf( "Sum is: %d", sum );
}