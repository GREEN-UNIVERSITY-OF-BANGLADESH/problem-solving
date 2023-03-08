#include<stdio.h>
int main()
{
    int x,t,y,z,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&x,&y);
       if(x>y){
        printf(">\n");
       }
       else if(x<y){
        printf("<\n");
       }
       else{
        printf("=\n");
       }
    }
}
