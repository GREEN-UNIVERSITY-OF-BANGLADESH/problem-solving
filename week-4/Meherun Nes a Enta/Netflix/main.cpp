#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,z,a;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y>>z>>a;
	    if(x+y>=a || x+z>=a || y+z>=a )
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
