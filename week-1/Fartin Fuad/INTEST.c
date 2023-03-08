//We have populated the solutions for the 10 easiest problems for your support.
//Click on the SUBMIT button to make a submission to this problem.
#include<stdio.h>

int main()
{
	int n,k,count=0;
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++)
	{
		int t;
		scanf("%d",&t);
		if(t%k==0)
		{
			count++;
		}
	}
	printf("%d",count);
	return 0;
}

