//Equal Elements
package com.mycompany.problemsolving;
import java.util.*;
public class EqualElements {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int ar[] = new int [n];
            int freq[] = new int [n+1];
            for (int i = 0; i < n; i++) {
                ar[i] = sc.nextInt();
                freq[ar[i]]++; // calculating the frequency.
            }
            int max = 0;
            for (int j = 1; j <= n; j++) {
                if(max<freq[j])
                    max = freq[j]; //calculating the max value in frequency. that means there is a value in the array that repeating maximum time.
            }//if i change all values in the array to this maximum value that will be the minimum time of operations required to make all elements equal.
            System.out.println(n-max);// at last print how many value i should change to make all equal.
        }
    }
}
