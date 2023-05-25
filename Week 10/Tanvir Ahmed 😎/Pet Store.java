//Pet Store
package com.mycompany.mavenproject2;
import java.util.Scanner;
public class Pet_Store {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int ar[]  =  new int [n];
            int freq[] = new int [101];// this array for taking the frequency for how many animal we have same types.
            for (int i = 0; i <= 100; i++) {
                freq[i] = 0;// initially frequency is zero
            }
            for (int i = 0; i < n; i++) {
                ar[i] = sc.nextInt(); // taking the array and calculating the frequency in this loop.
                freq[ar[i]]++;
            }
            boolean check = true;
            for (int j = 0; j <= 100; j++) {
                if(freq[j] !=0){ 
                    if(freq[j]%2==1) // if there is any odd number animal in of same type then we can't divide this animals to two friends.
                        check = false;// asume that we have 3 animal of 4 type. that means we have 4 4 4 this 3 animal. here we can't divide this 3 animal to two friends so the answer will be NO.
                }
            }
            if(check)
                System.out.println("YES");// here i am printing the output.
            else
                System.out.println("NO");
        }
    }
}
