//Minimum Attendance Requirement
package com.mycompany.problemsolving;
import java.util.*;
public class Minimum_Attendance_Requirement {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            sc.nextLine();
            int ar[] = new int [n];
            String b = sc.nextLine();
            int count = 0;
            for (int i = 0; i < n; i++) {
                if(b.charAt(i) == '1') // here I count all 1, that means how many class he attended.
                    count++;
            }
            if(120 - n + count >= 90) //75% of 120 class is 90 class. if attended class and reamining clases are greater than 90 then print YES.
                System.out.println("YES");
            else
                System.out.println("NO");
            //System.out.println(count);
        }
    }
}
