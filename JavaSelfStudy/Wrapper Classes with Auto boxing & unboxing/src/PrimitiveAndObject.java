public class PrimitiveAndObject {
    public static void main(String[] args) {

        //Primitive to Object and back
        int a =10;
        Integer b=Integer.valueOf(a);
        System.out.println("Integer to Object: "+b);
        int y= b.intValue();
        System.out.println("Object to Integer: "+y);

        //Primitive to String and back
        byte x =100;
        String s =Byte.toString(x);
        System.out.println("Primitive to String: "+s);
        byte z = Byte.parseByte(s);
        System.out.println("String to Primitive: "+z);

    }
}
