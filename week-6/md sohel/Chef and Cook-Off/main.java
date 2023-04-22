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
		int t, solved, result;
		String []d = {"Beginner", "Junior Developer", "Middle Developer", "Senior Developer", "Hacker", "Jeff Dean"};
		
		t = sc.nextInt();
		while(t-- > 0){
		    solved = 0;
		    for(int i = 0; i < 5; i++){
		        result = sc.nextInt();
		        solved += result;
		    }
		    System.out.println(d[solved]);
		    
		}
	}
}
