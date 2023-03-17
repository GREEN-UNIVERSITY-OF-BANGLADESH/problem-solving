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
		int t, M, H;
		t = sc.nextInt();
		
		while(t > 0){
		    M = sc.nextInt();
		    H = sc.nextInt();
		    
		    int BMI = M / (H * H);
		    
		    if(BMI <= 18){
		        System.out.println(1);
		    }else if(BMI >= 19 && BMI <= 24){
		        System.out.println(2);
		    }else if (BMI >= 25 && BMI <= 29){
		        System.out.println(3);
		    }else {
		        System.out.println(4);
		    }
		    t--;
		}
	}
}
