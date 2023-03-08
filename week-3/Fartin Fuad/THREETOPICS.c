#include <stdio.h>

int main(void) 
{
	    int a, b, c, x;
	    scanf("%d%d%d%d", &a, &b, &c, &x);
	    (a==x || b==x || c==x)?printf("YES\n"):printf("NO\n");
	return 0;
}

