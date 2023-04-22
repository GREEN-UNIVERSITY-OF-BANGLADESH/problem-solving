#include<stdio.h>

int main(void)
{

    int t;
    scanf("%d",&t);
    while(t--)
    {

        int x,m,d;
        scanf("%d %d %d",&x,&m,&d);
        if(m*x<x+d)
        {
            printf("%d\n",m*x);
        }
        else
        {
            printf("%d\n",x+d);
        }
    }
    return 0;
}

