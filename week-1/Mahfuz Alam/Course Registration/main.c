#include<stdio.h>
int main()
{
    int x,y,i,t,m;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d %d",&x,&y,&m);
        if((y-m)>=x){
            printf("Yes\n");
        }
        else printf("No\n");
    }
}
