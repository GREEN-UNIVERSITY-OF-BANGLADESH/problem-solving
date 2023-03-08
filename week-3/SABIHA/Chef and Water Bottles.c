#include <stdio.h>

int main() {
    int t, x, n, k ;
    scanf("%d", &t) ;
    for (int i = 1 ; i<=t ;i++){
        scanf("%d %d %d", &n, &x, &k) ;
        if( k/x<=n){
            printf("%d\n", k/x) ;
        }
        else
        printf("%d\n", n) ;
   
   // else
   // printf("%d\n", k) ;
    }
    return 0;

}