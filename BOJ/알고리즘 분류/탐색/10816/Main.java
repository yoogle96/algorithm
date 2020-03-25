import java.util.HashMap;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        HashMap<Long, Integer> map = new HashMap<>();
        int n, m;
        Long num;
        Scanner scanner = new Scanner(System.in);
        StringBuilder stringBuilder = new StringBuilder();
        n = scanner.nextInt();
        for(int i = 0; i < n; i++) {
            num = scanner.nextLong();
            if(map.containsKey(num)) {
                map.put(num, map.get(num)+1);
            }else {
                map.put(num, 1);
            }
        }
        m = scanner.nextInt();
        for(int i = 0; i < m; i++) {
            num = scanner.nextLong();
            if(map.containsKey(num)) {
                stringBuilder.append(map.get(num) + " ");
            }else {
                stringBuilder.append(0 + " ");
            }
        }
        System.out.println(stringBuilder.toString());
        scanner.close();
    }
}