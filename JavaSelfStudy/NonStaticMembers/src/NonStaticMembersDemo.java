public class NonStaticMembersDemo {
    int num;

    NonStaticMembersDemo() {
        System.out.println("Inside Constructor");
    }

    //non-static block gets executed everytime an object is called
    {
        System.out.println("Inside Non Static Block");
    }

    public static void main(String[] args) {
        System.out.println("Inside Main Method");
        new NonStaticMembersDemo();
        new NonStaticMembersDemo();
        NonStaticMembersDemo obj = new NonStaticMembersDemo();
        obj.doSomething();
    }

    void doSomething(){
        System.out.println("Insite doSomething");
    }


}
