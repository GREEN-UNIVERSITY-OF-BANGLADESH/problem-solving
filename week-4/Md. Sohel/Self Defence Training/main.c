#include <stdio.h>

int main(void) {
	// your code goes here
	int t, n, age, count;

	scanf("%d", &t);
	while(t--){
	    scanf("%d", &n);
	    count = 0;

	    for(int i = 0; i < n; i++){
	        scanf("%d", &age);
	        if(age >= 10 && age <= 60) count++;
	    }
	    printf("%d\n", count);
	}

	return 0;
}
