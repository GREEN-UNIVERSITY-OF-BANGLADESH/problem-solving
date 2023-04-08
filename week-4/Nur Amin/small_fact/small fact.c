#include <stdio.h>

int main(void) {
	int n,t;
	scanf("%d", &t);
	while(t--){
	    int fact=1;
	    scanf("%d", &n);
	    for(int i=1; i<=n; i++){
	        fact= fact*i;
	    }
	    printf("%d\n", fact);
	}
	return 0;
}
