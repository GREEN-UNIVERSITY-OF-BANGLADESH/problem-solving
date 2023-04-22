#include<stdio.h>

int main(void)
{

    int t;
    scanf("%d",&t);
    while(t--)
    {

        int X;
        scanf("%d",&X);
        if(X>65)
        {
            printf("Overload\n");
        }
        else if(X<35)
        {
            printf("Underload\n");
        }
        else
        {
            printf("Normal\n");
        }
    }
    return 0;
}

