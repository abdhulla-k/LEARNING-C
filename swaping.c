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
}