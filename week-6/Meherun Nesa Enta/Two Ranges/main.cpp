#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a[4];
	cin>>t;
	while(t--)
	{
	    int count=0;
	     for(int i=0;i<4;i++)
	     {
	         cin>>a[i];
	     }
	     int min=a[0];
	     int max=a[0];
	     for(int i=0;i<4;i++)
	     {
	         if(max<a[i])
	         max=a[i];
	         if(min>a[i])
	         min=a[i];
	     }
	     for(int i=min;i<=max;i++)
	     {
	         if(i>=a[0] && i<=a[1] || i>=a[2] && i<=a[3] )
	         count++;
	     }
	     cout<<count<<endl;
	    
	}
	return 0;
}
 
