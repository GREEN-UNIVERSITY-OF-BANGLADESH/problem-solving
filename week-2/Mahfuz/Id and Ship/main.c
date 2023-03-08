#include<stdio.h>
int main()
{
    int i,t;
    scanf("%d",&t);
    char x;
    for(i=0; i<t; i++)
    {

        scanf("%c",&x);
        if(x=='B'||x=='b')
        {
            printf("Battleship\n");
        }
        else if(x=='c'||x=='C')
        {
            printf("Cruiser\n");
        }
        else if(x=='D'||x=='d')
        {
            printf("Destroyer\n");
        }
        else if(x=='f'|| x=='F')
        {
            printf("Frigate\n");
        }
    }


}
