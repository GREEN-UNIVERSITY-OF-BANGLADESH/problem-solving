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
		int t, M, N, K;
		t = sc.nextInt();
		
		while(t > 0){
		    M = sc.nextInt();
		    N = sc.nextInt();
		    K = sc.nextInt();
		    
		    if(N * K >= M){
		        System.out.println("NO");
		    }else {
		        System.out.println("YES");
		    }
		    
		    t--;
		}
	}
}
