package Nur_Amin_Week3;
import java.util.Scanner;
public class mahesena {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int n= sc.nextInt();
        int even=0;
        int odd=0;

        for(int i=0; i<n; i++){
            int num=sc.nextInt();
            if(num%2==0){
                even++;
            }else{
                odd++;
            }
        }
        if(even>odd){
            System.out.println("READY FOR BATTLE");
        }else{
            System.out.println("NOT READY");
        }
    }
}
