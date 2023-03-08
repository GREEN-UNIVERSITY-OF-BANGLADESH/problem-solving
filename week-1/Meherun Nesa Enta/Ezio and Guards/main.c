#include <stdio.h>

int main() {
	// your code goes here
	int t,i,x,y;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
	    scanf("%d%d",&x,&y);
	    if(x>=y)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

