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
		int testCase, totalQuestion, correctAnswear, neededMarks;
		testCase = sc.nextInt();
		
		while(testCase > 0){
		    totalQuestion = sc.nextInt();
		    correctAnswear = sc.nextInt();
		    neededMarks = sc.nextInt();
		    
		    int totalMarks = correctAnswear*3 - (totalQuestion - correctAnswear);
		    
		    if(totalMarks >= neededMarks){
		       System.out.println("PASS");
		    }else {
		        System.out.println("FAIL");
		    }
		    
		    testCase--;
		}
	}
}
