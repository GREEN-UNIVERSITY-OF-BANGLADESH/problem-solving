//We have populated the solutions for the 10 easiest problems for your support.
//Click on the SUBMIT button to make a submission to this problem.

#include<stdio.h>
int main (void){
   int n, t, r, i, id ;
   scanf("%d", &t) ;
   for(i=1; i<=t; i++){
    scanf("%d", &n) ;
    id = n%10 ;
    while(n>0){
     r = n%10 ;
     n = n/10 ;
    }
    printf("%d\n", r+id) ;
   }
   return 0 ;

}
