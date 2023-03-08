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
			int x=sc.nextInt();
			int y=sc.nextInt();
			double requiredTime = x*1.07;

			if( y>requiredTime)
			{
				System.out.println("NO");
			}
			else
			{
				System.out.println("YES");
			}
		t--;
		}
    sc.close();
	}
}
