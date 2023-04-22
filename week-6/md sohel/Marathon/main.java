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
		int t, day, distance;
		long  totalDistance;
		int []categories = {10, 21, 42};
		long units[] = new long[3];
		
		t = sc.nextInt();
		while(t-- > 0){
		    day = sc.nextInt();
		    distance = sc.nextInt();
		    
		    for(int i = 0; i < 3; i++){
		        units[i] = sc.nextInt();
		    }
		    
		    totalDistance = day*distance;
		    
		    int i = 0;
		    
		    while( i < 3 && categories[i] <= totalDistance){
		        i++;
		    }
		    
		    if(i == 0){
		        System.out.println(0);
		    }else {
		        System.out.println(units[i - 1]);
		    }
		    
		}
	}
}
