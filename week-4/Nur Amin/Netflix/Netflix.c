#include <stdio.h>
int main()
{
    int a,b,c,x,T;
    scanf("%d", &T);

    while(T--)
    {
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);
        scanf("%d", &x);
        if(a+b>=x|| a+c>=x || b+c>=x){
            printf("yes\n");
        }
        else
            printf("no\n");
    }
}
