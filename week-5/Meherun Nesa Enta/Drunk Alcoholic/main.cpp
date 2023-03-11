#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int k;
	    cin>>k;
	    int sum=0;
	    for(int i=1;i<=k;i++)
	    {
	        if(i%2==0)
	         sum-=1;
	         
	         else 
	         sum +=3;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
