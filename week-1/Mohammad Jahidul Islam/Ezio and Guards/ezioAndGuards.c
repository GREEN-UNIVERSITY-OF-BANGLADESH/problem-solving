#include <stdio.h>

int main() {
	
	int testCases;
    scanf("%d", &testCases);
    
    while(testCases--){
        int x, y;
        scanf("%d %d", &x, &y);
        
        if(x>y || x==y) printf("YES\n");
        else
            printf("NO\n");
        
    }
	return 0;
}
