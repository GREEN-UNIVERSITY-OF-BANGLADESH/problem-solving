/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc = new Scanner(System.in);
	    int t, n, fact, i;
	    
	    t = sc.nextInt();
	    
	    while(t > 0){
	        n = sc.nextInt();
	        fact = 1;
	        i = 1;
	        
	        while(i <= n){
	            fact *= i;
	            i++;
	        }
	        
	        System.out.println(fact);
	        t--;
	    }
	}
}
