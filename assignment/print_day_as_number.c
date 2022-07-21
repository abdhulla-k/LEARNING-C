#include <stdio.h>
int main() {
    int number;

    // user input
    printf( "Enter a number between 1 - 7 to print the related day: " );
    scanf( "%d", &number );

    // check the number and print the day
    switch ( number ) {
        case 1:
          printf( "Sunday" );
          break;

        case 2:
          printf( "Monday" );
          break;
        
        case 3:
          printf( "Tuesday" );
          break;

        case 4:
          printf( "Wednesday" );
          break;

        case 5:
          printf( "Thursday" );
          break;

        case 6:
          printf( "Friday" );
          break;

        case 7:
          printf( "Saturday" );
          break;
        
        default:
          printf( "Invalid Entry" );
    }
}