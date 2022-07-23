// 23

import java.util.Scanner;

class main{
    public static void main( String[] args ) {
        GetData object1 = new GetData();

        object1.getArray();
        object1.displayArray();
    }

    
}

class GetData {
    int[][] arr = new int[100][100];
    int n;
    GetData() {

    }

    public void getArray() {
        int i, j, n;

        Scanner s = new Scanner( System.in );
        System.out.println( "Enter the length of mylti dimention array: " );
        n = s.nextInt();
        this.n = n;

        for( i = 0; i < n; i++ ) {
            for( j = 0; j < n; j++ ) {
                System.out.println( "Enter ["+i+"["+j+"] th value");
                this.arr[i][j] = s.nextInt();
            }
        }
    }

    public void displayArray() {
        int i, j;
        for( i = 0; i < this.n; i++ ) {
            for( j = 0; j < this.n; j++ ) {
                System.out.println( this.arr[i][j] );
            }
            System.out.println( "\n" );
        }
    }

}