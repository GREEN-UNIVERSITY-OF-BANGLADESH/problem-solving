#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--)
{
    	int x,y;
	scanf("%d %d", &x,&y);
	if (x>y*10)
	printf("YES\n");
	else
	printf("NO\n");
}
	return 0;
}
