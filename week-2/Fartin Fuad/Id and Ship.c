#include <stdio.h>

void main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    char ch;
	    fflush(stdin);
	    scanf("%c[^\n]", &ch);
	    if(ch=='b' || ch=='B')
	        printf("BattleShip\n");
	   else if(ch=='c' || ch=='C')
	        printf("Cruiser\n");
	   else if(ch=='d' || ch=='D')
	        printf("Destroyer\n");
	   else if(ch=='f' || ch=='F')
	        printf("Frigate\n");
	}
}
