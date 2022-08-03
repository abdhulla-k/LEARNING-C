#include <stdio.h>
int main() {
    int i, j, k, n = 0;
    char word[100];

    printf( "Enter a word: " );
    scanf( "%s", word );

    // find the length of the word
    for( i = 0; word[i] != '\0'; i++ ){
        n++;
    }

    // print the word
    for( i = 0; i < n; i++ ) {
        for( j = 0; j <= i; j++ ) {
            printf( "%c", word[j] );
        }
        printf( "\n" );
    }
}