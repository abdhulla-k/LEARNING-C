/* 6. Write a program in C to print all unique elements in an array. */
#include <stdio.h>
int main() {
    int arr1[100];
    int arr2[100];
    int n, i, j;
    int position = 0;
    int len = 0;

    // get length of array from user
    printf( "Enter the length of the data you wnated to upload: " );
    scanf( "%d", &n );

    // get input from user
    for( i = 0; i < n; i++ ) {
        printf( "Enter the %d th data: ", i+1 );
        scanf( "%d", &arr1[i] );
    }

    // find the unique elements
    for( i = 0; i < n; i++ ) {
        int flag = 0;
        for( j = 0; j < n; j++ ) {

            // check is it unique
            if( i == j ) {
                continue;
            }
            else {
                if( arr1[i] == arr1[j] ){
                    flag = 0;
                    break;
                }
                else{
                    flag = arr1[i];
                }
            }
            
                
        }
        if( flag != 0 ) {
            arr2[position] = flag;
            position++;
            len++;
        }
    }

    // print all unique elements
    printf( "Unique elements are: \n" );
    for( i = 0; i < len; i++ ) {
        printf( "%d,\t", arr2[i] );
    }
    
}