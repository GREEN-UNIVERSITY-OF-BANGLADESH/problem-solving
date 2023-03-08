package code;
import java.util.Scanner;

public class addTwoNum {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int T= sc.nextInt();
        while(T-->0){
            int A= sc.nextInt();
            int B= sc.nextInt();
            int sum= A+B;
            System.out.println(sum);
        }
    }
}
