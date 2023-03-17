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
		int t, penaltyOne, penaltyTwo;
		int []arr = new int[4];
		t = sc.nextInt();
		
		while(t > 0){
		    for(int i = 0; i < 4; i++){
		        arr[i] = sc.nextInt();
		    }
		    penaltyOne = arr[0] + (arr[2] * 10);
		    penaltyTwo = arr[1] + (arr[3] * 10);
		    
		    if(penaltyOne < penaltyTwo){
		        System.out.println("Chef");
		    }else if(penaltyOne > penaltyTwo){
		        System.out.println("Chefina");
		    }else {
		        System.out.println("Draw");
		    }
		    t--;
		}
	}
}
