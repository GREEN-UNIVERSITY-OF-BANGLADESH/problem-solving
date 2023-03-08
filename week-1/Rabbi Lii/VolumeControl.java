package all;
import java.util.*;

public class VolumeControl {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while(t-- > 0){
            int x, y;
            x = sc.nextInt();
            y = sc.nextInt();

            int ans = (x > y) ? x - y : y - x;
            System.out.println(ans);
        }
        sc.close();
    }

    
}
