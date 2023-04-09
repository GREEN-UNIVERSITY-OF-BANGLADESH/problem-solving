package Nur_Amin_Week3;

import java.util.Scanner;
public class scoreConsist {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int t= sc.nextInt();

        while(t-->0){
            int a= sc.nextInt();
            int b= sc.nextInt();
            int c= sc.nextInt();
            int d= sc.nextInt();
            if((c-a)%b==0 && (d-b)%b==0 && (d-b)/b==(c-a)/b){
                System.out.println("POSSIBLE");
            }else{
                System.out.println("IMPOSSIBLE");
            }
        }
    }
}
