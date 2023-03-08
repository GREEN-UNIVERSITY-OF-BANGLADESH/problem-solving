import java.util.Scanner;
//https://www.codechef.com/problems/COURSEREG
public class COURSEREG {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int a=sc.nextInt();
            int b=sc.nextInt();
            int c=sc.nextInt();
            if((b-c)>=a){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
    }
}
