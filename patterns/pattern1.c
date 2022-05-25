/*  print the following pattern;
        *

      * * *

    *   *   *

  *     *     *

* * * * * * * * *

  *     *     *

    *   *   *

      * * *
      
        *
 */

#include <stdio.h>
int main() {
    int n = 5;
    int i, j, k;

    // prit the pattern
    for( i = 0; i < n; i++ ) {
      for( j = 0; j < n - ( i + 1 ); j++ ) {
        printf( "  " );
      }
      if( i != n-1 ) {

        // print the space
        for( k = j + 1; k <= n + i; k++ ) {

          // print the star
          if( k == n | k == j + 1 | k == n + i ) {
            printf( "* " );
          } else {
            printf( "  " );
          }
        }
      } else {
        for( k = 0; k < n + i; k++ ) {
          printf( "* " );
        }
      }
      printf( "\n" );
      printf( "\n" );
    }

    for( i = 0; i < n - 1; i++ ) {
      for( j = 0; j < n + ( n - (i+2)); j++ ) {

        // print the star
        if( j == i + 1 | j == n - 1 | j == n + (n - ( i + 3 ))) {
          printf( "* " );
        } else {
          
          // print the space
          printf( "  " );
        }
      }
      printf( "\n" );
      printf( "\n" );
    }
}