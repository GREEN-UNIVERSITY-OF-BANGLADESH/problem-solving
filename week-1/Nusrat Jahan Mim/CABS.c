#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int x,y;
	    scanf("%d %d",&x,&y);
	    if(x<y)
	    printf("FIRST\n");
	    else if(x>y)
	    printf("SECOND\n");
	    else
	    printf("ANY\n");
	}
	
	return 0;
}

