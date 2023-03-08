#include<stdio.h>

int main() {
	// your code goes here
	int t, x, y;
	scanf("%d", &t);
	while(t--)
    {
        scanf("%d%d", &x, &y);
        (y<=(x*107)/100)?printf("YES\n"):printf("NO\n");
    }
	return 0;
}
