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
		int []arr = new int[4];
		
		t = sc.nextInt();
		
		while(t > 0){
		    for(int i = 0; i < 4; i++){
		        arr[i] = sc.nextInt();
		    }
		    
		    double costOne = (double)arr[2] / arr[0];
		    double costTwo = (double)arr[3] / arr[1];
		    
		    if(costOne < costTwo){
		        System.out.println(-1);
		    }else if(costOne > costTwo){
		        System.out.println(1);
		    }else {
		        System.out.println(0);
		    }
		    t--;
		}
	}
}
