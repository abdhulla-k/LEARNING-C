/*print the following pattern
* * * *
* *
* * * * * * * *
* *
* * * * * * * * * * * *
* *
* * * * * * * * * * * * * * * *
etc
*/
#include <stdio.h>
int main() {
    int n = 10;
    int horizon = 4;

    for( int i = 0; i <= n; i++ ) {
        if( i % 2 == 0 ) {
            for( int j = 0; j < horizon; j++ ) {
                printf( "* " );
            }
            printf( "\n" );
            horizon += 4;
        } else {
            printf( "* *\n" );
        }
    }
}