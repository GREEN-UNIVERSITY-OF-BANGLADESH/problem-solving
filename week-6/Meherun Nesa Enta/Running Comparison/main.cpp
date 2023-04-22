#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	 for(int j=0;j<t;j++)
	{
	   
	    int n,hp=0,up=0;
	    cin>>n;
	    int b[n],c[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>c[i];
	    }
	     for(int i=0;i<n;i++)
	    {
	        cin>>b[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	       if( b[i]>2*c[i] || c[i]>2*b[i])
	        hp++;
	         
	        else
	        up++;
	    }
	    cout<<abs(up)<<endl;
	    
	}
	return 0;
}
