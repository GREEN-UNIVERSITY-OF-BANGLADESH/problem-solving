package Nur_Amin_Week3;

import java.util.Scanner;
public class miamiGP {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int t= sc.nextInt();

        while(t-->0){
            int x= sc.nextInt();
            int y= sc.nextInt();

            if(y<=x*1.07){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
    } 
}
