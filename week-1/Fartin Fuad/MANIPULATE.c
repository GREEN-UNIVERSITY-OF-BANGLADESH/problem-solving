#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x, y;
	scanf("%d", &t);
	while(t--)
	{
	    scanf("%d%d", &x, &y);
	    if(x>=y)
	        printf("YES\n");
	   else
	       printf("NO\n");
	}
	return 0;
}

