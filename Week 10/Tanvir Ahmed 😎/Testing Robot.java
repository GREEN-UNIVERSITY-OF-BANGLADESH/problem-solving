//Testing Robot
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int x = sc.nextInt();
            sc.nextLine();
            HashSet<Integer> al = new HashSet();
            String s = sc.nextLine();
            for (int i = 0; i < n; i++) {
                if(s.charAt(i)=='R'){
                    al.add(x);
                    x++;
                }
                else{
                    al.add(x);
                    x--;
                }al.add(x);
            }
            System.out.println(al.size());
        }
    }
}
