// 17
import java.util.*;

class main {
    public static void main( String[] args ) {
        int num1;
        int num2;
        int userChoice;
        Scanner s = new Scanner( System.in );

        


        try {
            System.out.println( "Enter \n\t 1 for addition.\n\t 2 for substraction \n\t 3 for multiplication \n\t 4 for divition" );
            userChoice = s.nextInt();

            System.out.print( "Enter two numbers" );
            num1 = s.nextInt();
            num2 = s.nextInt();

            Calculator object = new Calculator( num1, num2 );

            if( userChoice == 1 ) {
                object.addition();
            } else if( userChoice == 2 ) {
                object.divition();
            } else if( userChoice == 3 ) {
                object.multiplication();
            } else if( userChoice == 4 ) {
                object.divition();
            } else {
                System.out.println( "You entered an invalid number!\n please try again!" );
            }

        } finally {
            s.close();
        }
    }
}

class Calculator {
    int num1;
    int num2;

    Calculator( int num1, int num2) {
        this.num1 = num1;
        this.num2 = num2;
    }

    public void addition() {
        System.out.println( "sum is: " + this.num1 + this.num2 );
    }

    public void substraction() {
        System.out.println( "substraction result  is: " );
        System.out.println( this.num1 - this.num2 );
    }

    public void multiplication() {
        System.out.println( "multiplication result is: " );
        System.out.println( this.num1 * this.num2 );
    }

    public void divition() {
        System.out.println( "divition tesult is: " );
        System.out.println( this.num1 / this.num2 );
    }
}