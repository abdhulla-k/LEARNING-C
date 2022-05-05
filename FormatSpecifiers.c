#include <stdio.h>
int main() {
  /*
       Format Specifiers in C :-
   
     %c	- a single character
   
     %s	- a string
   
     %hi	- short (signed)
   
     %hu	- short (unsigned)
   
     %Lf	- long double
   
     %n	- prints nothing
   
     %d	- a decimal integer (assumes base 10)
   
     %i	- a decimal integer (detects the base automatically)
   
     %o	- an octal (base 8) integer
   
     %x	- a hexadecimal (base 16) integer
   
     %p	- an address (or pointer)
   
     %f	- a floating point number for floats
   
     %u	- int unsigned decimal
   
     %e	- a floating point number in scientific notation
   
     %E	- a floating point number in scientific notation
   
     %%	- the % symbol
   
  */
   
    // input a string
    char name[20];
    printf("Enter name: ");
   
    scanf("\n%s",name); // don't use & incase of string (%s)
    printf("Your name is: %s",name);
    
    // assign a string to an array
    // ther are two methods as below
    char name2[] = {'a', 'b', 'd', 'h', 'u'};
    char name3[] = "abdhulla";
}