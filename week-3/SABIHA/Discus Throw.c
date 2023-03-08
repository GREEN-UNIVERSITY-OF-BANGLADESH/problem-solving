#include <stdio.h>

int main(void)
{
   int A, B, C, T ;
   scanf("%d", &T) ;
   for (int i = 1 ;i<=T ; i++){
   scanf("%d %d %d", &A, &B, &C) ;
   if (A>=B && A>=C){
       printf("%d\n", A) ;
   }
   else if (B>=A && B>=C){
        printf("%d\n", B) ;
   }
   else 
   printf("%d\n", C) ;
   }

    return 0;
}
