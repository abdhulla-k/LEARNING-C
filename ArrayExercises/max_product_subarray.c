#include <stdio.h>
int maxProduct( int ar[], int n );
int min( int a, int b );
int max( int a , int b );

int main() {
    int arr1[] = { 6, -3, -10, 0, 2 };

    // length of the array
    int n = sizeof(arr1) / sizeof(arr1[0]);

    // call maxProduct function to find the maximum product
    int result = maxProduct( arr1, n );

    // print the maximum product
    printf( "maximum product is: %d", result );
}

// function to return minumum number from parameters
int min( int a, int b ) {
    return ( a > b )? b : a;
}

// function to return maximum number from parameters
int max( int  a, int b ) {
    return ( a < b )? b : a;
}

// function to find maximum product
int maxProduct( int ar[], int n ) {
    int curMin = 0;
    int curMax = 0;
    int maxUpto = 0;

    for( int i = 0; i < n; i++ ) {
        int temp = curMax;
        curMax = max( ar[i], max( ar[i] * curMax, ar[i] * curMin ));
        curMin = min( ar[i], min( ar[i] * temp, ar[i] * curMin ));
        maxUpto = max( curMax, maxUpto );
    }
    
    return maxUpto;
}