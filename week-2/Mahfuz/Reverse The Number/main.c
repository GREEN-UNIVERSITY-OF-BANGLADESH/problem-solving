#include<stdio.h>
int main()
{
    int x,t,y,z,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&x);
        while(x>0){
            y=x%10;
            printf("%d",y);
            x=x/10;
        }
        printf("\n");
    }
}
