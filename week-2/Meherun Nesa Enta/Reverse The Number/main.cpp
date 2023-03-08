 #include<stdio.h>
 int main()
 {
     int i,j,t,n;
     scanf("%d",&t);
     for(i=0;i<t;i++)
     {
         int rev=0;
         int rem;
         
         scanf("%d",&n);
          while(n!=0)
         {
             rem =n%10;
             rev =rev*10+rem;
             n=n/10;
         }
          printf("%d\n",rev);
         
     }
 }