#include <stdio.h>
int main() {
    int arr1[100];
    int arr2[100];
    int arr3[100];
    int len1, len2;
    int position2 = 0;
    int i, j, k;

    // get the data of array1
    printf( "Enter the length of first array: " );
    scanf( "%d", &len1 );

    for( i = 0; i < len1; i++ ) {
        printf( "Enter the %d th element of arr1: ", i );
        scanf( "%d", &arr1[i] );
    }

    // get the dat to arr2
    printf( "Enter the length of second array: " );
    scanf( "%d", &len2 );

    for( i = 0; i < len2; i++ ) {
        printf( "Enter the %d th element of arr2: ", i );
        scanf( "%d", &arr2[i] );
    }

    // merge the array
    // iterate merged length times
    for( i = 0; i < len1 + len1; i++ ) {

        // got through first array
        for( j = 0; j < len1; j++ ) {
            if( position2 != len2 ) {

                // check is it lager the arr2[k] than arr[i]
                for( k = position2; k < len2; k++ ) {
                    if( arr1[j] < arr2[k] ) {
                        arr3[i] = arr2[k];
                        i++;
                        position2 = k+1;  // save the position we iterated through arr2;

                        // add both two element to arr3 if both elements are same
                    } else if( arr1[j] == arr2[k] ) {
                        arr3[i] = arr1[j];
                        i++;
                        arr3[i] = arr2[k];
                        i++;
                        position2 = k+1;
                        break;

                        // save arr1[j] if that greater than arr2[j]
                    } else if( arr1[j] > arr2[k] ) {
                        arr3[i] = arr1[j];
                        i++;
                        break;
                    }
                }
            }
        }
    }

    // print the merged array
    for( i = 0; i < len1 + len2; i++ ) {
        printf( "%d\t", arr3[i]);
    }

}