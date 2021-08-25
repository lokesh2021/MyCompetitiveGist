public class StaticMethods {
    public static void main(String[] args) {
        System.out.println("Inside Main");
        StaticMethods.method1();
    }

    static void method1() {
        System.out.println("Inside method 1");
    }

    static {
        System.out.println("Inside Static Block");
        StaticMethods.method1();
    }
}
