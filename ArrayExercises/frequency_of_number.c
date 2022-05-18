// 53. Write a program in C to find the number of times (frequency) occurs a given number in an array.
#include <stdio.h>
int main() {
    int arr[] = { 1, 2, 2, 1, 3, 3, 4, 1, 1 };
    int number = 1, n = 9, i, count = 0;

    // find the count of n
    for( i = 0; i < n; i++ ) {
        if( arr[i] == number ) {
            count += 1;
        }
    }

    printf( "%d is occurred %d times ", number, count );
}