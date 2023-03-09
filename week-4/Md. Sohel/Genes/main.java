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
		char color1, color2;
		
		color1 = sc.next().charAt(0);
		color2 = sc.next().charAt(0);
		
		if(color1 == 'R' || color2 == 'R'){
		    System.out.println("R");
		}else if(color1 == 'B' || color2 == 'B'){
		    System.out.println("B");
		}else {
		    System.out.println('G');
		}
	}
}
