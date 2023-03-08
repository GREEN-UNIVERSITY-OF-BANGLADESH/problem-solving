#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x, y;
	scanf("%d", &t);
	while(t--)
	{
	    scanf("%d%d", &x, &y);
	    if(x<y)
	        printf("First\n");
	   else if(x>y)
	       printf("Second\n");
	   else
	       printf("Any\n");
	}
	return 0;
}

