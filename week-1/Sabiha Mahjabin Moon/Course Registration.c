#include <stdio.h>

int main() {
    int t, m, n, k;
    scanf("%d", &t) ;
    for (int i = 0; i<t ;i++){
        scanf("%d %d %d", &n, &m, &k) ;
        if (k+n <= m){
            printf("YES\n") ;
        }
        else{
            printf("NO\n") ;
        }
    }

    return 0;
}

