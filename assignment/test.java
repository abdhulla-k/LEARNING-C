class main {
    public static void main( String[] args ) {
        InheritAbstract s = new InheritAbstract();
        s.printHi();
    }
}

interface TestInterface {
    // only can write upstract methods in interfaces
    // we can't write implimented method inside of an interface
    public void satHi();
}

// this is an example of abstract class
abstract class AbstractClass {

    // abstract calssed includes abstract methods
    // non upstract classed can't include abstract methods

    // this is an example of abstract method;
    // we will not or we can't write code in side of braces;
    // we can write what ever we want int this function where ever we inherited this class into;
    //  written the code in IheritAbstract class;
    public abstract void printHi();

    // abstract class also include implemented methods;
    // abstract class can include both abstract and implemented methods
    public void printThis() {
        System.out.println("hi");
    }
}

class InheritAbstract extends AbstractClass {

    private String name;
    public void printHi() {
        System.out.print( "hi" );
    }

    public void setName( String name ) {
        this.name = name;
    }
}

class Test implements TestInterface {
    private String name;
    int age;
    static int year = 2021;
    final int variable1 = 1;

    // write body of function; this is the body of abstract method in interface TestInterface
    @Override
    public void satHi() {
        System.out.print( "hi" );
        
    }

    Test( String name, int age ) {
        this.name = name;
        this.age = age;
    }

    // this is an example of getter in java
    public String getName() {
        return name;
    }

    void run() {
        System.out.println( variable1 );
    }

    // this is an example of setter in java
    public void setName(String name) {
        this.name = name;
    }


}

class Test2 extends Test {
    String name;
    int age;

    Test2( String name, int age) {
        super( name = "home", 22 );
    }
}