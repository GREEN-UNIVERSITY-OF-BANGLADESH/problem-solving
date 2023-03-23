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
		int t, left, right, size;
		
		t = sc.nextInt();
		while(t-- > 0){
		    left = 0;
		    right = 0;
		   for(int i = 0; i < 3; i++){
		       size = sc.nextInt();
		       if(size == 0){
		           left = 1;
		       }
		       if(size == 1){
		           right = 1;
		       }
		   }
		   
		   if(left == 1 && right == 1){
		       System.out.println(1);
		   }else {
		       System.out.println(0);
		   }
		}
		
	}
}
