#include <stdio.h>

int main(void)
{
    // your code goes here
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, x, p;
        scanf("%d%d%d", &n, &x, &p);
        int right=x*3;
        int wrong=(n-x)*(-1);
        if(right+wrong>=p)
            printf("PASS\n");
        else
            printf("FAIL\n");
    }
    return 0;
}

