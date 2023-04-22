#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int k;
	    scanf("%d", &k);
	    int forward, backward;
	    if(k%2==0)
	    {
	        forward=3*k/2;
	        backward=k/2;
	    }
	    else
	    {
	        forward=3*(k/2)+3;
	        backward=k/2;
	    }
	    printf("%d\n", forward-backward);
	    
	}
	return 0;
}

