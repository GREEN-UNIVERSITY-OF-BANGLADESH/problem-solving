#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int n;
	    scanf("%d", &n);
	    (n<10)?printf("Thanks for helping Chef!\n") : printf("-1\n");
	    
	}
	return 0;
}

