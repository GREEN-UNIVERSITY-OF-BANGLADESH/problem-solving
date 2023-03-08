#include <stdio.h>

int main() {
    int t, m, n ;
    scanf("%d", &t) ;
    for (int i = 1 ; i<=t ;i++){
        scanf("%d %d", &n, &m) ;
        if (m>=n){
            printf("%d\n", n) ;
        }
        else
        printf("%d\n", 2*n-m) ;
    }
    return 0;
}
