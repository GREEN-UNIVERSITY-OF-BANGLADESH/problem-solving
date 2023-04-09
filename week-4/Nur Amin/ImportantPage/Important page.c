#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);

    if(a==0){
        printf("https://www.codechef.com/practice\n");
    }
    else if(b==0){
        printf("https://www.codechef.com/contests");
    }
    else{
        printf("https://discuss.codechef.com");
    }

    return 0;
}
