/* wrint the following pattern 
*
* * * *
*
*
* * * * * * * *
*
* * * * * * * * * * 
*
*
* * * * * * * * * * *
*/

#include <stdio.h>
int main() {
    int n = 9;
    int add = 0;
    int len = 4;
    int flag = 1;

    for( int i = 0; i <= n; i++ ) {
        if( i % 2  == 0 ) {
            for( int j = 0; j < len + add; j++ ) {
                printf( "* " );
            }
            len += add;
            printf( "\n" );
            if( i == 0 ) {
                add = 4;
            } else {
                add = add / 2;
            }

        } else {
            // print 
            for( int j = 1; j <= flag; j++ ) {
                printf( "*\n" );
            }

            // toggle the flag value to print stars 1 times or 2 times
            if( flag == 1 ) {
                flag = 2;
            } else {
                flag = 1;
            }
        }
    }
}
