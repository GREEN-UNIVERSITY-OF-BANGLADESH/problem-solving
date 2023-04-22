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
		
		int t, totalMedalOne, totalMedalTwo;
		
		t = sc.nextInt();
		
		while(t > 0){
		    totalMedalOne = 0;
		    totalMedalTwo = 0;
		    int medal;
		    
		    for(int i = 0; i < 6; i++){
		        medal = sc.nextInt();
		        if(i < 3){
		            totalMedalOne += medal;
		        }else {
		            totalMedalTwo += medal;
		        }
		    }
		    
		    if(totalMedalOne > totalMedalTwo){
		        System.out.println(1);
		    }else {
		        System.out.println(2);
		    }
		    t--;
		}
	}
}
