#include<stdio.h>
int main()
{
    int t,i,x,z,p,q,count;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        count=0;
        scanf("%d",&x);

        while(x>0)
        {
             z=x%10;
             if(z==4){
            count++;
             }
            x=x/10;

        }

        printf("%d\n",count);
    }
}

