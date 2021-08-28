import java.util.LinkedList;

public class LinkedListDemo {
    public static void main(String[] args) {
        Object objects[] = new Object[100000];
        for (int i = 0; i < objects.length; i++) {
            objects[i] = new Object();
        }
        LinkedList<Object> list = new LinkedList<>();
        long start = System.currentTimeMillis();
        for (Object object : objects) {
            list.add(object);
        }
        long end = System.currentTimeMillis();
        System.out.println("Time taken for LL is:" +(end-start)+"ms");

    }
}
