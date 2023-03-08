import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) 
	 {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        while (n --> 0) {
            int a = sc.nextInt();
            int count = 0;
            while (a > 0) {
                if (a % 10 == 4) count++;
                a /= 10;
            }
            System.out.println(count);
        }
    sc.close();
    }
}