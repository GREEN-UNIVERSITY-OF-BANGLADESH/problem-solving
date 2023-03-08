//We have populated the solutions for the 10 easiest problems for your support.
//Click on the SUBMIT button to make a submission to this problem.

#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int a, b,r;
		scanf("%d",&a);
		scanf("%d",&b);
		
		r=a%b;
		printf("%d",r);
		printf("\n");
		
	}
}
