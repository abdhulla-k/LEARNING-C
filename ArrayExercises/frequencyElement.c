/* 8. Write a program in C to count the frequency of each element of an array. */

#include <stdio.h>
int main() {
    int arr1[100];
    int keeperArray[100];
    int n, i, j, k, flag, count, lenKeeper;

    // get length of array from user
    printf( "Enter the length of the data you wnated to upload: " );
    scanf( "%d", &n );

    // get input from user
    for( i = 0; i < n; i++ ) {
        printf( "Enter the %d th data: ", i+1 );
        scanf( "%d", &arr1[i] );
    }

    // count frequency of elements
    lenKeeper = 0;
    for( i = 0; i < n; i++ ) {

        // make sure that the count of i is not taken before
        flag = 0;
        for( k = 0; k < lenKeeper; k++ ){
            if( arr1[i] == keeperArray[k] ) {
                flag = 1;
                break;
            }
        }

        // if i is not included in the list of counted elements, then count the frequency
        if( flag == 0 ) {
            count = 0;
            for( j = 0; j < n; j++ ) {
                if( arr1[i] == arr1[j] ) {
                    count++;
    
                }
        }

        // print the frequency of i
        printf( "%d occurs %d times\n", arr1[i], count );

        // add counted element to keeperArray
        keeperArray[lenKeeper] = arr1[i];

        // incriment the lengthof keeperArray
        lenKeeper++;
        }
        
    }
}