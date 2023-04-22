#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x,y,z,x1,y1,z1;
	int t;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y>>z>>x1>>y1>>z1;
	    if((x+y+z)>(x1+y1+z1))
	    cout<<"1"<<endl;
	    else 
	    cout<<"2"<<endl;
	}
	return 0;
}
