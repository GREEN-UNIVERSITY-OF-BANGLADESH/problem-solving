import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	 Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        while (n-- > 0) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();
            if (a + b + c == 180) 
            System.out.println("YES");
            
            else 
            
            System.out.println("NO");
        }
	}
}
