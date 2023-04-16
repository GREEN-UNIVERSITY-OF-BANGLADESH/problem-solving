#include <stdio.h>

int main(void) {
	// your code goes here
	int sub, prac;
	    scanf("%d %d", &sub, &prac);
    if(sub)
    {
        if(prac)
            printf("https://discuss.codechef.com\n");
        else
            printf("https://www.codechef.com/contests\n");
    }
    else
        printf("https://www.codechef.com/practice\n");
	return 0;
}