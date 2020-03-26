import java.util.LinkedList;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        int n, m, tmp = 0;
        LinkedList<Integer> linkedList = new LinkedList<>();
        LinkedList<Integer> ans = new LinkedList<>();
        Scanner scanner = new Scanner(System.in);
        n = scanner.nextInt();
        m = scanner.nextInt();
        for(int i = 1 ; i <= n; i++) linkedList.add(i);

        while(!linkedList.isEmpty()) {
            tmp = (tmp+m-1) % linkedList.size();
            ans.add(linkedList.get(tmp));
            linkedList.remove(tmp);
        }
        System.out.print("<");
        for(int i = 0; i < ans.size() - 1; i++) System.out.print(ans.get(i) + ", ");
        System.out.print(ans.getLast());
        System.out.print(">");
        scanner.close();
    }
}