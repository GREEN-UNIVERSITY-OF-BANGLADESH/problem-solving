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
	    if(c/b<a)
	    cout<<c/b<<endl;
	    else
	    cout<<a<<endl;
	}
	return 0;
}
