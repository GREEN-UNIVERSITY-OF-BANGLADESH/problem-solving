#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x, y;
	scanf("%d", &t);
	while(t--)
	{
	    int n;
	    scanf("%d", &n);
	    int arr[n];
	    int count=0;
	    for(int i=0; i<n; i++)
	    {
	        scanf("%d", &arr[i]);    
	        if(arr[i]>=10 && arr[i]<=60)
	        count++;
	    }
	    printf("%d\n", count);
	}
	return 0;
}

