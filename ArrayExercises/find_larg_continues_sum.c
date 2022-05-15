#include <stdio.h>
int maxSum(int a[],int n);

int main(){
    int n, i, j, result;
    int arr[100];

    // get length of array from user
    printf( "Enter the length of the data you wnated to upload: " );
    scanf( "%d", &n );

    // get input from user
    for( i = 0; i < n; i++ ) {
        printf( "Enter the %d th data: ", i+1 );
        scanf( "%d", &arr[i] );
    }
    
    // pass the array to maxSum
    result = maxSum( arr, n );

    // print the result
    printf( "large sum is: %d", result );
}


int maxSum(int a[],int n){

    int result = 0;
    int i, j, k, len, sum;

    // find the sums
    for( i = 0; i < n; i++ ) {
        for( j = 0; j < n; j++ ) {
           sum = 0;
           for( k = i; k < j; k++ ) {
               sum = sum + a[k];
               if( sum > result ) {
                   result = sum;
               }
           }
        }
    }

    return result;
}
