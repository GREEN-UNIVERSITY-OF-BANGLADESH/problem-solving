// We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans=0;
        while(n)
        {
            ans=ans*10+n%10;
            n/=10;

        }
        cout<<ans<<endl;




    }


    return 0;
}
