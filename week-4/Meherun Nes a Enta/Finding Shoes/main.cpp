#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,m;
	cin>>t;
	while(t--)
	{
	    int r =0,l=0;
	    cin>>n>>m;
	     
	     if(n<m)
	     cout<<n<<endl;
	   else{
	     r =n;
	     l=abs(n-m);
	     cout<<r+l<<endl;
	   }  
	}
	return 0;
}
