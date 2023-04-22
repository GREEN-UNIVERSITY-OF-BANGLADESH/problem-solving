#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	     int x=a+b;
	     int y=a+c;
	     int z=b+c;
	     if(x>=y && x>=z)
	     cout<<x<<endl;
	     else if(y>=z && y>=x)
	     cout<<y<<endl;
	     else
	     cout<<z<<endl;
	}
	return 0;
}
