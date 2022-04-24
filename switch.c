#include <stdio.h>
int main() {
    int result;
    int num1, num2;
    int userAction;

    printf("Enter\n1 for add\n2 for multiplication\n3 for substraction\n4 for division");
    scanf( "%d", &userAction );

    if ( userAction < 5 ) {
        printf( "\nEnter two numbers: " );
        scanf( "%d %d", &num1, &num2);
    }

    switch (userAction)
    {
    case 1:
        result = num1 + num2;
        printf( "\nresult is: %d", result );
        break;
    case 2:
        result = num1 * num2;
        printf( "\nresult is: %d", result );
        break;
    case 3:
        result = num1 - num2;
        printf( "\nresult is: %d", result );
        break;
    case 4:
        result = num1 / num2;
        printf( "\nresult is: %d", result );
    default:
        printf( "\nthere is no choice with %d", userAction );
        break;
    }
}