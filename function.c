
#include <stdio.h>

void sum();
int multiplication();
void helloWorld();
char* GetUserName();

int main() {
    int num1 = 2;
    int num2 = 3;

    // call sum function
    sum( num1, num2 );

    // call multiplication function.
    int result = multiplication( num1, num2 );
    printf("multiplication result is: %d\n", result);

    // call hello world function
    helloWorld();

    // call get userName
    /* const char* name = GetUserName();
    printf("user name: %s",name); */
    printf("\nuser name is: %s",GetUserName());

}

// sum function
void sum(int num1,int num2) {
    int result = num1 + num2;
    printf( "\naddition result is: %d\n", result);
}

// multiplication function
int multiplication( int num1, int num2 ) {
    int result = num1 * num2;
    return result;
}

// helloworld function
void helloWorld() {
    printf("Hello world\n");
}

// getUserName function
// this function shows how to return a string?

// user * after keywerd char to return a string
char* GetUserName() {
    char *name;
    char name1[20];

    printf("Enter username: ");
    // input username
    scanf("%s", name1);
    name = name1;
    return name;
}