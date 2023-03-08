#include <stdio.h>

int main() {
	
	int testCases;
    scanf("%d", &testCases);
    
    while(testCases--){
        int x, y;
        scanf("%d %d", &x, &y);
        
        if(x < y) printf("FIRST\n");
        else if(x > y) printf("SECOND\n");
        else if (x==y)
        {
            printf("ANY\n");
        }
        else
            return 0;
        
    }
	return 0;
}
