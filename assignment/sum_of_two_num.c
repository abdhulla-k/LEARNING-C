#include <stdio.h>
int main() {
    int num1, num2;

    // get input
    printf( "Enter two numbers: " );
    scanf( "%d %d", &num1, & num2 );

    // print the sum of num1 and num2
    printf( "sum of %d and %d is:  %d", num1, num2, num1 + num2 );
}