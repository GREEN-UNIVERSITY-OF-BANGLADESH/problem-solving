#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int x;
	    scanf("%d", &x);
	    if(x>65)
	        printf("Overload\n");
	    else if(x<35)
	        printf("Underload\n");
	    else
	        printf("Normal\n");
	}
	return 0;
}

