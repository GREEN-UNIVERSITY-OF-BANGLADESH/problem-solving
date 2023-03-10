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
	    int first = 100 - a;
	    int second =200 -(b*200)/100;
	    if(first >second)
	    cout<<"SECOND"<<endl;
	    else if(first==second)
	    cout<<"BOTH"<<endl;
	    else 
	    cout<<"FIRST"<<endl;
	    
	}
	return 0;
}
