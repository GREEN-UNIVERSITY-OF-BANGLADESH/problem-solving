#include<stdio.h>
int main()
{
    float x,y;
    scanf("%f %f",&x,&y);
    if((int)x%5==0&& (x+0.5)<=y)
    {
        printf("%.2f",y-(x+.5));
    }
    else if((int)x%5!=0)
    {
        printf("Not Multiple of 5\n%0.2f",y);
    }
    else if((x+.5)>y)
    {
        printf("Insufficient Balance\n%0.2f",y);
    }
}
