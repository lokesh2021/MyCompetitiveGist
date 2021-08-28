import java.util.*;

public class HashSetDemo {
    public static void main(String[] args) {
        Random obj = new Random();

        List<Integer> list = new ArrayList<>();
        for (int i = 0; i <=10; i++) {
            int n = obj.nextInt(10);
            list.add(n);
        }
        System.out.println("List: "+list);

        Set<Integer> set = new HashSet<>(list);
        System.out.println("Set: "+set);
    }
}
