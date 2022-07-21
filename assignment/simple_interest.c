#include <stdio.h>
int main() {
    int amount;
    float interest, year, simpleInterest;

    // get user input
    printf( "Enter the Principal amunt: " );
    scanf( "%d", &amount );

    printf( "Enter the interest rate: " );
    scanf( "%f", &interest );

    printf( "Entere the year of investment: " );
    scanf( "%f", &year );

    // find the simple interest
    simpleInterest = ( amount * interest * year ) / 100;

    // print the value
    printf( "simple interest is: %f", simpleInterest );
}