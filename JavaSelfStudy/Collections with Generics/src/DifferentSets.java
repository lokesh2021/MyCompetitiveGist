import java.util.HashSet;
import java.util.Random;

public class DifferentSets {
    public static void main(String[] args) {
        Random obj = new Random();
        HashSet<Integer> set = new HashSet<>();
        for (int i = 0; i <=10; i++) {
            int n = obj.nextInt(100);
            set.add(n);
            System.out.println(n);
        }
        System.out.println("hashSet Elements: "+set);
    }
}
