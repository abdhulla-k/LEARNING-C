#include <stdio.h>
int main() {
    int ar1[] = { 1, 5, 13, 24, 35, 2 };
    int ar2[] = { 3, 8, 15, 17, 32, 2 };
    int siz = sizeof( ar1 ) / sizeof( ar1[0] );
    int choice;

    printf( "size / 2: %d", siz/2);
    // find the median of two array
    int mid = 0;
    if( siz % 2 != 0 ) {
        mid = ar1[siz/2] + ar2[siz/2];
        printf( "from 1, %d", mid);
    } else if( siz % 2 == 0 ) {
        mid = ( ar1[ siz / 2 ] + ar1[( siz / 2 ) - 1 ]) + ( ar2[ siz / 2 ] + ar2[( siz / 2 ) - 1 ]);
        printf( "%d, %d, %d, %d ",ar1[ siz / 2 ], ar1[( siz / 2 ) - 1 ] , ar2[ siz / 2 ], ar2[( siz / 2 ) - 1 ]);
        printf( "from 2");
        printf("%d",mid);
    }

    printf( "median is: %d", mid / 2 );
}