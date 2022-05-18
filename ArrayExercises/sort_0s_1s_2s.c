/* 54. Write a program in C to sort an array of 0s, 1s and 2s */

#include <stdio.h>
void changePlace( int arr1[], int i, int j );
int sortElements( int arr1[], int end );

int main() {
    int arr1[] = { 0, 1, 2, 2, 1, 0, 0, 2, 0, 1, 1, 0 };
    int n = sizeof( arr1 )/sizeof( arr1[0] );
	int i;

    // print the array before sorting
	printf("The given array is :  ");
	for( i = 0; i < n; i++ ) {
        printf( "%d  ", arr1[i] );
    } 
	printf( "\n" );

    // sort the array	
	printf( "After sortig the elements in the array are: \n" );
    sortElements( arr1, n - 1 );

    // print the array after sort
    for ( int i = 0 ; i < n; i++ ) {
        printf( "%d ", arr1[i] );
    }
    return 0;
}

void changePlace( int arr1[], int i, int j ) {
    // swap the elements
    int tmp = arr1[i];
    arr1[i] = arr1[j];
    arr1[j] = tmp;
}

int sortElements( int arr1[], int end ) {
    int start = 0, iterater = 0;
    int mid = 1;

    // condition = array index[start] greaterthan array index[end]
    while ( iterater <= end ) {
        if ( arr1[iterater] < mid ) {
            changePlace(arr1, start, iterater);
            start++, iterater++;
        }
        else if ( arr1[iterater] > mid ) {
            changePlace( arr1, iterater, end );
            end--;
        }
        else {
            iterater++;
        }
    }
}