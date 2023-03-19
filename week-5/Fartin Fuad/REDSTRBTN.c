#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int  x, y, z;
	    scanf("%d%d%d", &x, &y, &z);
	    ((x+y+z)>5)? printf("YES\n") : printf("NO\n");
	}
	return 0;
}

