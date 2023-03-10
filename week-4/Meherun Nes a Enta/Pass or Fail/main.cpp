#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,x,p;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x>>p;
	    n=(x*3)-(n-x);
	    if(n>=p)
	    cout<<"PASS"<<endl;
	    else 
	    cout<<"FAIL"<<endl;
	}
	return 0;
}
