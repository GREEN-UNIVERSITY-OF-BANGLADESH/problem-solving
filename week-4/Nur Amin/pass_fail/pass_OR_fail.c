#include <stdio.h>

int main()
{
    int t,n,x,p;
    scanf("%d", &t);

    while(t--){
        scanf("%d %d %d",&n ,&x ,&p);
        int right= x*3;
        int wrong= (n-x)*(-1);
        int score= right+wrong;
        if(score<p){
            printf("fail\n");
        }
        else
            printf("pass\n");
    }

    return 0;
}
