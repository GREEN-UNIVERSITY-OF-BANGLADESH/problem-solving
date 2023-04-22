#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int z, y, a, b, c;
	    scanf("%d%d%d%d%d", &z, &y, &a, &b, &c);
	    z-=y;
	    ((a+b+c) > z)? printf("NO\n") : printf("YES\n");
	}
	return 0;
}

