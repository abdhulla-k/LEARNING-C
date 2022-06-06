/* Write a program in C to segregate 0s and 1s in an array.  */
#include <stdio.h>
void zerosOnesSegment( int arr[], int len );

int main() {
    int arr[] = { 1, 0, 1, 0, 0, 1, 0, 1, 1 };
    int len = sizeof( arr ) / sizeof( arr[0] );

    // print the given array
    printf("The given array is:  \n");
	for(int i = 0; i < len; i++)
		{
			printf("%d\t", arr[i]);
		}
	printf("\n");

    zerosOnesSegment( arr, len );

    // print the array
    printf("The given array is:  \n");
	for(int i = 0; i < len; i++)
		{
			printf("%d\t", arr[i]);
		}
	printf("\n");
}

void zerosOnesSegment( int arr[], int len ) {
    int i;
    int count = len - 1;
    for( i = 0; i < ( len / 2 ); i++ ) {
        if( arr[i] == 0 ) {
            // dont do enithing
            i++;
            i--;
        } else {
            // swap
            int temp = arr[i];
            arr[i] = arr[count];
            arr[count] = temp;
            i--;
            count--;
        }
    }
}