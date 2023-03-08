#include<stdio.h>
int main()
{
    float x,y,z;
    int t,i;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%f %f %f",&x,&y,&z);
        float m=(x+y+z);
        if(x>0&&y>0&&z>0&&m==180)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}
