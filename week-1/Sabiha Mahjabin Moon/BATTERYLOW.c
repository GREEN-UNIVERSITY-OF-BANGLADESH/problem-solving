#include <stdio.h>

int main() {
    int  x, t;
    scanf("%d", &t) ;
    for (int i = 1; i<=t; i++){
        scanf("%d", &x) ;
        if (x<=15){
            printf("YEs\n") ;
        }
        else{
            printf("NO\n") ;
        }
        
    }
    
        
    

    return 0;
}