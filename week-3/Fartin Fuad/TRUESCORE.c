#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int a,b,c,d;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        (a<=c && b<=d)?printf("POSSIBLE\n"):printf("IMPOSSIBLE\n");
    }
}
