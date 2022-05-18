/* 55. Write a program in C to check whether an array is subset of another array */

#include <stdio.h>
int isSubset( int ar1[], int subAr[], int size1, int size2 );

int main() {
    int arr[] = {  4, 8, 7, 11, 6, 9, 5, 0, 2 };
    int subAr[] = { 5, 4, 2, 0, 6 };
    int arrSize = sizeof( arr ) / sizeof( arr[0] );
    int sizeSub = sizeof( subAr ) / sizeof( subAr[0] );
    int i, j;

    // check is sbar a sub sett of arr
    int result = isSubset( arr, subAr, arrSize, sizeSub ); 

    // prit arr
    printf( "main array is: \t");
    for( i = 0; i < arrSize; i++ ) {
        printf( "%d\t",arr[i] );
    }

    // print sub array
    printf( "\nsub array is: \t");
    for( i = 0; i < sizeSub; i++ ) {
        printf( "%d\t",subAr[i] );
    }

    if( result == 0 ) {
        printf( "\nit is a sub array of main array" );
    } else {
        printf( "\nit is not a sub array of main array");
    }
}

int isSubset( int ar1[], int subAr[], int size1, int size2 ) {
    int i, j;
    int flag;

    // check is it sub array
    for( i = 0; i < size2; i++ ) {
        flag = 0;
        for( j = 0; j < size1; j++ ) {
            if (subAr[i] == ar1[j] ) {
                flag = 1;
                break;
            }
           
        }
        if( flag == 0 ) {
            return 1;
            break;
        }
    }
    return 0;
}