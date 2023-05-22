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
            int x = 0; // this variable for check balloons for problems 1 through 7 are tied or not.
            int j;
            for (j = 0; j < n; j++) {
                if(x<7){
                    if(ar[j]==1 || ar[j]==2 || ar[j]==3 || ar[j]==4 ||
                            ar[j]==5 || ar[j]==6 || ar[j]==7){ // if there is any balloon for problem 1 to 7 then x++ 
                        x++; //and the loop will be continue if I don't collect all 7 balloons. (codition  x<7)
                    }
                }
                else
                    break; // if I find all 7 balloons then there is no need to continue the loop. so, i use break here.
            }
            System.out.println(j); // I print j here because j'th index is the final index where i find the last balloon to complete all 1 to 7 balloon.
        }
    }
}
