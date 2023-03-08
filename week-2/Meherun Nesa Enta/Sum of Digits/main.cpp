    #include<iostream>
 using namespace std;
 int main()
 {

     int i,t,n;
     int j,k;
     cin>>t;
     for(i=0;i<t;i++)
     {
         int sum=0;
         cin>>n;
         for(j=n;j>=1;j--)
         {
             sum=sum+n%10;
             n=n/10;
         }
         cout<<sum<<endl;
     }
 }
