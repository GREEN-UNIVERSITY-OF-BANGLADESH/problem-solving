#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x, y, z;
	scanf("%d", &t);
	while(t--)
	{
	    scanf("%d%d%d", &x, &y, &z);
	    (x+y+z==180)?printf("YES\n"):printf("NO\n");
	}
	return 0;
}

