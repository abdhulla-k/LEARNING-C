/*print the following pattern
* *
* * * * *
* *
* *
* * * * * * * * * * 
etc.
*/
#include <stdio.h>
int main() {
    int n = 10;
    int count = 0;
    int count2 = 5;

    for( int i = 0; i < n; i++ ) {
        if( i % 2 == 0 ) {
            for( int j = 0; j <= count; j++ ) {
                printf( "* *\n" );
            }
            count++;
        } else {
            for( int j = 0; j < count2; j++ ) {
                printf( "* " );
            }
            printf( "\n" );
            count2 += 5;
        }
    }
}