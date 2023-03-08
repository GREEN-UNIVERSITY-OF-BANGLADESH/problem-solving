 #include<stdio.h>
int main()
{
    int X,Y,i,j;
    scanf("%d ",&j );
    for(i=1; i<=j; i++)
    {
        scanf("%d%d",&X,&Y);
         if(X>10*Y)
         printf("YES\n");
         else 
         printf("NO\n");
         
         
    }


    return 0;
}
