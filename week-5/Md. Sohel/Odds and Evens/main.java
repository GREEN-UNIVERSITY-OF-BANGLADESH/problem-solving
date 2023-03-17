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
		int t, p1, p2, sum;
		
		t = sc.nextInt();
		
		while(t > 0){
		    p1 = sc.nextInt();
		    p2 = sc.nextInt();
		    
		    sum = p1 + p2;
		    
		    if(sum % 2 == 1){
		        System.out.println("Alice");
		    }else {
		        System.out.println("Bob");
		    }
		    t--;
		}
	}
}
