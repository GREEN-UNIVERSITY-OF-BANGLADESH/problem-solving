  #include<stdio.h>
 
int main()
{
    int t,x,y,z;
    scanf("%d",&t);
    while(t--)
    {
        int extra_time=0,time=0;
         scanf("%d%d%d",&x,&y,&z);
         
        if(x<=3)
        printf("%d\n",x*y);
        else
        {
            extra_time =(( x/3)*z);
            time=(((x/3)-1)*z)+(x*y);
             if(x%3==0)
              printf("%d\n",time);
              
            else
           
           printf("%d\n",extra_time+x*y);
           
            
        }
    }
}
