// 51. Write a program in C to find the maximum circular subarray sum of a given array.
 
#include <stdio.h>
int main() {
    int arr[] = { 10,  8,  -20,  5,  -3,  -5,  10,  -13,  11 };
    int n = 9;
    int i, j, k, flag, sum, result, count;

    result = 0;
    sum = 0;

    // go thrue all element
    for( i = 0; i < n; i++ ) {

        for( j = 0; j <( n - 1 ) + i; j++ ) {
            flag = 0;
            count = 0;
            for( k = i; k <= j; k++ ) {

                if( flag == 0 ) {
                    sum += arr[k];
                }

                if( arr[k] == arr[n - 1] ) {
                    flag = 1;
                }

                if( flag == 1 ) {
                    sum += arr[count];
                    count++;
                }
            }

            if( result < sum ) {
                result = sum;
            }
            sum = 0;
        }
    }

    printf( "result is: %d", result );

}