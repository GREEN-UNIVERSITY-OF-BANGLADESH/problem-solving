
#include<stdio.h>

int main()
{
	int n,k,A=0,i;
	scanf("%d%d",&n,&k);
	/*while(n--)*/
	for(i=1;i<=n;i++)
	{ 
	    int t;
	    scanf("%d",&t);
	 if(t%k==0) 
	 {
	   A++;
	 }
	}
	 printf("%d",A);
	
	return 0;
}

