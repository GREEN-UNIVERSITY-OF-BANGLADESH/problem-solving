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
        t = sc.nextInt();
	while(t > 0){
	    int n;
	    int count = 0;
	    n = sc.nextInt();
	    for(int i = 0; i < n; i++){
	        int day;
	        day = sc.nextInt();
	        if(day == 6 || day == 7 || day == 13 || day ==14 || day == 20 || day ==21 || day ==27 || day == 28){
	            count++;
	        }
	    }
	    System.out.println(8 + n - count);
	    t--;
	}
	}
}
