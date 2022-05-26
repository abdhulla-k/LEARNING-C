/*
105. Write a program in C to find minimum number of swaps required to gather all elements less 
than or equals to k. Go to the editor
*/

#include <stdio.h>
int minSwap( int arr[], int length, int k );

int main() {
    int arr[] = { 2, 7, 9, 5, 8, 7, 4 , 2};
    int length = sizeof( arr ) / sizeof( arr[0] );
    int k = 7;

    // find the minimum swap required
    printf( "Them minimum swap required is: %d", minSwap( arr, length, k ));
}

// find the minimum swap
int minSwap( int arr[], int length, int k ) {
    int i, j;
    int contral = 0;
    int gelem = 0;

    for( i = 0; i < length; i++ ) {
        if( arr[i] <= k ) {
            contral++;
        } else {
            gelem++;
        }
    }

    int nomSwap = gelem;
    for( i = 0, j = contral; j < length; ++i, ++j ) {
        if( arr[i] > k ) {
            --gelem;
        }

        if( arr[j] > k ) {
            ++gelem;
        }

        if( gelem < nomSwap ) {
            nomSwap = gelem;
        }

        if( nomSwap < gelem ) {
            nomSwap = nomSwap;
        }
    }

    return nomSwap;
}
