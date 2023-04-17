#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
    {
        int a;
        scanf("%d ",&a);
        if(a<10){
	          printf("Thanks for helping Chef!\n");
	        }
	        else {
	            printf("-1\n");
	        }
    }
	return 0;
}