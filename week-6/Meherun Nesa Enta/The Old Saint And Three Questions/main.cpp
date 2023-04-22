#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,a1,a2,b,b1,b2;
	    cin>>a>>a1>>a2>>b>>b1>>b2;
	    if(a+a1+a2 == b+b1+b2)
	    {
	        cout<<"Pass"<<endl;
	    }
	    else
	    cout<<"Fail"<<endl;
	}
	return 0;
}
