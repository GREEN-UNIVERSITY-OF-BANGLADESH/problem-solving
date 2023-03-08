#include <stdio.h>

int main(void) {
    int t, a, b, c, d ;
    scanf("%d", &t) ;
    for (int i = 1 ; i<=t ; i++){
        scanf("%d %d %d %d", &a, &b, &c, &d) ;
         if (a<=c && d>=b)
        printf("POSSIBLE\n ") ;
    
    else
    printf("IMPOSSIBLE\n ") ;
     }
    return 0;
}