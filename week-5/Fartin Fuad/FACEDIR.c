#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int x;
	    scanf("%d", &x);
	    switch(x%4)
	    {
	        case 1:
	        {
	            printf("East\n");
	            break;
	        }
	        case 2:
	        {
	            printf("South\n");
	            break;
	        }
	        case 3:
	        {
	            printf("West\n");
	            break;
	        }
	        case 0:
	        {
	            printf("North\n");
	            break;
	        }
	    }
	}
	return 0;
}

