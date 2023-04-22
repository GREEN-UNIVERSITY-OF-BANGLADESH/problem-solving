
#include<stdio.h>
int main(void)
{

    int T,A,B,C,X;
    scanf("%d",&T);
    while(T--)
    {

        scanf("%d %d %d %d", &A,&B,&C,&X);
        if(A+B>=X || B+C>=X || C+A>=X)
         printf("YES\n");

        else

    printf("NO\n");
   }

   return 0;
}