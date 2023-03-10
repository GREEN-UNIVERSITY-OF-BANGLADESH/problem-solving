#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    char string[100], test[100];
	    fflush(stdin);
	    scanf("%s", string);
	    fflush(stdin);
	    scanf("%s", test);
	    for(int i=0; i<strlen(string); i++)
	    {
	        if(string[i]==test[i])
                printf("G");
            else
                printf("B");
	    }
	    printf("\n");
	}
	return 0;
}

