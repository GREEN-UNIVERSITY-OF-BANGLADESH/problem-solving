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
			
			int discountedPriceA = 100 - a;
			int discountedPriceB = 200 - (b*2);

			
			if( discountedPriceA < discountedPriceB )
			{
				System.out.println("FIRST");
			}
			else if( discountedPriceA == discountedPriceB)
			{
				System.out.println("BOTH");
			}
			else if(discountedPriceA > discountedPriceB)
			{
			    System.out.println("SECOND");
			}
		t--;
		}
    sc.close();
	}
}
