import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int n, m;
        java.util.Scanner scanner = new Scanner(System.in);

        n = scanner.nextInt();
        m = scanner.nextInt();
        boolean[] arr = new boolean[m+1];
        arr[1] = true;

        for(int i = 2; i < Math.sqrt(m); i++) {
            if(!arr[i]) {
                for(int j = i + i; j <= m; j += i) {
                    if(j > m) break;
                    if(!arr[j]) arr[j] = true;
                }
            }
        }
        for(int i = n; i <= m; i++) {
            if(!arr[i]) {
                System.out.println(i);
            }
        }
        scanner.close();
    }
}
