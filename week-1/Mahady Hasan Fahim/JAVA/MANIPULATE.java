import java.util.Scanner;

public class MANIPULATE {
    public static void main(String[] args) {

        int t;
        Scanner sc = new Scanner(System.in);
        t = sc.nextInt();
        int a, b;
        while (t-- > 0) {
            a = sc.nextInt();
            b = sc.nextInt();
            if (a >= b) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }

        }
    }
}
