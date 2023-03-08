#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b;
	    scanf("%d %d",&a,&b);
	    if(a<b)
		{
	       printf("FIRST\n");
		}
		else if(b<a)
		{
		    printf("SECOND\n");
		}
		else
		{
		    printf("ANY\n");
		}
	}
	
	return 0;
}

