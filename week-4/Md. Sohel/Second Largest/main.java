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
		int testCase, a,b,c, secondMax;
	    testCase = sc.nextInt();
	    
	    while(testCase > 0){
	        a = sc.nextInt();
	        b = sc.nextInt();
	        c = sc.nextInt();
	        
	        
	        if((a > b && a < c) || (a > c && a < b)){
	            secondMax = a;
	        }else if((b > a && b < c) || (b > c && b < a)){
	            secondMax = b;
	        }else {
	            secondMax = c;
	        }
	        
	        System.out.println(secondMax);
	        
	        testCase--;
	    }
	}
}
