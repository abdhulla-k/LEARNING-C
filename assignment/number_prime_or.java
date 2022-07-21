import java.util.*;
class main{
    public static void main( String[] args ){
        Scanner s = new Scanner( System.in );
        System.out.println( "Enter a number to check is it prime number or not" );
        int number = s.nextInt();
        boolean flag = false;

        if( number <= 1 ) {
            flag = false;
        }

        for( int i = 2; i < number; i++ ) {
            if( number % i == 0 ) {
                flag = false;
                break;
            } else {
                flag = true;
            }
        }

        if( flag == true ) {
            System.out.println( "This is a prime number" );
        } else {
            System.out.println( "This is not a prime number" );
        }
    }
}