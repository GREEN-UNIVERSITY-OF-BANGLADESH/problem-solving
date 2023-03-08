#include<stdio.h>
int main()
{
    int t,i,x,z,p,q,sum;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        sum=0;
        scanf("%d",&x);
        while(x>0)
        {
            z=x%10;
            x=x/10;
            sum=(sum+z);
        }
        printf("%d\n",sum);
    }
}
