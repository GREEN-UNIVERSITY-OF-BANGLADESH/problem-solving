#include <stdio.h>

int main(void) {
	// your code goes here
	int t, discount1, discount2;
	float price1, price2;

	scanf("%d", &t);
	while(t--){
	    scanf("%d %d", &discount1, &discount2);

	    price1 = 100 - discount1;
	    price2 = ((100 - discount2) / (float) 100 ) * 200;

	    if(price1 < price2){
	        printf("FIRST\n");
	    }else if (price1 > price2){
	        printf("SECOND\n");
	    }else {
	        printf("BOTH\n");
	    }
	}

	return 0;
}

