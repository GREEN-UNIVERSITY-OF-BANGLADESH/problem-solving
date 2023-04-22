#include <iostream>
using namespace std;

int main() {
	int t,d,l,r;
	cin>>t;
	while(t--)
	{
	    cin>>d>>l>>r;
	    if(d>=l && d<=r)
	    cout<<"Take second dose now"<<endl;
	    else if(d>l && d>r)
	    cout<<"Too Late"<<endl;
	    else
	    cout<<"Too Early"<<endl;
	}
	return 0;
}
