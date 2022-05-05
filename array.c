// what is an array?
/*
An array is a collection of similar data elements stored at contiguous memory locations.
It is the simplest data structure where each data element can be accessed directly by only using 
its index number.
For instance, if we want to store the marks scored by a student in 5 subjects, then there’s no 
need to define individual variables for each subject. Rather, we can define an array which will 
store the data elements at contiguous memory locations.

 array marks[5] defines the marks scored by a student in 5 different subjects where each subject
 marks are located at a particular location in the array i.e. marks[0] denotes the marks scored in
 first subject, marks[1] denotes the marks scored in 2nd subject and so on.

*/

// Eg.

#include <stdio.h>
int main() {
    int arr[5]; // declare the length under the array

    int arraySize = 100;
    int arr2[arraySize];

    // can add data like below
    int arr3[] = { 1, 2, 3, 4, 5, 6, 7, 8,  9, 10 };
    
    //  print all numbers together
    int length = sizeof(arr3)/sizeof(arr3[0]);
    for( int i=0; i<length; i++ ) {
        printf("%d\t",arr3[i]);
    }

    // add data to arr
    for (int i=0; i<5; i++) {
        printf("\nenter %dth number: ", i);
        // push to i th position
        arr[i] = scanf("%d",&arr[i]);
    }

    ///////////////////////////
    //
    // multi dimensional array
    // how to declare?
    int multiArray[3][3]; // it is a 3*3 array
    
    // how to add values to this array?
    //eg. multiArray[0][0] = 1;
    // get data from user

    printf("\nenter the values\n");
    for( int i = 0; i < 3; i++ ) {
        for( int j = 0; j < 3; j++ ) {
            int temp;
            scanf("%d",&multiArray[i][j]);
            printf("You entered %d\n",multiArray[i][j]);
        }
    }

    // print array values

    printf(" \narray values are:\n");
    for( int i = 0; i < 3; i++ ) {
        for( int j = 0; j < 3; j++ ) {
            int temp;
            printf("%d\t",multiArray[i][j]);
        }
        printf("\n");
    }
}