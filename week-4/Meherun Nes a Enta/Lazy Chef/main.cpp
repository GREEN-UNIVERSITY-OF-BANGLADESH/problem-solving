#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,m,y;
	    cin>>x>>m>>y;
	     if(x*m>x+y)
	     cout<<x+y<<endl;
	     else 
	     cout<<x*m<<endl;
	}
	return 0;
}
