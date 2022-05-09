/* 5. Write a program in C to count a total number of duplicate elements in an array. */

#include <stdio.h>
int main() {
    int n, i, j, flag, count = 0;
    int arr1[100];
    int arr2[100];
    int arr3[100];

    // get length of array from user
    printf( "Enter the length of the data you wnated to upload: " );
    scanf( "%d", &n );

    // get input from user
    for( i = 0; i < n; i++ ) {
        printf( "Enter the %d th data: ", i+1 );
        scanf( "%d", &arr1[i] );
    }

    // copy arr1 one into arr2
    for( i = 0; i < n; i++ ) {
        arr2[i] = arr1[i];
    }

    //count the duplicates
    for( i = 0; i < n; i++ ) {
        flag = 1;
        for( j = 0; j < n; j++ ) {
            if( arr1[i] == arr2[j] ) {
                arr3[j] = flag;
                flag++;
            }
        }
    }

    // print the count
    for( i = 0; i < n; i++ ) {
        if( arr3[i] == 2 ) {
            count += 1;
        }
    }
    printf( "%d",count );
}