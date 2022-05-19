/* 57. Write a program in C to find minimum element in a sorted and rotated array.  */
// using binary search

#include <stdio.h>
int findMin( int ar[], int start, int end );

int main() {
    int ar[] = { 3, 4, 5, 6, 7, 9, 2 };
    int n = sizeof( ar ) / sizeof( ar[0] );
    int start = 0;
    int result = findMin( ar, start, n-1 );
    
    printf( "the minimum element is: %d", result );
}

// findMin function
int findMin( int ar[], int start, int end) {
    int mid = ( end + start ) / 2;

    // if the length of the array = 0; only one element would be there;
    if( end == start ) {
        return ar[start];
    }

    // if the lowest element to the left
    if( ar[start] > ar[mid] ) {
        return findMin( ar, start, mid );
    } else {
        
        // if lowest element to the right
        if( ar[mid] > ar[end] ) {
            findMin( ar, mid+1, end );
        } else {
            return ar[start];
        }
    }
}