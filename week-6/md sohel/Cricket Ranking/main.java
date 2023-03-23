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
		int t, run, wicket, catches, aCount, bCount;
		int []a = new int[3];
		int []b = new int[3];
		
		t = sc.nextInt();
		while(t-- > 0){
		    aCount = 0;
		    bCount = 0;
		    for(int i = 0; i < 3; i++){
		        a[i] = sc.nextInt();
		    }
		    
		    for(int i = 0; i < 3; i++){
		        b[i] = sc.nextInt();
		    }
		    
		    for(int i = 0; i < 3; i++){
		        if(a[i] > b[i]) aCount++;
		        if(a[i] < b[i]) bCount++;
		    }
		    
		    if(aCount > bCount){
		        System.out.println('A');
		    }else {
		        System.out.println('B');
		    }
		}
	}
}
