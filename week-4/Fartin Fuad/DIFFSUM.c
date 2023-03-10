#include <stdio.h>

int main(void) {
	// your code goes here
	int x, y;
	    scanf("%d%d", &x, &y);
	    if(x>y)
	        printf("%d", abs(x-y));
	   else
	       printf("%d", x+y);
	return 0;
}

