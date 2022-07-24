/*
*
**
***
****
*****
****
***
**
*
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, i, j;
    bool flag = false;
    int len;

    // ask n;
    printf( "Enter a number: " );
    scanf( "%d", &n );
    
    for( i = 0; i < n*2; i++ ) {
        if( i == n ) {
            flag = true;
        }

        // counting the length of row
        if( flag == true ) {
            len--;
        } else {
            len = i;
        }

        // print * len times
        for( j = 0; j <= len; j++ ) {
            printf( "*" );
        }
        printf( "\n" );
    }
}