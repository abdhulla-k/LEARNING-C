// 11
#include <stdio.h>
int main() {
    int arr[100];
    int len, i;
    int count = 0;

    // get length of array
    printf( "Enter the length of array: " );
    scanf( "%d", &len );

    // get array elements and count the even numbers
    for( i = 0; i < len; i++ ) {
        printf( "Enter the %d th value: ", i );
        scanf( "%d", & arr[i] );
        
        // check is it even or odd
        if( arr[i] % 2 == 0 ) {
            count += 1;
        }
    }

    // print the result
    printf( "There are %d even numbers.", count );
    
}