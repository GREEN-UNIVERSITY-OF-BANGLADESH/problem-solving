#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int z,y,a,b,c,t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>z>>y>>a>>b>>c;
	    if((z-y)>=(a+b+c))
	    cout<<"YES"<<endl;
	    else 
	    cout<<"NO"<<endl;
	}
	return 0;
}
