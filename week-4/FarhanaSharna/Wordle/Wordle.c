#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    char s[100], t[100];
	    fflush(stdin);
	    scanf("%s", s);
	    fflush(stdin);
	    scanf("%s", t);
	    for(int i=0; i<strlen(s); i++)
	    {
	        if(s[i]==t[i])
                printf("G");
            else
                printf("B");
	    }
	    printf("\n");
	}
	return 0;
}

