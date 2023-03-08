#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i,n;
	int a,b,c,sum;
	cin>>n;
	for(i=0;i<n;i++)
	{
	    cin>>a>>b>>c;
	    sum=a+b+c;
	    if(sum==180)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
