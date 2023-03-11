#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,p,q;
	    cin>>x>>y>>p>>q;
	    p = p*10;
	    q=q*10;
	    if(x+p>y+q)
	    cout<<"Chefina"<<endl;
	    else if(x+p<y+q)
	    cout<<"Chef"<<endl;
	    else
	    cout<<"Draw"<<endl;
	}
	return 0;
}
