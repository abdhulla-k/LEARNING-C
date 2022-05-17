//Write a program in C to count the number of triangles can be fromed from a given array

#include <stdio.h>
int findNumberOfTriangle( int ar[], int length );

int main() {
    int ar[] = { 6, 18, 9, 7, 10 };
    int length = 5;

    printf( "number of triangle is: %d", findNumberOfTriangle( ar, length ));
}

int findNumberOfTriangle( int ar[], int length) {
    int i, j, k;
    int count = 0;

    // find the count of triangles
    for( i = 0; i < length; i++ ) {

        for( j = i+1; j < length; j++ ) {

            for( k = j+1; k < length; k++ ) {

                // sum of two side must be greater than third side
                if( ar[i] + ar[j] > ar[k]
                    && ar[j] + ar[k] > ar[i]
                    && ar[i] + ar[k] > ar[j] ) {
                        // add one if the conditions are correct
                        count++;
                    }
            }
        }
    }
    return count;
}