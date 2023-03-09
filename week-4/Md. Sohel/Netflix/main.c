#include <stdio.h>

int main(void) {
	// your code goes here

	int t, amount[3], cost, i, j,same;

	scanf("%d", &t);

	while(t--){
	    scanf("%d %d %d %d", &amount[0], &amount[1], &amount[2], &cost);
	    same = 0;
	    if(amount[0] + amount[1] >= cost || amount[0] + amount[2] >= cost || amount[1] + amount[2] >= cost){
	        printf("YES\n");
	    }else{
	        printf("NO\n");
	    }

	}

	return 0;
}
