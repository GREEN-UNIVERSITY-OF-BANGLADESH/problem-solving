#include <stdio.h>

int main(void) {
	int t,x,y;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    scanf("%d",&x);
	    scanf("%d",&y);
	    int n=0;
	    n=(x+y);
	    if(n%2==0)
	    printf("%d",n/2);
	    else
	    printf("%d",-1);
	}
	return 0;
}

