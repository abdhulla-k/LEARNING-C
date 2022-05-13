// 28. Write a program in C to calculate determinant of a 3 x 3 matrix. 

// how to calculate the determinant?
// the determinant is a special number that can be calculated from a matrix.
// the matrix has to be squer

#include <stdio.h>
int main() {
    int ar[10][10];
    int i, j, space, result;

    // get the data from user
    printf( "Enter element of a 3x3 matrix: " );
    for( i = 0; i < 3; i++ ) {
        for( j = 0; j < 3; j++ ) {
            printf( "Entr the number to the  %d, %d th position: ", i, j );
            scanf( "%d", &ar[i][j] );
        }
    }

    //find determinant
    result = ar[0][0] * ((ar[1][1]*ar[2][2]) - (ar[2][1]*ar[1][2])) -ar[0][1] * (ar[1][0]* ar[2][2] - ar[2][0] *
     ar[1][2]) + ar[0][2] * (ar[1][0] * ar[2][1] - ar[2][0] * ar[1][1]);

    printf( "%d", result );
    
}