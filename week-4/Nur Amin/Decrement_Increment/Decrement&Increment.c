#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	if(n%4==0){
	    n++;
	}
	else{
	    n--;
	}
	printf("%d\n", n);
	return 0;
}
