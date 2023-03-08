import java.util.*;
// Jahidul Islam
// Problem of Codechef

public class reverseTheNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        for(int i = 0; i < t; i++){
            Long n = sc.nextLong();

            String s = n.toString();
            String reverse = "";

            for(int j = s.length() - 1; j >= 0; j--){
                reverse += s.charAt(j);
            }

            System.out.println(Long.parseLong(reverse));
        }
        sc.close();
    }
}