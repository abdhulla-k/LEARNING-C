#include <stdio.h>
int main() {
    float mark;

    // get value
    printf( "Enter the mark: " );
    scanf( "%f", &mark );

    // print the result
    if( mark < 50 ) {
        printf( "Failed" );
    } else {
        printf( "Passed" );
    }
}