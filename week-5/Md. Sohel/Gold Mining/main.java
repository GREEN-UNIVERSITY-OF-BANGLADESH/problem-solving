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
		int t;
		int arr[] = new int[3];
		
		t = sc.nextInt();
		
		while(t > 0){
		    for(int i = 0; i < 3; i++){
		        arr[i] = sc.nextInt();
		    }
		    
		    if((arr[0] + 1) * arr[2] >= arr[1]){
		        System.out.println("YES");
		    }else {
		        System.out.println("NO");
		    }
		    t--;
		}
	}
}
