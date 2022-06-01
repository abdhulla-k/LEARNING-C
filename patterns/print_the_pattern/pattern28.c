/*print the following pattern
*
* * *
*
* * *
* * *
*
* * *
* * *
* * *
*
* * *
* * *
* * *
* * *
etc.
*/

#include <stdio.h>
int main() {
    int n = 10;
    int count = 1;
    
    for( int i = 0; i <= n; i++ ) {
        if( i % 2 == 0 ) {
            printf( "*\n" );
        } else {
            for( int j = 1; j <= count; j++ ) {
                printf( "* * *\n" );
            }
            count++;
        }
    }
}