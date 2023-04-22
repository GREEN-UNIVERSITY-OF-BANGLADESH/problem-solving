#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int h,x,y,c,t;
	cin>>t;
	while(t--)
	{
	    cin>>h>>x>>y>>c;
	    int count=h* (x+(y/2));
	    if(count<=c)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}