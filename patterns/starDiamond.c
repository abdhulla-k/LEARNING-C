#include <stdio.h>
int main() {
    int n, i, j, k;

    printf("Enter number of rows to show star pattern: ");
    scanf("%d",&n);

    // create algorithm
    // first section
    for( i = 1; i <= n; i++ ) {
        for( j = 1; j <= n-i; j++ ) {
            printf(" ");
        }
        for( k=1; k <= i; k++ ) {
            printf("* ");
        }
        printf("\n");
    }

    // second section
    for( i = n-1; i > 0; i-- ) {
        for( j = 1; j < n-i; j++ ) {
            printf(" ");
        }
        for( k = 1; k <= i; k++ ) {
            printf(" *");
        }
        printf("\n");
    }
}