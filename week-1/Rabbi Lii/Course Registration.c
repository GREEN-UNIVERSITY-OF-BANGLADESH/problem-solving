//Course Registration problem in codeChef.

#include <stdio.h>
int main()
{
    int T, N, M, K;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d %d %d", &N, &M, &K);
        if (N <= M - K)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
