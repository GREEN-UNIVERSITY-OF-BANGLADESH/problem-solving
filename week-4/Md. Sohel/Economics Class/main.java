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
		int t, n, count;
		t = sc.nextInt();
		
		while(t > 0){
		    n = sc.nextInt();
		    int []s = new int[n];
		    int []d = new int[n];
		    
		    count = 0;
		    for(int i = 0; i < n; i++){
		        s[i] = sc.nextInt();
		    }
		    for(int i = 0; i < n; i++){
		        d[i] = sc.nextInt();
		    }
		    
		    for(int i = 0; i < n; i++){
		        if(s[i] == d[i]){
		            count++;
		        }
		    }
		    
		    System.out.println(count);
		    t--;
		}
	}
}
