#include <stdio.h>
int main() {
    int annualIncome;
    printf( "Enter your anual income to calculate the income tax: " );
    scanf( "%d", &annualIncome );

    if( annualIncome <= 250000 ) {
        printf( "Income tax amount: 0");

    } else if( annualIncome <= 500000 ) {
        printf( "Income tax amoutnt: %d", ( annualIncome * 5 ) / 100 );

    } else if( annualIncome <= 1000000 ) {
        printf( "Income tax amoutnt: %d", ( annualIncome * 20 ) / 100 );

    } else if( annualIncome <= 5000000 ) {
        printf( "Income tax amoutnt: %d", ( annualIncome * 30 ) / 100 );
    }
}