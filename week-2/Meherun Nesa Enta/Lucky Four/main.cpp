#include<iostream>
using namespace std;
int main()
{
    int i,t,n;
    int rem;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
          int j=0;
        while(n!=0)
        {
            rem =n %10;
            n=n/10;
            if(rem==4)
              j++;
            
        }
         cout<<j++<<endl;
    }
}