// Jahidul Islam
// Problem of Codechef

import java.util.*;

public class idAndShip {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while (t-- > 0) {
            String s = sc.next();
            if (s.equals("B") || s.equals("b")) System.out.println("BattleShip");
            else if (s.equals("C") || s.equals("c")) System.out.println("Cruiser");
            else if (s.equals("D") || s.equals("d")) System.out.println("Destroyer");
            else if (s.equals("F") || s.equals("f")) System.out.println("Frigate");
        }
        sc.close();
    }
}