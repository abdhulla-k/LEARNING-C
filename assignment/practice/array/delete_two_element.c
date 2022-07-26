/* delete two elements after the occurance of multiple of 5 */
#include <stdio.h>
void deleteElement( int arr[], int position, int n ) {
    // printf( "\n\t\t\tdeleted: %d\n", arr[position] );
   for( int i = position; i < n; i++ ) {
       arr[i] = arr[i+1];
   }

}

int main() {
    int arr[100];
    int n, i, j;
    int deleted = 0;
    int position;

    printf( "Enter the length of array: " );
    scanf( "%d", &n );
    position = n;

    // get input array data
    for( i = 0; i < n; i++ ) {
        printf( "Enter %d th element: " , i );
        scanf( "%d", &arr[i] );
    }

    // find the position of elements
    for( i = 0; i < position; i++ ) {
        
            if( arr[i] % 5 == 0 ) {
                
                if( i < position - 3 ) {
                    i++;
    
                    // pass this element variable as position of element that we want to delete
                    int element = i;
    
                    // call delete function 2 times to delete 2 elements
                    for( j = 0; j < 2; j++ ) {
                        deleteElement( arr, element, position );
                    }
                    i--;
                    
                    // dicriment the length of array
                    position -= 2;
                } else {

                    // if i in last 3 position
                    // if i is equal to length -3
                    if( i == position - 3 ) {
                        position -= 2;
                        arr[i+1] = 0;
                        arr[i+2] = 0;
                    
                    // if i is equal to length -2
                    } else if ( i == position - 2 ) {
                        arr[i+1] = 0;
                        position--;
                    }
                }
            }
    }

    for( i = 0; i < position; i++ ) {
        printf( "%d ", arr[i] );
    }
}