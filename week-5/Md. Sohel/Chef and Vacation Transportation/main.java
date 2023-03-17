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
		int t , x , y, z;
		t = sc.nextInt();
		
		while(t > 0){
		    x = sc.nextInt();
		    y = sc.nextInt();
		    z = sc.nextInt();
		    
		    if(x + y > z){
		        System.out.println("TRAIN");
		    }else if (x + y < z){
		        System.out.println("PLANEBUS");
		    }else {
		        System.out.println("EQUAL");
		    }
		    t--;
		}
	}
}
