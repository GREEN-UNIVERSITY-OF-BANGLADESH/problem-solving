#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x, y;
	scanf("%d", &t);
	while(t--)
	{
	    scanf("%d%d", &x, &y);
	    if(x>y)
	        printf(">\n");
	   else if(x<y)
	    printf("<\n");
	   else
	       printf("=\n");
	}
	return 0;
}

