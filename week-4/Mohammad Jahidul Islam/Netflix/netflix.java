
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
			int c=sc.nextInt();
			int x=sc.nextInt();
			int total = a+b+c;
			
			if( total > x && (a+b >= x || b+c >= x || c+a >= x))
			{
				System.out.println("YES");
			}
			else
			{
				System.out.println("NO");
			}
		t--;
		}
    sc.close();
	}
}
