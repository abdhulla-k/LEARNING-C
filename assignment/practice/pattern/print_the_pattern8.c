/*

A B C D E F G H G F E D C B A
A B C D E F G   G G E D C B A
A B C D E F       F E D C B A
A B C D E           E D C B A
A B C D               D C B A
A B C                   C B A
A B                       B A
A                           A

*/

#include <stdio.h>
int main() {
    int n, i, j, k;

    printf( "Enter a number: " );
    scanf( "%d", &n );

    // print the pattern
    for( i = 0; i < n; i++ ) {
        for( j = 0; j < n; j++ ) {
            if( j < n-i ) {
                printf( "%c",65+j );
            } else {
                printf( " " );
            }
        } 
        for( k = n-2; k >= 0; k-- ) {
            if( k < n-i ) {
                printf( "%c", 65+k );
            } else {
                printf( " " );
            }
        }
        printf( "\n" );
    }
}