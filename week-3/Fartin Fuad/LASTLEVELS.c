#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x, y, z;
	scanf("%d", &t);
	int time=0;
	while(t--)
	{
	    int flag=0;
	    scanf("%d%d%d", &x, &y, &z);
	    if(x<=3)
	    {
	        printf("%d\n", y*x);
	        flag=1;
	    }
	    else
	    {
	        time=(x*y)+(x/3)*z;
	        if(x%3==0)
                time-=z;

	    }
	    if(!flag)
	    printf("%d\n", time);
	}
}

