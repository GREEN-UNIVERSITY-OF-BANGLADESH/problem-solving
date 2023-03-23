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
		int t, n, happy;
		int []alice = new int[100];
		int []bob = new int[100];
		t = sc.nextInt();
		
		while(t > 0){
		    n = sc.nextInt();
		    happy = 0;
		    for(int i = 0; i < n; i++){
		        alice[i] = sc.nextInt();
		    }
		    for(int i = 0; i < n; i++){
		        bob[i] = sc.nextInt();
		    }
		    for(int i = 0; i < n; i++){
		        if(alice[i] * 2 >= bob[i] && bob[i] * 2 >= alice[i]) happy++;
		    }
		    System.out.println(happy);
		    t--;
		}
		
	}
}
