#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int arr[t];
	    int count1=0, count2=0;
	    for(int i=0; i<7; i++)
	    {
	        scanf("%d", &arr[i]);
	        if(arr[i]==1)
	            count1++;
	        else
	            count2++;
	    }
	    (count1>count2)?printf("YES\n") : printf("NO\n");
	}
	return 0;
}

