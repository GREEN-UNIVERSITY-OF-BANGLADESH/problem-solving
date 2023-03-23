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
		int t, n, digit, count, zero;
		
		t = sc.nextInt();
		while(t-- > 0){
		    n = sc.nextInt();
		    count = 0;
		    zero = 0;
		    for(int i = 0; i < n; i++){
		        digit = sc.nextInt();
		        if(digit < 0){
		            count++;
		        }
		        if(digit == 0){
		            zero = 1;
		        }
		    }
		    count = count % 2;
		    
		    if(zero == 1){
		        count = 0;
		    }
		    System.out.println(count);
		}
	}
}
