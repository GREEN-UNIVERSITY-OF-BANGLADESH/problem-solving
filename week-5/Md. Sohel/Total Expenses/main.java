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
		int t, q, p;
		
		t = sc.nextInt();
		
		while(t > 0){
		    q = sc.nextInt();
		    p = sc.nextInt();
		    
		    double cost = q * p;
		    
		    if(q > 1000){
		        cost = cost * 0.9;
		    }
		  
		    System.out.printf("%f\n", cost);
		
		    t--;
		}
	}
}
