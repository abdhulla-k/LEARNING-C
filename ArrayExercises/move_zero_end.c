// 58. Write a program in C to move all zeroes to the end of a given array.

#include <stdio.h>
int main() {
    int ar[] = { 1, 0, 2, 3, 0, 9, 0, 0, 9, 8, 22, 0 };
    int i = 0, temp;
    int position = (sizeof( ar ) / sizeof( ar[0] )) - 1;
    int n = position;

    // print the array befor moving zero
    printf( "array elements: \n" );
    for( i = 0; i <= position; i++ ) {
        printf( "%d\t", ar[i] );
    }

    // move all zero to end.
    i = 0;
    while( position > i ) {
        if( ar[i] == 0 ) {
            // If zero is the first one, move it to the last
            temp = ar[i];
            ar[i] = ar[position];
            ar[position] = temp;
            position--;
            i--;
        }
        i++;
    }

    // print the array after moved
    printf( "\narray elements: \n" );
    for( i = 0; i <= n; i++ ) {
        printf( "%d\t", ar[i] );
    }
}