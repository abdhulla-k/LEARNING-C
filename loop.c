// what is meant increment and post increment?

/*
In C/C++, Increment operators are used to increase the value of a variable by 1. This operator is represented by the ++ 
symbol. The increment operator can either increase the value of the variable by 1 before assigning it to the variable or 
can increase the value of the variable by 1 after assigning the variable. Thus it can be classified into two types:

Pre-Increment Operator
Post-Increment Operator

1) Pre-increment operator: A pre-increment operator is used to increment the value of a variable before using it in an 
   expression. In the Pre-Increment, value is first incremented and then used inside the expression.
   syntax :  a = ++x;

2) Post-increment operator: A post-increment operator is used to increment the value of the variable after executing the
   expression completely in which post-increment is used. In the Post-Increment, value is first used in an expression and 
   then incremented. 
   syntax :  a = x++;
*/

#include <stdio.h>
int main() {
    // print 1 to n
    int n;
    int sum = 0;
    printf("Enter a number: ");
    scanf( "%d", &n );

    // for loop syntax

    for( int i=0; i<n; i++ ) {
        //  print i
        printf("%d\n", i+1 );

        // find sum of all value
        sum += (i+1);

    }

    printf( "%d", sum );

    for( int i=0; i<n; i++ ) {

        // print all even numbers
        if (( i+1 ) % 2 == 0 ) {
            printf( "%d\n", i+1 );
        }

    }

    for( int i=0; i<n; i++ ) {

        // print all prime numbers
        int flag = 0;
        for( int a=2; a<i; a++ ){
            if (( i+1 ) % a == 0 ) {
                flag = 1;
                break;
            }
        }
        if ( flag == 0 ) {
            printf( "%d\n", i+1 );
        }

    }
    
}