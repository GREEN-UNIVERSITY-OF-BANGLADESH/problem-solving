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
		int t, teampOne, teamTwo, goal;
		
		t = sc.nextInt();
		while(t-- > 0){
		    teampOne = 0;
		    teamTwo = 0;
		    
		    for(int i = 1; i <= 10; i++){
		        goal = sc.nextInt();
		        if(i % 2 == 1){
		            teampOne += goal;
		        }else {
		            teamTwo += goal;
		        }
		    }
		    if(teampOne > teamTwo){
		        System.out.println(1);
		    }else if(teampOne < teamTwo){
		        System.out.println(2);
		    }else {
		        System.out.println(0);
		    }
		}
	}
}
