#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int a, b, c;
	    scanf("%d%d%d", &a, &b, &c);
	    if(b<c && b<a )
	        printf("Bob\n");
	   else if(c<a & c<b)
	        printf("Alice\n");
	   else
	        printf("Draw\n");
	}
	return 0;
}

