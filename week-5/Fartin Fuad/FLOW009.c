#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    float a, b;
	    scanf("%f%f", &a, &b);
	    (a>1000) ? printf("%f\n", (a*b)-(a*b*0.1)) : printf("%f\n", a*b);
	}
	return 0;
}

