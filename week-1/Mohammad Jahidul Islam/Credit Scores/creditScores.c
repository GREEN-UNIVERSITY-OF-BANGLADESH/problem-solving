#include <stdio.h>

int main(void) {
	// your code goes here
	int requiredScores = 750, currentScores;
        scanf("%d", &currentScores);
        
        if(currentScores > requiredScores  || requiredScores==currentScores) printf("YES\n");
        else
            printf("NO\n");

	return 0;
}

