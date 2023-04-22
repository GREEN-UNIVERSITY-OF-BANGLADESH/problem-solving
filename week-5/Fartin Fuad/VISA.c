#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int x1, x2, y1, y2, z1, z2;
	    scanf("%d%d%d%d%d%d", &x1, &x2, &y1, &y2, &z1, &z2);
	    bool x=true, y=true, z=true;
	    if(x1>x2)
	        x=false;
	    if(y1>y2)
	        y=false;
	    if(z1<z2)
	        z=false;
	        
	    (x && y && z)? printf("YES\n") : printf("NO\n");
	}
	return 0;
}

