#include <stdio.h>
int  main() {
    int num1 = 1;
    int num2 = 2;
    int num3 = 3;
    printf("before swaping\nnum1 is: %d num2 is: %d num3 is: %d",num1, num2,  num3);

    // swaping
    int swap = num1;
    num1 = num3;
    num3 = num2;
    num2 = swap;

    printf("\nafter swaping\nnum1 is: %d num2 is: %d num3 is: %d",num1, num2,  num3);

    // an another mthod to swap between two number without third variable
    printf("\n========another method========\n");

    int newNum1 = 10;
    int newNum2 = 20;
    printf( "befor swaping\n num1: %d and num2: %d ", newNum1, newNum2 );

    newNum1 = newNum1 + newNum2;
    newNum2 = newNum1 - newNum2;
    newNum1 = newNum1 - newNum2;
    printf( "\nafter swaping\n num1: %d and num2: %d ", newNum1, newNum2 );
}