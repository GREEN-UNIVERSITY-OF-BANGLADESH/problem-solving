#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    if(a+b<3)
	    cout<<"1"<<endl;
	    else if(3<= a+b && a+b <=10)
	    cout<<"2"<<endl;
	    else if(11<=a+b && a+b<=60)
	    cout<<"3"<<endl;
	    else
	    cout<<"4"<<endl;
	}
	return 0;
}
