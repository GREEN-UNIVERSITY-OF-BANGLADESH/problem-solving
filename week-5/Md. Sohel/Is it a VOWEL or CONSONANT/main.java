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
		char c = sc.next().charAt(0);
		
		switch(Character.toLowerCase(c)){
		    case 'a':
		    case 'e':
		    case 'i':
		    case 'o':
		    case 'u':
		        System.out.println("Vowel");
		        break;
		    default:
		        System.out.println("Consonant");
		}
	}
}
