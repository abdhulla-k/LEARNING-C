/* 7. Write a program in C to merge two arrays of same size sorted in decending order */

#include <stdio.h>
int main() {
    int arr1[100];
    int arr2[100];
    int arr3[100];
    int n1, n2, n3, i, j, temp;

    // get length of array1 from user
    printf( "Enter the length of the data you wnated to upload: " );
    scanf( "%d", &n1 );

    // get input from user to array1
    for( i = 0; i < n1; i++ ) {
        printf( "Enter the %d th data: ", i+1 );
        scanf( "%d", &arr1[i] );
    }

    // get length of array2 from user
    printf( "Enter the length of the data you wnated to upload: " );
    scanf( "%d", &n2 );

    // get input from user to array2
    for( i = 0; i < n2; i++ ) {
        printf( "Enter the %d th data: ", i+1 );
        scanf( "%d", &arr2[i] );
    }

    // length of the merged array
    n3 = n1 + n2;
    
    // merge the arrays
    // add all the elements of arr1 into arr3
    for( i = 0; i < n1; i++ ) {
        arr3[i] = arr1[i];
    }

    // add all the elements of arr2 into arr3
    j = 0;
    for( i = n1; i < n3; i++ ) {
        arr3[i] = arr2[j];
        j++;
    }

    // sort the array in decending order. buble sorting
    for( i = 0; i < n3; i++ ) {
        for( j = 0; j < n3; j++ ) {
            
            if( arr3[i] > arr3[j] ) {
                temp = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = temp;
            }
        }
    }
    // print all elements of sorted array
    for(i = 0; i < n3; i++ ) {
        printf("%d,\t",arr3[i]);
    }
}