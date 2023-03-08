import java.util.Scanner;

public class INSTAGRAM {
    public static void main(String[] args) {

        int a;
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        int[] b = new int[a];
        int[] c = new int[a];
        int[] d = new int[a];
        for (int i = 0; i < a; i++) {
            b[i] = sc.nextInt();
            c[i] = sc.nextInt();
            d[i] = c[i] * 10;
        }
        for (int i = 0; i < a; i++) {
            if (b[i] > d[i]) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }

    }
}
