/*
102. Write a program in C to rearrange an array in such an order that– smallest, largest,
2nd smallest, 2nd largest and on
*/
#include <stdio.h>
void rearrange( int arr[], int length );
void printArray( int arr[], int length );
void sort( int arr[], int length );

int main() {
    int arr[] = { 5, 8, 1, 4, 2, 9, 3, 7, 6 };
    int length = sizeof( arr ) / sizeof( arr[0] );

    // print array
    printArray( arr, length );
    // pass arr and length to rearrange
    rearrange( arr, length );
}

void rearrange( int arr[], int length ) {
    //int i, j;
    //int n = length;

    // sort the array
    //sort(arr, n); 

    // // rearrange the array
    // int tempArr[n];  
    // int ArrIndex = 0;
    // for (int i = 0, j = n-1; i <= n / 2 || j > n / 2; i++, j--) { 
    //     tempArr[ArrIndex] = arr[i]; 
    //     ArrIndex++; 
    //     tempArr[ArrIndex] = arr[j]; 
    //     ArrIndex++; 
    // } 

    // for (int i = 0; i < n; i++) {
    //     arr[i] = tempArr[i];
    // }

    // an anotor way; without sorting
    int i, j;
    int start = 0;
    for( i = 0; i < length/2; i++ ) {
        for( j = start; j < length; j++ ) {
            if( start < length-1 ) {
                if( arr[start] > arr[j] ) {
                    int temp = arr[start];
                    arr[start] = arr[j];
                    arr[j] = temp;
                }
                if( arr[start + 1] < arr[j] ) {
                    int temp = arr[start + 1];
                    arr[start + 1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        start += 2;
    }

    // print the array
    printArray( arr, length );
}

void sort( int arr[], int length ) {
    int i, j,temp; 

    // sort the array
    for (i = 0; i < length - 1; i++) {   
        for (j = 0; j < length - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j]; 
                arr[j] = arr[j + 1]; 
                arr[j + 1] = temp;
            }
        }
	}   
    return ;
}

void printArray( int arr[], int length ) {
    int i;
    // print the array
    printf( "\n" );
    for( i = 0; i < length; i++ ) {
        printf( "%d\t", arr[i] );
    }
    printf( "\n" );
}