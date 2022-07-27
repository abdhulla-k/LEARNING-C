/*
3
6  5
9  10 12
15 15 18 20 21
24 20 27 25 30 30

*/

#include <stdio.h>
int main() {
    int n;
    int i, j, k;
    int counter = 0;
    int threeCounter = 0;
    int fiveCount = 0;

    printf( "Enter a number: " );
    scanf( "%d", &n );

    for( i = 0; i < n; i++ ) {
        if( i % 3 == 0 && i != 0 ) {
            counter--;
        } else {
            for( j = 0; j <= i; j++ ) {
                if( j % 2 == 0 ) {
                    threeCounter += 3;
                    printf( "%d ", threeCounter );
                } else {
                    fiveCount += 1;
                    printf( "%d ", ( (counter + fiveCount) -1 ) * 5);
                }
            }
            printf( "\n" );
        }
        fiveCount = 0;
        counter++;
    }
}