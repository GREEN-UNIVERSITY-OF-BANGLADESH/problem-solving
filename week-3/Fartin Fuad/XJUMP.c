#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x, y;
	scanf("%d", &t);
	while(t--)
	{
	    int move;
	    scanf("%d%d", &x, &y);
	    if(x%y==0)
        {
	        move=x/y;
	        //printf("Devisible\n");
        }
	   else
	       {
	           move=x/y;
	           move+=(x-move*y);
	       }
        printf("%d\n", move);
	}
	return 0;
}

