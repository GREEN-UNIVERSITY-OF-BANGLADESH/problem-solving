import java.util.Scanner;

public class HS08TEST {
    public static void main(String[] args) {

        int a;
        float b;
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        b = sc.nextFloat();
        if (a % 5 == 0) {
            System.out.println(b - a - .5);

        } else {
            System.out.println(b);
        }

    }
}
