#include <stdio.h>

int main(void) 
{
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    float x1, x2, y1, y2;
	    scanf("%f%f%f%f", &x1, &x2, &y1, &y2);
        ((y1)>(y2*x1/x2)) ? printf("1\n") : ((y1)<(y2*x1/x2)) ? printf("-1\n") : printf("0\n");
	}
	return 0;
}

