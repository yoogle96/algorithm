import java.util.Scanner;
import java.util.TreeSet;

public class Main {

    public static void main(String[] args) {
        int n, m;
        Long num;
        TreeSet<Long> hashSet = new TreeSet<>();
        Scanner scanner = new Scanner(System.in);
        n = scanner.nextInt();
        for(int i = 0; i < n; i++) {
            num = scanner.nextLong();
            hashSet.add(num);
        }

        m = scanner.nextInt();
        for(int i = 0; i < m; i++) {
            num = scanner.nextLong();
            if(hashSet.contains(num)) System.out.print(1 + " ");
            else System.out.print(0 + " ");
        }
        scanner.close();
    }
}