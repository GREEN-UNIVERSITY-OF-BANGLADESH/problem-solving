#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	
	while(t--)
	{
    	int max=0;
    	int x=3;
	    int arr[x];
	    while(x--)
	    {
	        int i;
	        scanf("%d", &i);
	        if(i>=max)max=i;
	    }
	    printf("%d\n", max);
	    
	}
	return 0;
}

