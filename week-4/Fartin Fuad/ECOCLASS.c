#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int n, count=0;
	    scanf("%d", &n);
	    int arr[n], arr2[n];
	    for(int i=0; i<n; i++)
	        scanf("%d", &arr[i]);
	    for(int i=0; i<n; i++)
	        scanf("%d", &arr2[i]);
	   for(int i=0; i<n; i++)
	        if(arr[i]==arr2[i])
	            count++;
	   printf("%d\n", count);
	}
	return 0;
}

