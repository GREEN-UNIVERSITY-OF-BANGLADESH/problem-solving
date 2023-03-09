#include <stdio.h>

int main(void) {
	// your code goes here
	int practice, contest;

	scanf("%d %d", &practice, &contest);

	if(practice){
	    if(contest){
	        printf("https://discuss.codechef.com\n");
	    }else {
	        printf("https://www.codechef.com/contests\n");
	    }
	}else{
	    printf("https://www.codechef.com/practice\n");
	}
	return 0;
}
