import java.util.HashSet;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        int n, m;
        Long num;
        HashSet<Long> hashSet = new HashSet<>();
        Scanner scanner = new Scanner(System.in);
        n = scanner.nextInt();
        for(int i = 0; i < n; i++) {
            num = scanner.nextLong();
            hashSet.add(num);
        }
        m = scanner.nextInt();
        for(int i = 0; i < m; i++) {
            num = scanner.nextLong();
            if(hashSet.contains(num)) {
                System.out.println(1);
            }else {
                System.out.println(0);
            }
        }
        scanner.close();
    }
}