#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t ;
	char a[5],b[5];
	cin>>t;
	while(t--)
	{
	   for(int i=0;i<5;i++)
	   {
	       cin>>a[i];
	   }
	   for(int i=0;i<5;i++)
	   {
	       cin>>b[i];
	   }
	    for(int i=0;i<5;i++)
	    {
	        if(a[i]==b[i])
	        cout<<'G';
	        else
	        cout<<'B';
	    }
	    cout<<endl;
	}
	return 0;
}
