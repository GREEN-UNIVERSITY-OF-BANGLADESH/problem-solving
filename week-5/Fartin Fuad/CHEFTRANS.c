#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int x, y, z;
	    scanf("%d%d%d" ,&x, &y, &z);
	    if((x+y)<z)
	        printf("PLANEBUS\n");
	    else if((x+y)>z)
	        printf("TRAIN\n");
	    else
	        printf("EQUAL\n");
	}
	return 0;
}

