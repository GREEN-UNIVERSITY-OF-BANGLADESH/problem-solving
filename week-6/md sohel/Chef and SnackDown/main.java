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
		int t, n;
		int []year = {2010, 2015, 2016, 2017, 2019};
		
		t = sc.nextInt();
		while(t > 0){
		    n = sc.nextInt();
		    int found  = 0;
		    for(int i = 0; i < year.length; i++){
		        if(year[i] == n){
		            found = 1;
		            break;
		        }
		    }
		    if(found == 1){
		        System.out.println("HOSTED");
		    }else {
		        System.out.println("NOT HOSTED");
		    }
		    t--;
		}
	}
}
