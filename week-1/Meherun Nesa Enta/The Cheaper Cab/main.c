  #include<stdio.h>
 int main()
 {
     int X,Y,i,j;
    scanf("%d",&j);
     for(i=1;i<=j;i++){
    scanf("%d%d",&X,&Y);
     if(X<Y)
        printf("First\n");
     else if(X==Y)
        printf("Any\n");
     else
        printf("Second\n");


     }

     return 0;
 }



