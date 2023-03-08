#include<stdio.h>
int main()
{
    int t,i,x,z,p,q,sum;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        sum=0;
        scanf("%d",&x);
        z=x%10;
        sum=(sum+z);
        while(x>9)
        {
            x=x/10;

        }
        sum=sum+x;
        printf("%d\n",sum);
    }
}

