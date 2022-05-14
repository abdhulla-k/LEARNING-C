/* Write a program in C to find a pair with given sum in the array.  */
#include <stdio.h>
int main() {
    int ar1[100];
    int ar2[100];
    int n, i, j, sum, ar2pos;

    // get length of array from user
    printf( "Enter the length of the data you wnated to upload: " );
    scanf( "%d", &n );

    // get input from user
    for( i = 0; i < n; i++ ) {
        printf( "Enter the %d th data: ", i+1 );
        scanf( "%d", &ar1[i] );
    }

    // get te sum
    printf( "Enter the number to get the pairs: " );
    scanf( "%d", &sum );

    // get the combination
    ar2pos = 0;
    for( i = 0; i < n; i++ ) {
        for( j = n-1; j >= i; j-- ) {
            if( ar1[i] + ar1[j] == sum ) {
                ar2[ar2pos] = ar1[i];
                ar2pos++;
                ar2[ar2pos] = ar1[j];
                ar2pos++;
            }
        }
    }

    // print all pairs
    for( i = 0; i < ar2pos; i+=2 ) {
        printf( "(%d, %d)\t", ar2[i], ar2[i+1] );
    }
}