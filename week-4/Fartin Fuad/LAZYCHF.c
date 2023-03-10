#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int x, m, d;
	    scanf("%d%d%d", &x, &m, &d);
	    (m*x<x+d)?printf("%d\n", m*x) : printf("%d\n", x+d);
	}
	return 0;
}

