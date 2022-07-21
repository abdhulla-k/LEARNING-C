// 7

#include <stdio.h>
int main() {
    int number;

    // get user input
    printf( "Enter a number to print the multiplication table: " );
    scanf( "%d", &number );

    // print the multiplication table
    for( int i = 1; i <= 10; i++ ) {
        printf( "%d x %d = %d\n", i, number, i * number );
    }
}