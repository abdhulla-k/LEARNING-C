/*  Write a program in C to find the majority element of an array. */
#include <stdio.h>
void findMajorElement( int *ar, int n );

int main() {
    int ar1[100];
    int i, n;

    // get length of array from user
    printf( "Enter the length of the data you wnated to upload: " );
    scanf( "%d", &n );

    // get input from user
    for( i = 0; i < n; i++ ) {
        printf( "Enter the %d th data: ", i+1 );
        scanf( "%d", &ar1[i] );
    }

    findMajorElement( ar1, n );
}

void findMajorElement( int *ar, int n ) {
    int i, j, count, element, temp, result, status;

    // find the majority element
    temp = 0;
    result = 0;
    count = 0;
    status = 0;
    for( i = 0; i < n; i++ ) {
        for( j = 0; j < n; j++ ) {
            if( ar[i] == ar[j] ) {
                count += 1;
            }
        }
        if( count > temp ) {
            temp = count;
            element = ar[i];
            result = count;
        }
        if( count == temp && element != ar[i] ) {
            status = 1;
        }
        count = 0;
    }
    if( status == 0 ) {
        printf( "\n%d comes %d times. so %d is the major", element, result, element );
    } else {
        printf( "There is no major element " );
    }
}