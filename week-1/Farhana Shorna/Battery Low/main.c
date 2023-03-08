#include <stdio.h>

int main(void) {
	// your code goes here
	int i,t,x;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
	    scanf("%d",&x);
	    if(x<=15)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}
