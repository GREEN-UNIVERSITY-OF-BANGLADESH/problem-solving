package Nur_Amin_Week3;

import java.util.Scanner;

public class findingShoes {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        int extraShoe;

        while(t-->0){
            int n= sc.nextInt();
            int m= sc.nextInt();
            
            if(extraShoe<=0){
                extraShoe=n-m;
            }else{
                System.out.println(n+extraShoe);
            }

        }
    } 
}
