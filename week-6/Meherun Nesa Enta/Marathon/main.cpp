#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int D,d,a,b,c;
	    cin>>D>>d>>a>>b>>c;
	    if(d*D<10)
	    cout<<0<<endl;
	    else if(d*D<21)
	    cout<<a<<endl;
	    else if(d*D<42)
	    cout<<b<<endl;
	    else
	    cout<<c<<endl;
	}
	return 0;
}
