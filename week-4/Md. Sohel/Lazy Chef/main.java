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
		int t, x, m, d;
		t = sc.nextInt();
		
		while(t--){
		    x = sc.nextInt();
		    m = sc.nextInt();
		    d = sc.nextInt();
		    
		    if(x*m >= x + d){
		        System.out.println(x+d);
		    }else {
		        System.out.println(x*m);
		    }
		}
	}
}
