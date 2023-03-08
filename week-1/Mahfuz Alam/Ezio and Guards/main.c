#include<stdio.h>
int main()
{
    int x,y,i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&x,&y);
        if(x>=y){
            printf("Yes\n");
        }
        else printf("No\n");
    }
}
