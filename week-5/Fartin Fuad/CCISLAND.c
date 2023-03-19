#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int x, y, xr, yr, d;
	    scanf("%d%d%d%d%d", &x, &y, &xr, &yr, &d);
	    ((xr*d)<=x && (yr*d)<=y) ? printf("YES\n") : printf("NO\n");
	}
	return 0;
}

