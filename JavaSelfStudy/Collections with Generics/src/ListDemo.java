import java.util.ArrayList;
import java.util.List;

public class ListDemo {
    public static void main(String[] args) {
        List<Integer> list = new ArrayList<>();
        for (int i = 0; i < 6; i++) {
            list.add(i);
        }
        System.out.println("list:"+list);
        list.add(2,10);
        System.out.println("New List after Insertion: "+list);
        list.set(4,76);
        System.out.println("New List after Setting Data: "+list);

        list.remove(2);
        System.out.println("New List after Removing Data: "+list);

    }
}
