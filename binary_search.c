// bynary searching

#include <stdio.h>
int main() {
    // need a sorted array
    int middle, end, start, i;
    int n = 11;
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 , 9, 10, 11 };
    int number = 7;

    middle = n/2;
    end = 10;
    start = 0;
    printf( "1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 \n");
    // search for number
    for( i = 0; i < 11; i ++) {

        if( end < start ) {
            printf( "%d is not exist in this array", number );
            break;
        }
        if( arr[middle] == number ) {
            printf( "%d is in %d th position", number, middle);
            break;
        }

        if( arr[middle] < number ) {
            start = middle + 1;
            middle = (start + end) / 2;
            end = end;
        }

        if( arr[middle] > number ) {
            end = middle - 1;
            middle = ( end + start ) / 2;
            start = start;
        }

    }
}