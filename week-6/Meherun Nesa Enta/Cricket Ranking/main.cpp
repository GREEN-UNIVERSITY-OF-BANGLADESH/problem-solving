#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{ 
	    int a[3],b[3],A=0,B=0;
	    for(int i=0;i<3;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<3;i++)
	    {
	        cin>>b[i];
	    }
	    for(int i=0;i<3;i++){
	    if(a[i]>b[i])
	      A++;
	      else
	      B++;
	}
	if(A>B)
	cout<<"A"<<endl;
	else
	cout<<"B"<<endl;
	    
	}
	return 0;
}
