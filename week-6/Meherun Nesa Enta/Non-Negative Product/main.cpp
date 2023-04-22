#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--)
	{
	    int count=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int fact=a[0];
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]<0)
	        count++;
	        else if (a[i]==0){
	        count=0;
	       break;
	        }
	    }
	    if(count%2==0 )
	    cout<<"0"<<endl;
	    else
	    cout<<"1"<<endl;
	}
	return 0;
}
