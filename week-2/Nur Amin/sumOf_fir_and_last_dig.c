#include <stdio.h>
int main()
{
    int n, t;
    int first ,last,sum;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        int first=n;
        int last=n%10;
        while(first>=10){
            first=first/10;
        }
        sum=first+last;
        printf("%d\n", sum);
    }
}
