/*
// we are going to print the pattern:

*
**
***
****
*****
........ n

*/

#include <stdio.h>
int main() {
    int n;
    printf("Eter a number: ");
    scanf("%d",&n);

    // create the algorithm
    for( int i = 1; i <= n; i++ ) {
        for( int j = 1; j <= i; j++ ) {
            printf("*");
        }
        printf("\n");
    }
}