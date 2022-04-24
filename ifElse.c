#include <stdio.h>
int main() {
    int a;
    int b;
    printf("Enter two number: ");
    scanf( "%d %d", &a, &b );
    if( a < b ) {
        printf("%d is greater than %d \n", b , a );
    }
    else{
        printf( "%d is is greater than %d \n", a, b );
    }

    if( a < 0 ) {
        printf( "%d is a negative number \n", a );
    }
    else if ( b < 0 ) {

        printf( "%d is a negativenumber \n", b );
    }
    
}