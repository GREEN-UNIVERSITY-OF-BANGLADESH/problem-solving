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

	     for(int i=0;i<n;i++)
	     {
	         if(a[i]==6 ||a[i]==13 || a[i]==20 || a[i]==27 || a[i]==7 || a[i]==14 || a[i]==21 ||a[i]==28 )
	          continue;
	          else
	          count++;

	     }
	     cout<<count+8<<endl;
	}
	return 0;
}
