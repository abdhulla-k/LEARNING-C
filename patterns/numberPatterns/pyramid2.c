// output must be: 
/* 
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5
etc...
*/
#include <stdio.h>
int main() {
    int i, j,k;
    int n = 5, count = 1;

    // go through rows
    for( i = 0; i < n; i++ ) {

        // print space
        for( j = 0; j < n-i; j++ ) {
            printf("  ");
        }

        // print all number's being before center element of the pattern
        for( j = i; j >= 0; j-- ) {
            if( j == 0 ) {
                printf( "%d ", count );
            } else {
                printf( "%d ", count - j );
            }
        }

        // print all number's being after center element of the pattern 
        int side = 1;
        for( k = 0; k < count-i-1; k++) {
            printf( "%d ", count - side );

            // incriment side; side is the deffernces between center element and right element
            side++;
        }

        // devide among lines of the pattern
        printf("\n");

        // add 2 to count; count is the center element; 1, 3, 5...
        count += 2;
    }
}