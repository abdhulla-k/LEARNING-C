/*
a
B c
D e F
g H i J
*/

#include <stdio.h>
int main() {
    int n;
    int smallLetter = 97;
    int capitalLeter = 66;
    int counter = 0;

    printf( "Enter a number of row of your patter: " );
    scanf( "%d", &n );

    for( int i = 0; i < n; i++ ) {
        for( int j = 0; j <= i; j++ ) {
            if( counter % 2 == 0 ) {
                printf( "%c ", smallLetter );
                smallLetter += 2;
                counter++;
            } else {
                printf( "%c ", capitalLeter );
                capitalLeter += 2;
                counter++;
            }
        }
        printf( "\n" );
    }
}