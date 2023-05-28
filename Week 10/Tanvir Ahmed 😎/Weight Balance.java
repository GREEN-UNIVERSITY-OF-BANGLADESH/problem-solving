//Weight Balance
package com.mycompany.problemsolving;
import java.util.*;
public class Weight_Balance {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int w1 = sc.nextInt();
            int w2 = sc.nextInt();
            int x1 = sc.nextInt();
            int x2 = sc.nextInt();
            int m = sc.nextInt();
            int mul1 = x1*m;
            int mul2 = x2*m;
            double sub = w2 - w1;
            if(sub>= mul1 && sub<=mul2)
                System.out.println(1);
            else
                System.out.println(0);
        }
    }
}
