#include <stdio.h>
int main() {
    int n, i, j, k;

    printf( "Enter a number: ");
    scanf( "%d",&n);

    // write algorithm
    
    // print spaces befor first star
    for( i = 1; i <= n; i++ ) {
        for( j = 1; j <= n-i; j++ ) {
            printf( " " );
        }

        // print last line of stars
        if( i == n ) {
            for( k = 1; k <= i; k ++ ) {
            printf( " *" );
            }
        }
        else {
            
            for( k = 1; k <= i; k ++ ) {

                // print * if the position is i th(last position of star) or postion is first
                if( k == i | k == i - (i-1) ) {
                    printf( " *");
                }

                // print space between first star and last star
                else{
                    printf("  ");
                }
            }
        }

        printf( "\n" );
    }
}