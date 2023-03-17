/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t;
		
		t = sc.nextInt();
		
		while(t > 0){
		   int n = sc.nextInt();
		   
		   if(n >= 1 && n < 100){
		       System.out.println("Easy");
		   }else if (n >= 100 && n < 200){
		       System.out.println("Medium");
		   }else {
		       System.out.println("Hard");
		   }
		    t--;
		}
	}
}
