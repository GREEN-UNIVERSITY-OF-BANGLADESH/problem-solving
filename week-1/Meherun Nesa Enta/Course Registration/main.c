#include <stdio.h>

int main(void) {
	// your code goes here
	int i,n,m,k,x;
	scanf("%d",&x);
	
	for(i=1;i<=x;i++)
	{
	    scanf("%d%d%d",&n,&m,&k);
	    if(m-k>=n)
	    printf("YES\n");
	    else 
	    printf("NO\n");
	}
	return 0;
}

