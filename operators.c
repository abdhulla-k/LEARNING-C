//  arithmetic operators:-      +, -, /, *
// Relational operators:-       ==, <, >, <=, >=
// Logical operators:-          &&, ||, !
// Assignment:-                 =, +=, -=

//eg.

#include <stdio.h>
int main() {
    float num1, num2, num3;
    printf("Enter theree numbers: ");
    scanf("%f%f%f",&num1, &num2, &num3);
    float result = (num1+num2+num3)/3;
    printf("average is: %f", result);
}