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
		int t, salary;
		float gros;
		
		t = sc.nextInt();
		while(t > 0){
		    salary = sc.nextInt();
		    if(salary < 1500){
		        gros = salary + (.10f * salary) + (.90f * salary);
		        System.out.printf("%.2f\n", gros);
		    }else {
		        gros = salary + 500 + (.98f * salary);
		        System.out.printf("%.2f\n",gros);
		    }
		    
		    t--;
		}
	}
}
