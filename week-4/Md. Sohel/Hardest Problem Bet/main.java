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
		int t, a,b,c;
		t = sc.nextInt();
		
		while(t > 0){
		    a = sc.nextInt();
		    b  = sc.nextInt();
		    c  = sc.nextInt();
		    
		    if(b < c && b < a){
		        System.out.println("Bob");
		    }else if(c < a && c < b){
		        System.out.println("Alice");
		    }else {
		        System.out.println("Draw");
		    }
		    t--;
		}
	}
}
