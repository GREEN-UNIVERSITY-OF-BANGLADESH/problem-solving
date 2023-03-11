#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,a,b,c;
	cin>>n;
	 while(n--)
	 {
	     cin>>a>>b>>c;
	     if(a>b && a<c)
	     cout<<a<<endl;
	     else if(a<b && a>c)
	     cout<<a<<endl;
	     else if(b>c && b<a)
	     cout<<b<<endl;
	     else if(b>a && b<c)
	     cout<<b<<endl;
	     else 
	     cout<<c<<endl;
	 }
	return 0;
}
