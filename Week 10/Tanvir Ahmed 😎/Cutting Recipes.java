//Cutting Recipes.
package com.mycompany.problemsolving;
import java.util.*;
public class Cutting_Recipes {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int ar[] = new int [n];
            for (int i = 0; i < n; i++) {
                ar[i] = sc.nextInt();
            }
            int min = Integer.MAX_VALUE;
            for (int j = 0; j < n; j++) {
                if(ar[j]<min)
                    min = ar[j];
            }
            int m = 0, l = 0;
            boolean check = false;
            for (int k = 2; k <= min; k++) {
                check = false;
            for (int i = 0; i < n; i++) {
                if(ar[i]%k!=0){
                    check = true;
                    break;
                }
            }
                if(!check){
                    m = k;
                    l=1;
                }
            }
            if(l==1){
                for (int j = 0; j < n; j++) {
                    System.out.print(ar[j]/m+" ");
                }
                System.out.println();
            }
            else{
                for (int i = 0; i < n; i++) {
                    System.out.print(ar[i]+" ");
                }
                System.out.println();
            }
        }
    }
}
