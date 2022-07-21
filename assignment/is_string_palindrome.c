// 13

#include <stdio.h>
#include <string.h>
int main() {
    char word[100];
    int len,i, j;

    // get user data
    printf( "Enter a word to check is it palindrome: " );
    scanf( "%s", word );

    // find the length of the word
    len = strlen( word );
    j = len;
    printf( "%d", len / 2 );

    // check is it palindrome
    for( i = 0; i < len / 2; i++ ) {
        j -= 1;
        printf( "i: %d, j: %d\n", i,j );

        if( word[i] != word[j] ) {
            printf( "word is not palindrome" );
            break;
        }

        if( i == ( len / 2 ) - 1 ) {
            printf( "word is palindrome" );
        }
    }
}