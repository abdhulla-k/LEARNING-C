/* Find the maximum for each and every contigious subarray of size k from a given array */
#include <stdio.h>
void findTheMax( int arr[], int length, int k, int numSubArray );
void printSub( int arr[], int n, int max );

int main() {
    int arr[] = { 1, 3, 6, 21, 4, 9, 12, 3, 16, 10 };
    int length = sizeof( arr ) / sizeof( arr[0] );
    int k = 4;  // len of sub array
    int numSubArry = (( length + 1 ) - k );

    findTheMax( arr, length, k, numSubArry );
}

void findTheMax( int arr[], int length, int k, int numSubArray ) {
    int start = 0;
    int end = k-1;
    int max = 0;

    for( int i = 0; i <= numSubArray; i++ ) {
        if( i == numSubArray ) {
            break;
        } else {
            for( int j = start; j <= end; j++ ) {
                printf("%d\t", arr[j] );
                max = ( arr[j] > max ) ? arr[j] : max;
            }
            printf( "---------->  %d",max );
            printf( "\n\n" );
            max = 0;
            start++;
            end++;

        }
    }
}

// void printSub( int arr[], int n, int max ){

//     // print the subarray
//     for( int i = 0; i < n; i++ ) {
//         printf( "%d\t", arr[i] );
//     }
//     // print the max
//     printf( "----------->  %d", max );
// }