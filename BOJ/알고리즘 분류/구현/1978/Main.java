import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int n, num, ans = 0;
        Scanner scanner = new Scanner(System.in);
        n = scanner.nextInt();
        for(int i = 0; i < n; i++) {
            num = scanner.nextInt();
            if(num <= 1) continue;
            boolean flag = false;
            for(int j = 2; j <= num / 2; j++) {
                if(num % j == 0) {
                    flag = true;
                    break;
                }
            }
            if(!flag) ans++;
        }

        System.out.println(ans);
        scanner.close();
    }
}