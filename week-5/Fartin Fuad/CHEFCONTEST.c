#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int x, y, p, q;
	    scanf("%d%d%d%d", &x, &y, &p, &q);
	    ((x+(p*10))>(y+(q*10))) ? printf("Chefina\n") : ((x+(p*10))<(y+(q*10))) ? printf("Chef\n") : printf("Draw\n");
	}
	return 0;
}

