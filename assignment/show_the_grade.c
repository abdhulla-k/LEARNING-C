#include <stdio.h>
int main() {
    float totalMark;

    // get user data
    printf( "Enter the total mark: " );
    scanf( "%f", &totalMark );

    // check and print the grade
    if( totalMark < 50 ) {
        printf( "Failed" );

    } else if ( totalMark > 90 ) {
        printf( "grade is: A" );

    } else if ( totalMark >= 80 && totalMark <= 89 ) {
        printf( "gread is: B" );

    } else if( totalMark >= 70 && totalMark <= 79 ) {
        printf( "gread is: C" );

    } else if( totalMark >= 50 && totalMark <= 59 ) {
        printf( "gread is: E" );
        
    }
}