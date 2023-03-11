#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    cin>>x;
	    if(x>=1 && x<100)
	    {
	        cout<<"Easy"<<endl;
	    }
	    else if(100<=x && x<200)
	    cout<<"Medium"<<endl;
	    else if(200<=x && x<=300)
	    cout<<"Hard"<<endl;
	}
	return 0;
}
