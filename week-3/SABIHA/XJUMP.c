#include <stdio.h>
int main(void)
{
    int t, x, y ;
    scanf("%d", &t) ;
    for (int i = 1; i<=t ;i++){
      scanf("%d %d ", &x, &y) ;
      if (x%y==0){
          printf("%d\n", x/y) ;
      }
      else{
      printf("%d\n", (x/y)+(x%y)) ;
      }
    }
    return 0 ;
}