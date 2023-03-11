#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    char a,b,c,x,y;
	    cin>>a>>b>>c>>x>>y;
     if(a==x || a==y)
     cout<<a<<endl;
     else if(b==x || b==y)
     cout<<b<<endl;
     else if(c==x || c==y)
     cout<<c<<endl;
	    
	}
	return 0;
}
