#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int a, b;
	    scanf("%d%d", &a, &b);
	    if(a>0 && b>0)
	        printf("Solution\n");
	    else if(!a)
	        printf("Liquid\n");
	   else
	        printf("Solid\n");
	}
	return 0;
}

