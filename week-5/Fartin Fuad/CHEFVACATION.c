#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int a, b, c;
	    scanf("%d%d%d", &a, &b, &c);
	    (a+b<=c) ? printf("YES\n") : printf("NO\n");
	}
	return 0;
}

