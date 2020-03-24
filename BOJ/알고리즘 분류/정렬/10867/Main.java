import java.util.Iterator;
import java.util.Map;
import java.util.Scanner;
import java.util.TreeMap;

/**
 * Main
 */
public class Main {

    public static void main(String[] args) {
        int n;
        TreeMap<Integer, Integer> treeMap = new TreeMap<>();
        Scanner scanner = new Scanner(System.in);
        n = scanner.nextInt();
        for(int i = 0; i < n; i++) {
            int num = scanner.nextInt();
            treeMap.put(num, 1);
        }

        Iterator iterator = treeMap.entrySet().iterator();

        while(iterator.hasNext()) {
            Map.Entry e = (Map.Entry)iterator.next();
            System.out.print(e.getKey() + " ");
        }
        scanner.close();
    }
}