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
            int f[] = new int [n+1];// this array for frequency. n+1 because 1≤Ai≤N: we have 0 index but we can't take 0. also we can take n that's why size is n+1
            for (int i = 0; i < n; i++) {
                ar[i] = sc.nextInt();
                f[ar[i]]++;// here we count the frequency.
            }
            int max = 0, ind = 0;
            for (int j = 1; j <= n; j++) {
                if(f[j]>max){ 
                    max = f[j]; // find the maximum value in the frequency array.
                    ind = j; // also we take the index of the maximum value.
                }
            }
            boolean c = true;
            f[ind] = 0; //we change the max value index because of checking is there any same as max value available or not.
            for (int k = 1; k <= n; k++) {
                if(f[k]==max)// here if another value that is equal max is available then we say there is no dominant element in A.
                    c = false;
            }
            if(max!=1 && c)// if max=1 that means there is no repeated value in the array.
                System.out.println("YES");
            else
                System.out.println("NO");
        }
    }
}
