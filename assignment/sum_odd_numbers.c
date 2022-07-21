// 8

#include <stdio.h>
int main() {
    int limitNumber, i;
    int result = 0;

    // user input
    printf( "Enter a number to calculate the sum of all odd numbers less than that: " );
    scanf( "%d", &limitNumber );

    // calculate and print the sum of the all odd numbers within the limitNumber
    for( i = 0; i < limitNumber; i++ ) {
        if( i % 2 != 0 ) {
            result += i;
        }
    }

    printf( "The sum of all odd number less than  %d is: %d", limitNumber, result );
}