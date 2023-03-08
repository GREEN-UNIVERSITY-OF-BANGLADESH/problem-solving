#include <stdio.h>

int main() {
	// your code goes here
	int i,j,X,Y;
    scanf("%d",&j);
    for(i=1;i<=j;i++)
    {
        scanf("%d%d",&X,&Y);
         
        printf("%d\n",abs(X-Y));
    }
	return 0;
}

