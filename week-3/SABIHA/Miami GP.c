#include <stdio.h>

int main() {
    int t, x, y ;
    scanf("%d", &t) ;
    for (int i = 1; i<=t; i++){
        scanf("%d %d", &x, &y) ;
        if(y<=1.07*x){
            printf("YES\n") ;
        }
        else 
        printf("NO\n") ;
    }
    return 0;
}