#include <stdio.h>
#include <limits.h>
int main() {
    int ar[] = { 0, 1, 0, 0, 1, 1, 0, 1, 1, 1  };
    int n = sizeof( ar ) / sizeof( ar[0] );
    int i, j;
    int sum;
    int maxSize = 0, startIndex;

    for( i = 0; i < n; i++ ) {
        sum = (ar[i] == 0) ? -1 : 1;

        for( j = i+1; j < n; j++ ) {
            ( ar[j] == 0 ) ? ( sum += -1 ) : ( sum += 1 );
            
            if( sum == 0 && maxSize < j - i) {
                maxSize = j - i;
                startIndex = i;
                printf( "\ni: %d,  j:  %d,  maxSize: %d,  startIndex: %d\n",i, j, maxSize, startIndex);
            }
        }
    }
    if( maxSize == 0 ) {
        printf( "no sub array");
    } else {
        printf( "the sub array is index: %d to %d ", startIndex, maxSize );
    }
}