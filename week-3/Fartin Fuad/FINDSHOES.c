#include <stdio.h>

int main(void) {
	// your code goes here
	int t, n, m;
	scanf("%d", &t);
	while(t--)
	{
	    scanf("%d%d", &n, &m);
	    int right=n;
	    int left;
	    if(m<n)
	    left=n-m;
	    else
	    left=0;
	    printf("%d\n", right+left);
	}
	return 0;
}

