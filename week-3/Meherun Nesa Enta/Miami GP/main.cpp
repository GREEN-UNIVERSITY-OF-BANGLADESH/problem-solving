#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    if((x*107)/100 >= y)
	    cout<<"YES"<<endl;
	    else 
	    cout<<"NO"<<endl;
	}
	return 0;
}
