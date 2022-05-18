/* 56. Write a program in C to return the minimum number of jumps to reach the end of the array.  */
#include <stdio.h>
int main() {
    int ar[] = { 1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9, 1, 1, 1 };
    int size = sizeof(ar) / sizeof(0);
    int i, j, reach, count;

    reach = 0;
    count = 0;
    // i = 0;
    // while( reach >= size-1 ) {
    //     reach = reach + ar[i];
    //     count += 1;
    //     i++;
    // }
    for( i = 0; i < size; i++ ) {
        reach = reach + ar[i];
        count += 1;
        if( reach >= size ) {
            break;
        }
    }

    printf( "minimum jump is: %d", count-1 );
    
}