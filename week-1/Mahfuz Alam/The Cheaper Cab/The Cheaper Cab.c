#include<stdio.h>
int main()
{
    int t,i,x,y;
    printf("Enter the number of test cases\n");
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d %d",&x,&y);
        if(x<y)
        {
            printf("First\n");
        }
        else if(x==y)
        {
            printf("Anyone\n");
        }
        else printf("Second\n");
    }




}
