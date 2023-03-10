#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int n,t;
	cin>>t;
    while(t--)
    {
        cin>>n;
    int sum =1;
	for(int i=1;i<=n;i++)
	{
	    sum =i* sum;
	}
	cout<<sum<<endl;
    }
	return 0;
}
