// 59. Write a program in C to return the counting sort on an array

#include <stdio.h>
int main() {
    int ar[] = { 1, 3, 5, 8, 2, 3, 2, 0, 0 };
    int n = sizeof( ar ) / sizeof( ar[0] );
    int i, j, largNum = 0;
    
    // find the largest number
    for( i = 0; i < n; i++) {
        if( ar[i] > largNum ) {
            largNum = ar[i];
        }
    }

    // print array
    for( i = 0; i < n; i++ ) {
        printf( "%d\t", ar[i] );
    }

    // create an array with length of largest element + 1 and the every element shuld be zero
    int count[9] = {0};

    // count the element
    // find the count of each element and put that count in count array's elemen th position
    for( i = 0; i < n; i++ ) {
        count[ar[i]]++;
    }

    // sort the array and 
    // print sorted array
    printf( "sorted array:\n" );
    for( i = 0; i < largNum+1; i++ ) {
        for( j = 1; j <= count[i]; j++ ) {
            printf( "%d\t", i );
        }
    }

}