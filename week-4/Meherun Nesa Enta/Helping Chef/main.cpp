#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
    for(int i=1;i<=t;i++)
	{
	    int n;
	    scanf("%d",&n);
	    if(n<10)
	    printf("Thanks for helping Chef!\n");
	    else 
	    printf("-1\n");
	}
	return 0;
}

