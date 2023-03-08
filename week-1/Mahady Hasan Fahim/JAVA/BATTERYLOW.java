import java.util.Scanner;

public class BATTERYLOW {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int a = sc.nextInt();
            if (a > 15) {
                System.out.println("NO");
            } else {
                System.out.println("YES");
            }
        }
    }

}
