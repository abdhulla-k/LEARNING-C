#include <stdio.h>
int main() {
    // sort in descending order
    int arr[] = { 2, 8, 10, 1, 7, 5, 3, 4, 6, 9 };
    
    for( int i = 0; i<sizeof(arr)/sizeof(arr[0]-1); i++ ) {

        for( int j =0; j<sizeof(arr)/sizeof(arr[0]); j++ ){

            if( arr[i] > arr[j] ) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for( int i= 0; i < sizeof(arr)/sizeof(arr[0]); i++ ) {
        printf("%d\t", arr[i]);
    }
}