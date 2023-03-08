// Jahidul Islam
// Problem of Codechef
import java.util.*;

public class LuckyFour {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while (t-- > 0) {
            int n = sc.nextInt();
            int count = 0;
            while (n > 0) {
                if (n % 10 == 4) count++;
                n /= 10;
            }
            System.out.println(count);
        }
        sc.close();
    }
}