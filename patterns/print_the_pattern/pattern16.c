/* print the following patten
*
* *
*
*
*
* * * *
*
* * * * * * * *
*
*
*
etc.
*/

#include <stdio.h>
int main() {
    int n = 9;
    int len = 4;
    int flag = 1;

    for( int i = 0; i <= n; i++ ) {
        if( i % 2  == 0 ) {
            // print 
            for( int j = 1; j <= flag; j++ ) {
                printf( "*\n" );
            }

            // toggle the flag value to print stars 1 times or 3 times
            if( flag == 1 ) {
                flag = 3;
            } else {
                flag = 1;
            }

        } else {
            for( int j = 0; j < len; j++ ) {
                printf( "* " );
            }
            len += 2;
            printf( "\n" );
        }
    }
}