public class HelloWorld {
    public static void main(String[] args) {
        System.out.println("Hello World!!");
    }

    // static block code gets executed before the main function
    static {
        System.out.println("static block 1");
    }

    static {
        System.out.println("static block 2");
    }
}
