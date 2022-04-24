#include <stdio.h>
int main() {
    char alpha;
    int number;
    printf("Enter an alphabet: ");
    scanf("%c",&alpha);
    printf("Enter a number: ");
    scanf("%d",&number);

    printf("you are entered %c and %d",alpha,number);
}