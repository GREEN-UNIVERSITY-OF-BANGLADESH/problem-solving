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
		String hidden, guess;
		
		int t;
		t = sc.nextInt();
		while(t > 0){
		    hidden = sc.next();
		    guess = sc.next();
		    StringBuffer m = new StringBuffer("");
		    
		    int i = 0;
		    while(i < hidden.length()){
		        if(hidden.charAt(i) == guess.charAt(i)){
		            m.insert(i, 'G');
		        }else {
		            m.insert(i, 'B');
		        }
		        i++;
		    }
		    
		    System.out.println(m);
		    
		    t--;
		}
		
		
	}
}
