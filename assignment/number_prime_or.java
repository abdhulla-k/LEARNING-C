import java.util.*;
class main{
    public static void main( String[] args ){
        Scanner s = new Scanner( System.in );
        System.out.println( "Enter a number to check is it prime number or not" );
        boolean flag = false;
        try {
            int number = s.nextInt();
            if( number <= 1 ) {
                flag = false;

                for( int i = 2; i < number; i++ ) {
                    if( number % i == 0 ) {
                        flag = false;
                        break;
                    } else {
                        flag = true;
                    }
                }
            }
        } finally {
            s.close();
        }

        if( flag == true ) {
            System.out.println( "This is a prime number" );
        } else {
            System.out.println( "This is not a prime number" );
        }
    }
}