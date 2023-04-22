/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc = new Scanner(System.in);
		int t;
		String []names = {"BattleShip", "Cruiser", "Destroyer", " ", "Frigate"};
		
		t = sc.nextInt();
		
		while(t > 0){
		    char c = sc.next().charAt(0);
		    
		    System.out.println(names[Character.toLowerCase(c) - 98]);
		    t--;
		}
	}
}
