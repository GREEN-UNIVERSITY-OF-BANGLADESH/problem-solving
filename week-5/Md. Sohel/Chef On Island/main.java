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
		float foodDay, waterDay, minDay;
		int []arr = new int[5];
		
		t = sc.nextInt();
		
		while(t > 0){
		    for(int i = 0; i < 5; i++){
		        arr[i] = sc.nextInt();
		    }
		    
		    foodDay = (float)arr[0] / arr[2];
		    waterDay = (float)arr[1] / arr[3];
		    
		    minDay = foodDay > waterDay ? waterDay : foodDay;
		    
		    if(minDay >= arr[4]){
		        System.out.println("YES");
		    }else {
		        System.out.println("NO");
		    }
		    
		    t--;
		}
	}
}
