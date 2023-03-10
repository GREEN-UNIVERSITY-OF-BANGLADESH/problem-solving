#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int basic;
	    scanf("%d", &basic);
	    if(basic<1500)
	        printf("%0.2f\n", (float)basic * 2);
	    else
	        printf("%0.2f\n", basic+500+(float)(0.98*basic));
	}
	return 0;
}

