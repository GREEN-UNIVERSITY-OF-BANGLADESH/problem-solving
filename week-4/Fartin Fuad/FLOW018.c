#include <stdio.h>

int factorial(int n)
{
    if(n==0)
        return 1;
    else
    return (n*factorial(n-1));
}

int main(void)
{
    // your code goes here
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int demo=1;
        int result=factorial(n);
        printf("%d\n", result);
    }
    return 0;
}

