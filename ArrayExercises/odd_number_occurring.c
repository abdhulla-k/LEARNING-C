/* 34. Write a program in C to find the number occurring odd number of times in an array. */

#include <stdio.h>
int main() {
    int ar[100];
    int n, i, j;
    int elementTimes = 0;

    // get length of array from user
    printf( "Enter the length of the data you wnated to upload: " );
    scanf( "%d", &n );

    // get input from user
    for( i = 0; i < n; i++ ) {
        printf( "Enter the %d th data: ", i+1 );
        scanf( "%d", &ar[i] );
    }

    // find the number occurring
    for( i = 0; i < n; i++ ) {
        if(( ar[i] / 2 ) != 0 ) {

            // check howmany times occurred
            for( j = 0; j < n; j++ ) {
                if( ar[i] == ar[j] ) {
                    elementTimes += 1;
                }
            }
            // print the element if it is occure that element times
            if( elementTimes == ar[i] ) {
                printf( "number is: %d", ar[i]);
                break;
            }
        }
    }
}