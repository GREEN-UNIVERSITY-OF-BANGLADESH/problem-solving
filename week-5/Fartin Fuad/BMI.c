#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int h, m;
	    scanf("%d%d", &m, &h);
	    long long int BMI = m / (h * h);
	    //printf("BMI is %lld \n", BMI);
	    if(BMI <= 18)
	        printf("1\n");
	    else if(BMI >= 19 && BMI <= 24)
	        printf("2\n");
	    else if(BMI >= 25 && BMI <= 29)
	        printf("3\n");
	    else 
	    printf("4\n");
	 }
	return 0;
}

