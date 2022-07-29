// Write a program to find smallest of three numbers using ternary operator
#include <stdio.h>
int main() {
    int num1, num2, num3;
    int result;

    printf( "Enter 3 numbers to find smalles using ternary operator: " );
    scanf( "%d%d%d", &num1, &num2, &num3 );

    result = num1 > num2 ? num2 : num1;
    result = num3 > result ? result : num3;

    printf( "smalles number is: %d", result );
}