// Jahidul Islam
// Problem of Codechef

import java.util.*;

public class firstAndLastDigit {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while (t-- > 0) {
            int n = sc.nextInt();
            int last = n % 10;
            int first = 0;
            while (n > 0) {
                first = n % 10;
                n /= 10;
            }
            System.out.println(first + last);
        }
        sc.close();
    }
    
}