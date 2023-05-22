//Dominant Element
package com.mycompany.problemsolving;
import java.util.Scanner;
public class Dominant_Element {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int ar[] = new int [n];
            int f[] = new int [n+1];
            for (int i = 0; i < n; i++) {
                ar[i] = sc.nextInt();
                f[ar[i]]++;
            }
            int max = 0, ind = 0;
            for (int j = 0; j < n; j++) {
                if(f[j]>max){
                    max = f[j];
                    ind = j;
                }
            }
            boolean c = true;
            f[ind] = 0;
            for (int k = 0; k < n; k++) {
                if(f[k]==max)
                    c = false;
            }
            if(max!=1 && c)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
    }
}
