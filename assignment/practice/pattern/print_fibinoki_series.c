/*
0
1 1
2 3  5
8 13 21
*/

#include <stdio.h>
int main() {
    int n;
    int i, j, counter;
    int a = 0; 
    int b = 1;
    int value = a+b;

    // ask a length
    printf( "Enter a number: " );
    scanf( "%d", &n );

    counter = n;

    // print the following pattern
    for( i = 0; i < n; i++ ) {
        for( j = 0; j <= i; j++ ) {
            if( i == 0 ) {
                printf( "0" );
            } else {
                if( counter > 0 ) {
                    printf( "%d ", value );
                    if( i != 1 || j != 0 ) {
                        a = b;
                        b = value;
                        value = a + b;
                    }
                }
            }
            counter--;
        }
        printf( "\n" );

        if( counter < 0 ) {
            break;
        }
    }

}