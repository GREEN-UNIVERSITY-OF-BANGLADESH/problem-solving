/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes 
		Scanner sc = new Scanner(System.in);
		int t,h,x,y,c, total;
		
		t = sc.nextInt();
		
		while(t-- > 0){
		    h = sc.nextInt();
		    x = sc.nextInt();
		    y = sc.nextInt();
		    c = sc.nextInt();
		    
		    total = h *(x + y / 2);
		    
		    if(total <= c){
		        System.out.println("Yes");
		    }else {
		        System.out.println("No");
		    }
		}
		
	}
}
