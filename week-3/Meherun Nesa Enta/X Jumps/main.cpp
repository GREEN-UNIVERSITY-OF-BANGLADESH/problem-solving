#include <iostream>
using namespace std;

int main() {
	// your code goes here
	 int t,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    int j=0;
	    if(x%y ==0)
	    cout<<x/y<<endl;
	   
	    
	    else
	    {
	       if(x>y)
	    {
	       cout<<((x%y)+(x/y))<<endl;
	    }
	    else
	     cout<<(x%y)<<endl;
	    }
	}
	return 0;
}
