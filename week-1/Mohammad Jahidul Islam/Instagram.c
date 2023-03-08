#include <stdio.h>

int main() {
	
	int testCases;
    scanf("%d", &testCases);
    
    while(testCases--){
        int following, follower;
        scanf("%d %d", &following, &follower);
        int multiple = follower*10;
        if(following > multiple) printf("YES\n");
        else
            printf("NO\n");
        
    }
	return 0;
}
