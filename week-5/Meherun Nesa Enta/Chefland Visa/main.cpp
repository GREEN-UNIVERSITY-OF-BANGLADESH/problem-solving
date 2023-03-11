#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x1,x2,y1,y2,z1,z2;
	     cin>>x1>>x2>>y1>>y2>>z1>>z2;
	     if(x1<=x2 && y1<=y2 && z1>=z2)
	     cout<<"YES"<<endl;
	     else
	     cout<<"NO"<<endl;
	     
	}
	return 0;
}
