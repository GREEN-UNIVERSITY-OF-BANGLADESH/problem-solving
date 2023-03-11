#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int count=0;
	    int x,a[100];
	    cin>>x;
	     while(x--)
	    {
	        cin>>a[x];
	        if(a[x]>=10 && a[x]<=60)
	          count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
