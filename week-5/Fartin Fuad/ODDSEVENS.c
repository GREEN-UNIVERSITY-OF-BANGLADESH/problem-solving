#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int a, b;
	    scanf("%d%d", &a, &b);
	    ((a+b)%2==1) ? printf("Alice\n") : printf("Bob\n");
	}
	return 0;
}

