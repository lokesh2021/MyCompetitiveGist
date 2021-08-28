import java.util.ArrayList;
import java.util.Iterator;

public class ArrayListDemo {
    public static void main(String[] args) {
        ArrayList<Integer> list = new ArrayList();
        list.add(20);
        list.add(4);
        list.add(34);

        System.out.println("Array list: "+list);

        Iterator<Integer> itr = list.iterator();
        while (itr.hasNext()){
            System.out.println(itr.next());
            itr.remove();
        }
        System.out.println("After removing: "+list);

    }
}
