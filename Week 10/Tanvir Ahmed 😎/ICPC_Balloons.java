//ICPC Balloons
package com.mycompany.problemsolving;
import java.util.Scanner;
public class ICPC_Balloons {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int ar[] = new int[n];
            for (int i = 0; i < n; i++) {
                ar[i] = sc.nextInt();
            }
            int x = 0;
            int j;
            for (j = 0; j < n; j++) {
                if(x<7){
                    if(ar[j]==1 || ar[j]==2 || ar[j]==3 || ar[j]==4 ||
                            ar[j]==5 || ar[j]==6 || ar[j]==7){
                        x++;
                    }
                }
                else
                    break;
            }
            System.out.println(j);
        }
    }
}
