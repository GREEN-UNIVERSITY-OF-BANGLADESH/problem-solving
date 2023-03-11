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
		Scanner input = new Scanner(System.in);
		int t =input.nextInt();
		for(int i=0;i<t;i++)
		{
		    int x1=input.nextInt();
		    int x2=input.nextInt();
		    int y1=input.nextInt();
		    int y2=input.nextInt();
		    int z1=input.nextInt();
		    int z2=input.nextInt();
		    if(x1<=x2 && y1<=y2 && z1>=z2)
		     System.out.println("YES");
		     else
		     System.out.println("NO");
		}
	}
}
