//Lapindromes
package com.mycompany.mavenproject2;
import java.util.Scanner;
public class Lapindromes {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-->0){
            String s = sc.nextLine();
            int ar1[] = new int [26]; // declare 2 array for initializing first half and second half of the string.
            int ar2[] = new int [26];
            if(s.length()%2==0){ // if the length of the string is even.
                for (int i = 0; i < s.length()/2; i++) {
                    ar1[s.charAt(i)-97]++; // i am taking the fequency of the letters of the string. (frist half)
                }
                for (int j = s.length()/2; j < s.length(); j++) {
                    ar2[s.charAt(j)-97]++;// taking second half.
                }
            }
            else{
                for (int i = 0; i < s.length()/2; i++) {
                    ar1[s.charAt(i)-97]++;
                }
                for (int j = (s.length()/2)+1; j < s.length(); j++) { // if the length is odd number then avoid the middle letter. with the expression (length/2)+1.
                    ar2[s.charAt(j)-97]++;
                }
            }
            boolean check = true;
            for (int i = 0; i < 26; i++) {
                if(ar1[i] != ar2[i]) // here compere the ar1 and ar2 if the frequencys are not same then it set false.
                    check = false;
            }
            if(check) // if check true then print yes otherwise print no.
                System.out.println("YES");
            else
                System.out.println("NO");
        }
    }
}
