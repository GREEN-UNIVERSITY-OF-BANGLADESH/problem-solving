/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes 
		Scanner sc = new Scanner(System.in);
		int t, correctOne, answearOne, ans;
		t = sc.nextInt();
		
		while(t-- > 0){
		    correctOne = 0;
		    answearOne = 0;
		    
		    for(int i = 0; i < 3; i++){
		        ans = sc.nextInt();
		        if(ans == 1){
		            correctOne++;
		        }
		    }
		    
		    for(int i = 0; i < 3; i++){
		        ans = sc.nextInt();
		        if(ans == 1){
		            answearOne++;
		        }
		    }
		    
		    if(correctOne == answearOne){
		        System.out.println("Pass");
		    }else {
		        System.out.println("Fail");
		    }
		    
		}
	}
}
