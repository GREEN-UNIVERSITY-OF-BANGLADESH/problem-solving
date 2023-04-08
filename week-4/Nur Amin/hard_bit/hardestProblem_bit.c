#include <stdio.h>
int main()
{
    int a,b,c,t;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d %d", &a, &b, &c);
        if(b<c && b<a){
            printf("bob\n");
        }
        else if(c<a && c<b){
            printf("alice\n");
        }
        else{
            printf("draw\n");
        }
    }
    return 0;
}
