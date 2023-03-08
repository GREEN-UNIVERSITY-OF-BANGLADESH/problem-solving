#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	 int x,y;
	 scanf("%d%d",&x,&y);
	 if(x<y) 
	   printf("NO\n");
	 else 
	   printf("YES\n");
	}
	return 0;
}

