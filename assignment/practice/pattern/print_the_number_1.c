/*
1
1 2
2
2
3 4 5
3 
3
3
6 7 8 9
*/

#include <stdio.h>
int main() {
    int n, i, j, k;
    int section0 = 1;
    int section1 = 1;

    printf( "Enter a number: " );
    scanf( "%d", &n );

    for( i = 0; i < n; i++ ) {
        if( i % 2 == 0 ) {
            for( j = 0; j < section0; j++ ) {
                printf( "%d\n", section0 );
            }
            section0++;
        } else {
            for( j = 1; j <= section0; j++ ) {
                printf( "%d", section1 );
                section1++;
            }
            printf( "\n" );
        }
    }
}