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
		while(t!=0)
		{
			int a=sc.nextInt();
			int b=sc.nextInt();
            
            int pairs = a*2;
            
            int buyShoes = pairs -(b<a?b:a);
			
			
			System.out.println(buyShoes);
			
		t--;
		}
    sc.close();
	}
}
