#include <stdio.h>

int main(void) {
    int n, x=0, y=0, a[100] ;
    scanf("%d", &n) ;
     for (int i = 1; i<=n; i++){
        scanf("%d", &a[i]) ;
     }
    for (int i = 1; i<=n; i++){
        
        if (a[i]%2==0){
            x++ ;
        }
            else
            y++ ;
        }
        if(x>y)
            printf("READY FOR BATTLE\n") ;
        
        else 
        printf("NOT READY\n") ;
    
    return 0;
}