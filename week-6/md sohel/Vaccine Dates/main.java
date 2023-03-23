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
		int t, d, l, r;
		
	    t = sc.nextInt();
	    while(t-- > 0){
	        d = sc.nextInt();
	        l = sc.nextInt();
	        r = sc.nextInt();
	        
	        if(d < l){
	            System.out.println("Too Early");
	        }else if (d > r){
	            System.out.println("Too Late");
	        }else {
	            System.out.println("Take second dose now");
	        }
	    }
	}
}
