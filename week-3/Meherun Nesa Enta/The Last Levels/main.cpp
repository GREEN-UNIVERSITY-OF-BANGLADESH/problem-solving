 #include<iostream>
using namespace std;
 
int main()
{
    int t,x,y,z;
    cin>>t;
    while(t--)
    {
        int extra_time=0,time=0;
         cin>>x>>y>>z;
        if(x<=3)
       cout<<(x*y)<<endl;
        else
        {
            extra_time =(( x/3)*z);
             if(x%3==0)
            time=(((x/3)-1)*z)+(x*y);
             if(x%3==0)
              cout<<time<<endl;
              
            else
           
            cout<<extra_time+x*y<<endl;
           
            
        }
    }
}