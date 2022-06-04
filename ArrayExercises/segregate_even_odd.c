/* write a program to segrigate even and odd element on an array */
#include <stdio.h>
void evenOddSegment( int arr[], int len );

int main() {
    int arr[] = { 17, 42, 19, 7, 27, 24, 30, 54, 73 };
    int len = sizeof( arr ) / sizeof( arr[0] );

    // print the given array
    printf("The given array is:  \n");
	for(int i = 0; i < len; i++)
		{
			printf("%d\t", arr[i]);
		}
	printf("\n");

    evenOddSegment( arr, len );

    // print the array
    printf("The given array is:  \n");
	for(int i = 0; i < len; i++)
		{
			printf("%d\t", arr[i]);
		}
	printf("\n");
}

void evenOddSegment( int arr[], int len ) {
    int i;
    int count = len - 1;
    for( i = 0; i < len/2; i++ ) {
        if( arr[i] % 2 == 0 ) {
            // dont do enithing
            i++;
            i--;
        } else {
            // swap
            printf("\n%d\n",arr[i]);
            int temp = arr[i];
            arr[i] = arr[count];
            arr[count] = temp;
            i--;
            count--;
        }
    }
}