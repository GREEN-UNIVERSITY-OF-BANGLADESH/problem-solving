#include<stdio.h>
int main()
{
    int t,x,y,i;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d %d",&x,&y);
        int mod=x%y;
        printf("%d\n",mod);
    }
}
