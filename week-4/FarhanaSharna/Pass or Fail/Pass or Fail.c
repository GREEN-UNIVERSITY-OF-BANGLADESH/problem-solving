#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
    {
        int n,x,p;
        scanf("%d %d %d",&n,&x,&p);
        int correct = x*3;
        int incorrect = (n-x)*(-1);
       int result = correct+incorrect;
       if(result>=p)
       {
           printf("PASS\n");
       }
       else
       {
           printf("FAIL\n");
       }
    }
	return 0;
}