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
		char company[] = new char[3];
		char offered[] = new char[2];
		
		t = sc.nextInt();
		
		while(t > 0){
		    for(int i = 0; i < 3; i++){
		        company[i] = sc.next().charAt(0);
		    }
		    
		    for(int i = 0; i < 2; i++){
		        offered[i] = sc.next().charAt(0);
		    }
		    
		    int found = 0;
		    
		    for(int i = 0; i < 3; i++){
		        for(int j = 0; j < 2; j++){
		           if(company[i] == offered[j]){
		               System.out.println(company[i]);
		               found = 1;
		               break;
		           }
		        }
		        if(found == 1){
		            break;
		        }
		    }
		    
		    t--;
		}
	}
}
