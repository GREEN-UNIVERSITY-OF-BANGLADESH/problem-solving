package Mahasena;
/* package codechef; // don't place package name! */
//@jahidulZaid

import java.util.*;


/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		int even =0, odd =0;
		for (int i = t; i>0; i--){
			int x=sc.nextInt();
			if( x % 2 == 0  ){
			    even ++;
			}else odd++;

		}
		if( even>odd )
			{
				System.out.println("READY FOR BATTLE");
			}
			else
			{
				System.out.println("NOT READY");
			}
	sc.close();
	} 
}
