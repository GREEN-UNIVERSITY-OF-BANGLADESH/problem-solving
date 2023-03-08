#include<iostream>
using namespace std;
int main()
{
    int i,t,n;
    cin>>t;
    int last,rem;
    for(i=0;i<t;i++)
    {
        cin>>n;
        last=n%10;
          while(n>=10)
        {
           rem= n%10;
           n/=10;
        }
         
        cout<<n+last<<endl;
        
    }
}