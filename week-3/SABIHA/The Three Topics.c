#include <stdio.h>

int main(void)
{
   int A, B, C, X ;
   scanf("%d %d %d %d", &A, &B, &C, &X) ;
   if (X==A || X==B || X==C){
       printf("YES\n") ;
   }
   else 
   printf("NO\n") ;

    return 0;
}

