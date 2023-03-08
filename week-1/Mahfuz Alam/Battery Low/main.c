#include<stdio.h>
int main()
{
    int t,i,x;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&x);
        if(x<=15){
            printf("Yes\n");
        }
        else printf("No\n");
    }
}
